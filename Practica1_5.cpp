//============================================================================
// Name        : Practica1_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   cout << "Ingresar un numero" << endl;
   int a;
   cin >> a;
   cout << "Ingresar otro numero" << endl;
   int b;
   cin >> b;

   if(a==b){
      cout << "Son iguales" << endl;
   }
   else
   {
      if( a>b ){
      cout << a << " es mayor que " << b << endl;
      }
      else
      {
      cout << b << " es mayor que " << a << endl;
      }
   }

	return 0;
}
