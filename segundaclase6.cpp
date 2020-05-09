//============================================================================
// Name        : segundaclase6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>
#pragma warning(disable:4886)
using namespace std;

// asigna la fecha actual a los parametros dia, mes y anio
void getDate(int& dia, int& mes, int& anio)
{
   // fecha actual expresada en segundos
   time_t timestamp;
   time(&timestamp);

   // separo la fecha actual en atributos
   struct tm* fechaActual = localtime(&timestamp);
   dia = fechaActual->tm_mday;
   mes = fechaActual->tm_mon+1;
   anio = fechaActual->tm_year+1900;
}

int main() {
   int a;
   cin >> a;
   switch(a){
   case 1:
      cout << "Sos re trolo";
      break;
   case 2:
      cout << "Te la re comes";
      break;
   }
	return 0;
}
