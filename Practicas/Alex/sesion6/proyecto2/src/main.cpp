#include <iostream>
#include "funciones.h" // Arquivo de cabeceira con declaracio´ns de funcio´ns

using namespace std;
int main()
{
int a, b;
cout << "\nIntroduce primeiro valor enteiro: ";
cin >> a;
cout << "\nIntroduce segundo valor enteiro: ";
cin >> b;
if (b != 0) {
cout << "\nCociente: " << dividir(a, b) << endl;
}
else {
cout << "Non se pode facer a division" << endl;
}
return 0;
}