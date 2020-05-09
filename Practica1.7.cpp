//============================================================================
// Name        : 7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   cout << "Ingrese los tres lados de un triangulo para determinar que es:" << endl;
   double a,b,c;
   cin >> a;
   cin >> b;
   cin >> c;

   if (a==b && b==c){
      cout << "El triangulo es equilátero" << endl;
   }
   else{
      if( a==b or b==c or c==a){
         cout << "El triangulo es isosceles." << endl;
      }
      else{
         cout << "El triangulo es escaleno." << endl;
      }
   }
	return 0;
}
