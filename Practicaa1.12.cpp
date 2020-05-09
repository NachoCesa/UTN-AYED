//============================================================================
// Name        : 12.cpp
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
   cout << "Ingresar el primer numero: ";
   int a = 0;
   cin >> a;

   cout << "Ingresar el segundo numero: ";
   int b = 0;
   cin >> b;

   bool na;
   if(a<0){
      na=true;
   }else{
      na=false;
   }

   bool nb;
     if(b<0){
        nb=true;
     }else{
        nb=false;
     }


   int cantidad_de_vueltas = abs(b);
   int a1=0;
   while( cantidad_de_vueltas>0 )
   {
      a1=a1+abs(a);
      cantidad_de_vueltas--;
   }

   if( na ){
      a1=a1*(-1);
   }else{
      if( nb )
         a1=a1*(-1);
   }

   if( na && nb){
      a1=a1*(-1);
   }


   cout << "La multiplicacion entre esos numeros es: " << a1;
	return 0;
}
