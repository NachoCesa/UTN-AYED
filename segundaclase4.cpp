//============================================================================
// Name        : segundaclase4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int fechaUnificar(int d, int m, int a){
   int x;

   x=(a*10000)+(m*100)+d;

   return x;
}

int main() {
   int d,m,a;
   cout << "Ingresar el día: ";
   cin >> d;
   cout << "Ingresar el mes: ";
   cin >> m;
   cout << "Ingresar el año: ";
   cin >> a;

   int fechaFinal = fechaUnificar(d,m,a);

   cout << "La fecha en formato aaaammdd es: " << fechaFinal;

	return 0;
}
