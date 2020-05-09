//============================================================================
// Name        : 15.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
/*  Dado un valor entero n, informar los primeros n números primos.
 * Por ejemplo: si n==6 entonces la salida debe ser: 1, 2, 3, 5, 7, 11.
 */
int main() {

      int x;
      cout <<"ingrese el numero que quiere comparar:" <<endl;
      cin>>x;

      int cont=0;
      int n=1;

      while (cont<x)
      {
         bool esPrimo=true;
         int i=2;
         while(i<n)
         {
            if (n%i==0){
               esPrimo=false;
            }
            i=i+1;
         }
         if(esPrimo){
                  cout <<n<<endl;
                  cont = cont+1;
               }

               n=n+1;
      }

   return 0;
}
