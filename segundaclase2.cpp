//============================================================================
// Name        : segundaclase2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool esPrimo(int a){ //n pasa a ser a
   int i = 1; //numero por el que voy a dividir n varias veces para saber si es primo
      int x = 0; //contador que me dice cuantas veces se dividio con resto 0 para saber si es primo
      bool b = true; //vof si es primo

      while(a>=i){ //mientras que n sea mayor o igual al num que lo divide sigue contando
         if(a%i==0){
            x++; //contador de cuantas veces se divide n con resto 0
         }
         i++; //aumenta el numero que divide n
      }
      if(x>2){
         b = false;
      }else{
         b = true;
      }
   return b;
}

int main() {
   int n;
   cout << "Ingrese un numero para saber si es primo o no: ";
   cin >> n;

   bool esp = esPrimo(n); //b se transforma en esp gracias a la funcion esPrimo

   if(esp){
      cout << n << " es primo.";
   }else{
      cout << n << " no es primo.";
   }

	return 0;
}
