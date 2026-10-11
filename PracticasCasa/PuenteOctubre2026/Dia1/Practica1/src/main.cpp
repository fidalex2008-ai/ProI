#include <iostream>
#include <math.h>

using namespace std;

int LerEnteiro;

int main(){

const float pi = 3.141592;
int radio;
float perimetro;
int area;

do{
cout << "\nIntroduzca el radio de la circunferencia: " << endl;
cin >> radio;
}
while (radio <= 0);

cout << "\nEl perimetro es igual a: " << radio*pi*2 << endl;
cout << "\nEl area es igual a: " << pi*pow(radio,2) << endl;

return 0;
}