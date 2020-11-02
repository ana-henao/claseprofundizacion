#include <iostream>
/*Reciba una cadena de caracteres, y separe los numeros del retso de carcateres, generando una cadena
solo con los caracteres y otra solo con numeros de la cadena original.
Partendo de la caena de numeros, eparalos en dos cifras y sumarlas e imprimir el resultado.
En caso de no poderse divir exactamente en dos cifras, poner ceros a la izquierda del primer numero*/
using namespace std;
// variabes globales y macros
#define TAM (int)50//reemplaza tam por int 10 donde se ponga tam


int main()
{
    char a[TAM]="AB11CD44EF5x5";
    for (int var=0; var<TAM ;var++){
        if (a[var]!='\0'){
        cout <<a[var] << endl;
        }
    }

    cout << "imprimir solo los numeros de la cadena original" << endl;
    for(int var=0; var<TAM; var++){
        if(a[var]>='0' and a[var] <='9'){
        cout << a[var] << endl;
          }
    }

    return 0;
}
