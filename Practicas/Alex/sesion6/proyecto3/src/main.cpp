#include "lectura.h"

int main(){
    int num1;
    float num2;
    num1 = LerEnteiro ("Introduzca asgnaturas de matriculación: ");
    num2 = LerReal ("Introduzca euros: ");

    cout << "Asignaturas: " << num1 << endl;
    cout << monedero << num2 << endl;

    return 0;
}
