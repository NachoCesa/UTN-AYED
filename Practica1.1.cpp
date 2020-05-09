//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   cout << "Ingrese el primer numero" << endl;
   int a;
   cin >> a;

   cout << "Ingrese el segundo numero" << endl;
   int b;
   cin >> b;

   int s;
   s = a+b;

   int d;
   d = a-b;

   int p;
   p = a*b;

   int c;
   c = a/b;

   cout << "La suma de los numeros es " << s << endl;
   cout << "La diferencia entre los numeros es " << d << endl;
   cout << "El producto entre los numeros es " << p << endl;
   cout << "El cociente entre los numeros es " << c << endl;

	return 0;
}
