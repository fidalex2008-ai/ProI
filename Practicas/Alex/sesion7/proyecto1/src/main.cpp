#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int num1 , num2 ;
    int sum;

    num1 = lerEnteiro ("Introduzca un numero: ");
    num2 = lerEnteiro ("Introduzca el segundo numero: ");

    sum = sumarDosValores (num1 ,num2);

    cout << "La suma de los valores comprendidos entre " << num1 << " y " << num2 << " es igual a : " << sum << endl;

    return 0;
}