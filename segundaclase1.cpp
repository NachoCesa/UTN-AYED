//============================================================================
// Name        : segundaclase1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double factorial(int n){
   int i=n; //igualizo "n" e "i" para poder restar i e irlo multiplicando por b
   int b = 1; //numero final que pasa a ser f en el main
   while(i>0){ //mientras que i sea mayor a 0 se sigue multiplicando i por b
      b=b*i;
      i--; //se resta i para que en algun momento llegue a ser 0 y se pare
   }
   return b; //se retorna b
}

int main() {
   int t;
   cout << "Ingrese el numero del que desea saber su factorial: ";
   cin >> t;

   double f = factorial(t); //se traduce el b de la funcion en f del main

   cout << "El factorial de " << t << " es " << f; //se muestra el factorial

	return 0;
}
