# ========================================
# IMPLEMENTAZIONE BASE DA ZERO
# ========================================
class ModuleNode:
   def __init__(self, node_id, weight=1.0, active=True):
       self.id = node_id
       self.weight = weight
       self.active = active

def simple_xor_hash(value):
   h = 0
   for ch in value:
       h ^= (h << 5) + (h >> 3) + ord(ch)
       h &= 0xFFFFFFFFFFFFFFFF  # limita a 64 bit
   return h

def simple_hash(value):
   """
   Implementazione manuale di una funzione hash deterministica.
   Nessun hashlib, nessun modulo esterno.
   Usa una semplice rotazione e somma modulare su 64 bit.
   """
   h = 0
   for ch in value:
       # rotazione a sinistra di 5 bit e somma del carattere
       h = ((h << 5) - h + ord(ch)) & 0xFFFFFFFFFFFFFFFF
   return h

def rendezvous_hash(key, nodes):
   """
   Algoritmo manuale Rendezvous (Highest Random Weight).
   Per ogni nodo attivo, calcola un punteggio pseudo-random
   e sceglie quello più alto.
   """
   best_node = None
   best_score = -1
   for node in nodes:
       if not node.active:
           continue
       # Combina key e id del nodo in una stringa
       combined = key + node.id
       #print("Stampando il valore combined", combined)
       # Hash fatto a mano
       h_value = simple_xor_hash(combined)
       #print("Stampando il valore h_value", h_value)
       # Applica il peso del nodo
       score = h_value * node.weight
       if score > best_score:
           best_score = score
           best_node = node
   return best_node

def basic_policy(module_id, flow_id):
   """
   Funzione base per determinare la porta di uscita.
   Semplice esempio deterministico:
   - mod-A: sempre uscita 1
   - mod-B: pari → 2, dispari → 3
   - mod-C: sempre 3
   """
   if module_id == "mod-A":
       return 1
   if module_id == "mod-B":
       return 2 if int(flow_id) % 2 == 0 else 3
   if module_id == "mod-C":
       return 3
   return 0  # fallback

def route_packet(packet, modules):
   """
   Implementazione completa del routing:
   1. Calcola la chiave unendo porta_in e flow_id
   2. Sceglie il modulo con hash più alto
   3. Determina la porta di uscita
   """
   key = str(packet["port_in"]) + "|" + str(packet["flow_id"])
   chosen_module = rendezvous_hash(key, modules)
   output_port = basic_policy(chosen_module.id, packet["flow_id"])
   return {
       "input_port": packet["port_in"],
       "flow_id": packet["flow_id"],
       "chosen_module": chosen_module.id,
       "output_port": output_port
   }

# ========================================
# ESEMPIO DI UTILIZZO
# ========================================
if __name__ == "__main__":
   # Definizione dei moduli interni
   modules = [
       ModuleNode("mod-A", weight=1.0),
       ModuleNode("mod-B", weight=1.0),
       ModuleNode("mod-C", weight=1.0)
   ]
   # Simuliamo pacchetti in ingresso
   packets = [{"port_in": 1, "flow_id": i} for i in range(1, 11)]
   for pkt in packets:
       result = route_packet(pkt, modules)
       print(
           f"Flow {result['flow_id']} | ingresso {result['input_port']} "
           f"→ modulo {result['chosen_module']} → uscita {result['output_port']}"
       )