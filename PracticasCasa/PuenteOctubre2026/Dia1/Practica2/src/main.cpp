//Celsius * (9/5) +32 UU Celsius + 273
#include <iostream> 
#include <math.h>

using namespace std;

int main(){

    int celsius;
    int kelvin;
    int fahranheit;

    do{
    cout << "\nIntroduzca la temperatura en celsius: " << endl;
    cin >> celsius;
    }
    while (celsius < -273.15);

    cout << "\nLa temperatura en Fahranheit es de: " << (celsius*9/5)+32 << " ºF" << endl;
    cout << "\nLa temperatura en Kelvin es de: " << celsius+273.15 << " ºK" << endl;

    return 0;



}