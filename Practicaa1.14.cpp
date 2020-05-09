//============================================================================
// Name        : 14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
	cout << "Ingresar un numero entero ";
	int n;
	cin >> n;

	int contador = 2;
	bool esprimo;
   while( contador<n){
      if(n%contador==0){
         esprimo=false;
      }
      contador=contador+1;

   }

   if(n==0){
      cout << "Usted ingreso el numer 0.";
   }

   if(esprimo){
      cout << n << " es un numero primo.";
   }else{
      cout << n << " no es un numero primo.";
   }

	return 0;
}
