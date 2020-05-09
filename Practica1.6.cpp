//============================================================================
// Name        : 6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   cout << "Ingresar tres numero enteros diferentes entre si:" << endl;
   int a,b,c;
   cin >> a;
   cin >> b;
   cin >> c;

      if(a>b && a>c)
      {
         cout << a << " es el mayor de los tres." << endl;
         if(b>c){
            cout << b << " es el del medio y " << c << " es el más chico." << endl;
         }
         else{
            cout << c << " es el del medio y " << b << " es el más chico." << endl;
         }
      }
      else{
         cout << a << " es el mas chico." << endl;
         if( b>c ){
            cout << b << " es el mayor y " << c << " es el del medio." << endl;
         }
         else{
            cout << c << " es el mayor y " << b << " es el del medio." << endl;
         }
      }

	return 0;
}
