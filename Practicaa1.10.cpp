//============================================================================
// Name        : 10.cpp
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
   cout << "Ingresar todas las fechas solicitadas en el siguiente formato: aaaammdd" << endl;
   cout << "Ingresar la fecha de hoy: " << endl;
   int fechahoy;
   fechahoy = 0;
   cin >> fechahoy;

   cout << "Ingresar la primera fecha deseada: " << endl;
   int fecha1;
   fecha1 = 0;
   cin >> fecha1;

   cout << "Ingresar la segunda fecha deseada: " << endl;
   int fecha2;
   fecha2 = 0;
   cin >> fecha2;

   int d1;
   d1= ((fechahoy/10000)*365)+(((fechahoy%10000)-(fechahoy%100))/100)+(fechahoy%100);
   if((fechahoy/10000)%4==0){
         if((fechahoy/10000)%100==0 and (fechahoy/10000)%400!=0 ){

         }else{
            d1=d1+1;
         }
      }else{

      }

   int d2;
   d2= ((fecha1/10000)*365)+(((fecha1%10000)-(fecha1%100))/100)+(fecha1%100);
   if((fecha1/10000)%4==0){
         if((fecha1/10000)%100==0 and (fecha1/10000)%400!=0 ){

         }else{
            d2=d2+1;
         }
      }else{

      }
   int a;
   a=fechahoy-fecha1;
   int a1;
   a1= abs(a);

   int d3;
   d3= ((fecha2/10000)*365)+(((fecha2%10000)-(fecha2%100))/100)+(fecha2%100);
   if((fecha2/10000)%4==0){
      if((fecha2/10000)%100==0 and (fecha2/10000)%400!=0 ){

      }else{
         d3=d3+1;
      }
   }else{

   }
   int b;
   b=fechahoy-fecha2;
   int b1;
   b1=abs(b);

   if(a1>b1){
      cout << "La segunda fecha es la más cercana a hoy." << endl;
   }
   else{
      cout << "La primera fecha es la más cercana a hoy." << endl;
   }

	return 0;
}
