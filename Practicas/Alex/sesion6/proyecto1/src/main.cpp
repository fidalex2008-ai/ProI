#include <iostream>

using namespace std; 


int dividir (int a , int  b){
   
    int cociente;
    cociente = (a/b);
    return cociente;

}

int main() {
   
    int dividendo , divisor , resultado ;
    
   
    cout << "Introduzca el dividendo: ";
    cin >> dividendo;

    cout << "Introduzca el divisor: ";
    cin >> divisor;

    resultado = dividir (dividendo , divisor);
    cout << "El resultado de: " << dividendo << "/" << divisor << "= " << resultado << endl;


    return 0;

}