"""Parece que fue ayer cuando empezó el 2013. ¿Sabías que 
el 2013 es el primer año después de 1987 con dígitos 
totalmente distintos?

Ahora te proponemos resolver el siguiente problema: 
dado un año, encuentra el menor número de año que sea 
estrictamente mayor que el dado y que tenga solo dígitos 
distintos.

Entrada: Una sola línea contiene el entero `y` 
(1000 ≤ `y` ≤ 9000), que representa el año.

Salida: Se imprime un único entero: el menor
 número de año que sea estrictamente mayor que 
 `y` y cuyos dígitos sean todos distintos. Se 
 garantiza que la respuesta existe."""


a=int(input())
for i in range (a+1,9013):
    element=str(i)
    if len(set(element)) == 4:
        print(i)
        break


        


