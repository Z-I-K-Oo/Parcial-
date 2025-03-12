tipo_demonio = input("Que tipo de demonio: ")
distancia = float(input())

velocidad = 0

if tipo_demonio == "Zombieman":
    velocidad = 5
elif tipo_demonio == "Imp":
    velocidad = 10
elif tipo_demonio == "Baron of Hell":
    velocidad = 3

if velocidad == 0:
    print("Tipo de demonio no válido")
else:
    tiempo = distancia / velocidad
    print("Tiempo: {:.2f} segundos".format(tiempo))