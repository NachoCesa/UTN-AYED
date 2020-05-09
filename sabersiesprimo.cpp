//============================================================================
// Name        : sabersiesprimo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   int n; //numero que deseo saber si es primo
   cout << "Ingresar el numero que desea saber si es primo: ";
   cin >> n;
   int i = 1; //numero por el que voy a dividir n varias veces para saber si es primo
   int x = 0; //contador que me dice cuantas veces se dividio con resto 0 para saber si es primo
   bool esPrimo = true; //vof si es primo

   while(n>=i){ //mientras que n sea mayor o igual al num que lo divide sigue contando
      if(n%i==0){
         x++; //contador de cuantas veces se divide n con resto 0
      }
      i++; //aumenta el numero que divide n
   }
   if(x>2){
      esPrimo = false;
   }else{
      esPrimo = true;
   }

   if(esPrimo){
      cout << n << " es primo.";
   }else{
      cout << n << " no es primo.";
   }



	return 0;
}
