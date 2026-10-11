#include "lectura.h"
#define MAXCAD
#include <iostream>
using namespace std;

void lerCadea (const char mensaxe[ ], char cad [])
{
cout << mensaxe;

cin.getline(cad, MAXCAD);
}
int lerEnteiro (const char mensaxe [])
{
char cad [MAXCAD];
lerCadea( mensaxe, cad );
return atoi(cad);
}
float lerReal (const char mensaxe [])
{
char cad [MAXCAD];
lerCadea(mensaxe, cad);
return atof(cad);
}