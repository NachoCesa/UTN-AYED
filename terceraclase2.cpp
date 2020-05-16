//============================================================================
// Name        : terceraclase2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Fecha{
   int d;
   int m;
   int a;
};

Fecha fechaCreate(int d, int m, int a){
   Fecha f1;
   f1.d = d;
   f1.m = m;
   f1.a = a;

   return f1;
}

int diasXMes(Fecha& f1, bool& bisiesto){
   int da;
   if((f1.m==1)or(f1.m==3)or(f1.m==5)or(f1.m==7)or(f1.m==8)or(f1.m==10)or(f1.m==12)){
      da=31;
   }else{
      if((f1.m==4)or(f1.m==6)or(f1.m==9)or(f1.m==11)){
         da=30;
      }else{
         if(f1.m==2){
            if(bisiesto==true){
               da=29;
            }else{
               da=28;
            }
         }
      }
   }

   return da;
}

bool anioBisiesto(Fecha f1){
   bool r;
   if(f1.a%4==0){
      if(f1.a%100==0 && f1.a%400!=0){
         r = false;
      }else{
         r = true;
      }
   }
   return r;
}

void ingresarFecha(Fecha f1){
   cout << "Año: ";
   cin >> f1.a;
   cout << "Mes: ";
   cin >> f1.m;
   cout << "Día: ";
   cin >> f1.d;
}

bool cantidadDiasMes(Fecha f1){
   bool ok = false;
   bool bisiesto = anioBisiesto(f1);
   int cantidadMesP = diasXMes(f1,bisiesto);
   if(f1.d > cantidadMesP){
      ok = true;
   }
   if(f1.d<=0){
      ok = true;
   }
   if(f1.m>12){
      ok = true;
   }
   if(f1.m<=0){
      ok = true;
   }

   return ok;
}

void fechaVerificar(Fecha f1){
   bool error = cantidadDiasMes(f1);
   if(error==true){
      cout << "La fecha que ingreso es invalida, ingrese una nueva." << endl;
      ingresarFecha(f1);
   }else{

   }
}

int main() {
   int d, m, a;
	cout << "Ingresar el día: ";
	cin >> d;
	cout << "Ingresar el mes: ";
	cin >> m;
	cout << "Ingresar el año: ";
	cin >> a;

	Fecha f1 = fechaCreate(d,m,a);

	fechaVerificar(f1);

	cout << "La fecha que ingreso es valida.";

	return 0;
}
