#include <iostream>
#include <math.h>

using namespace std;

int main() {
/*for: conocemos el numero de repeticiones, while (condición) do (acción)*/ 
    int num;
    bool esPrimo;
    int divisor;

    esPrimo = false;
    cout << "Introduzca un numero: "  ;
    cin >> num;

    if (num != 0 && num != 1 )
        do {
            if (num % divisor == 0){
                esPrimo = true;

            }
            ++divisor;

            
        } while (!esPrimo && divisor <((num/2)+1));







    if (esPrimo){
        cout << "El numero " << num << " es primo." << endl;

    }
    else cout << "El número no es primo." << endl;
}