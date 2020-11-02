#include <iostream>
/*Reciba una cadena de caracteres, y separe los numeros del retso de carcateres, generando una cadena
solo con los caracteres y otra solo con numeros de la cadena original.
Partendo de la caena de numeros, eparalos en dos cifras y sumarlas e imprimir el resultado.
En caso de no poderse divir exactamente en dos cifras, poner ceros a la izquierda del primer numero*/
using namespace std;
// variabes globales y macros
#define TAM (int)10


int main()
{
    char a[TAM]="AB11CD44";
    for (int var=0; var<TAM ;var++){
        cout <<a[var] << endl;
    }

    return 0;
}
