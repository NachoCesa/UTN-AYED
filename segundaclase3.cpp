//============================================================================
// Name        : segundaclase3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool esBisiesto(int a){
   bool r;
   if(a%4==0){
      if(a%100==0 && a%400!=0){
         r = false;
      }else{
         r = true;
      }
   }
   return r;
}

int fechaDiaMes(int a, int b){
   int x;
   int aux = b;
   bool r = esBisiesto(aux);
   if((a==1)or(a==3)or(a==5)or(a==7)or(a==8)or(a==10)or(a==12)){
      x=31;
   }else{
      if((a==4)or(a==6)or(a==9)or(a==11)){
         x=30;
      }else{
         }
      }
      if(a==2){
         if(r){
          x=29;
         }else{
          x=28;          }
         }
   return x;
}

int main() {
   int anio, mes;
   cout << "Ingresar el mes y el año que se desea saber la cantidad de días del mes: ";
   cin >> mes >> anio;

   int d = fechaDiaMes(mes, anio);

   cout << "El mes " << mes << " del año " << anio << " tiene un total de " << d << " días.";

	return 0;
}
