from collections import deque

class cola(numero):
    def __init__ (self):
        self.items=deque()
    def encolar(self,x):
        self.items.appendleft(x)
    def muestra_cola(self):
        print(self.items)
    def esta_vacia(self):
        if len(self.items)==0:
            return True
        else:
            return False
    def desencolar(self):
        if self.esta_vacia():
            return None
        else:
            return self.items.pop()
    def numeros_pares(self):
       cola=deque([])
       for i in range (2,22,2):
            cola.append(i)
       while cola:
           print:"Datos: "+str(cola.popleft())
    
cola=0
numero=0
i=0
k=0
if numero>0:
    i=i+1
print:"ingrese elementos de la cola"
    numero.encolar():
    muestra_cola(i):
#def __init__ (self):
#      self.items=deque()
#   def encolar(self,x):
#       self.items.appendleft(x)
#   def muestra_cola(self):
#       print(self.items)
print:"verificar si los elementos ingresados son validos"
    numero.esta_vacia():
print:"los numeros pares de la cola son"
    numero.numeros_pares():
