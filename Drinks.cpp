/*Al pequeño Vasya le encanta el jugo de naranja. Por eso, cualquier alimento o bebida en su cocina necesariamente
 contiene jugo de naranja. Hay n bebidas en su refrigerador, y la fracción de volumen de jugo de naranja en la 
 i-ésima bebida equivale a pi por ciento.

Un día, Vasya decidió prepararse un cóctel de naranja. Tomó proporciones iguales de cada una de las n bebidas y 
las mezcló. Luego se preguntó cuánto jugo de naranja tendría el cóctel.

Calcula la fracción de volumen de jugo de naranja en la bebida final.

Entrada
La primera línea de entrada contiene un solo entero n (1 ≤ n ≤ 100): el número de bebidas con naranja en el 
refrigerador de Vasya. La segunda línea contiene n enteros pi (0 ≤ pi ≤ 100): la fracción de volumen de jugo 
de naranja en la i-ésima bebida, en porcentaje. Los números están separados por un espacio.

Salida
Imprima la fracción de volumen en porcentaje de jugo de naranja en el cóctel de Vasya. La respuesta se 
considerará correcta si el error absoluto o relativo no supera 10  - 4.*/

#include <iostream>
using namespace std;


float HallarProm(int *Cant){
    int *list=new int[*Cant]; 
    for (int i=0;i<*Cant;i++){
        cin>>list[i];
    }
    float Suma=0.0;
    float *pSuma=&Suma;
    for (int i=0;i<*Cant;i++){
        *pSuma=list[i]+*pSuma;
    }
    float *promedio=new float;
    *promedio =*pSuma / *Cant;
    return *promedio;
}

int main(){
    int *n=new int;
    cin>>*n;
    float Result=HallarProm(n);
    cout<<Result;
}

