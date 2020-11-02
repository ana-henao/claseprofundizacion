#include <iostream>
/*Reciba una cadena de caracteres, y separe los numeros del retso de carcateres, generando una cadena
solo con los caracteres y otra solo con numeros de la cadena original.
Partendo de la caena de numeros, eparalos en dos cifras y sumarlas e imprimir el resultado.
En caso de no poderse divir exactamente en dos cifras, poner ceros a la izquierda del primer numero*/
using namespace std;
// variabes globales y macros
#define TAM (int)50


int main()
{
    char a[TAM]="AB11CD44EF5X5";
    char numeros[TAM]={0};
    int conDig=0;


    cout << "imprimir solo los numeros de la cadena original"<< endl;
    //int numero=0;
    //int contadorDigitos=0;

    for(int var=0; var<TAM ; ++var){
        if(a[var]>='0' and a[var] <='9'){
            numeros[conDig++]=a[var];
        }
    }
    for (int var=conDig-1; var>=0; --var){
        cout << numeros[var] << endl;
    }
    return 0;
}
