//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   cout << "Ingrese un valor" << endl;
   int n;
   cin >> n;

   double a;
   a=n/5;

   double b;
   b=n%5;

   double c;
   c=a/7;

   cout << "La quinta parte del numero es " << a << " ,el residuo de las quintas partes es " << b << " y la septima parte de la quinta parte es " << c << endl;


	return 0;
}
