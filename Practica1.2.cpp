//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

   cout << "Ingrese un valor entero" << endl;
   int a;
   cin >> a;

   cout << "Ingrese otro valor entero" << endl;
   int b;
   cin >> b;

   if( b==0 ){
      cout << "Math Error" << endl;
   }
   else{
      int c;
      c = a/b;
      cout << "El cociente es " << c << endl;
   }

	return 0;
}
