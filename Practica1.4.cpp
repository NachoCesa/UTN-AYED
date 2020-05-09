//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


   cout << "Ingresar un numero " << endl;
   int n;
   cin >> n;

   cout << "Ingresar otro numero " << endl;
   int na;
   cin >> na;

     if( n>na )
     {
        cout << n << " es mayor que " << na;
     }
     else
     {
        cout << na << " es mayor que " << n;
     }
     return 0;
}

