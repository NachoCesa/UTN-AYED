//============================================================================
// Name        : 8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   cout << "Ingresar un numero de 8 digitos tal que aaaammdd represente a�o, mes y d�a." << endl;
   int f;
   cin >> f;

   int a;
   a=f/10000;

   int d;
   d=f%100;

   int m;
   m=((f%10000)-(f%100))/100;

   cout << "El d�a es " << d << endl;
   cout << "El mes es " << m << endl;
   cout << "El a�o es " << a << endl;
   cout << d << "/" << m << "/" << a << endl;
	return 0;
}
