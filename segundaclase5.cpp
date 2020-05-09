//============================================================================
// Name        : segundaclase5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void fechaDividir(int f,int& a,int& m,int& d){

   a=f/10000;
   m=((f%10000)-(f%100))/100;
   d=f%100;

   return;
}

int main() {
   int f,a,m,d;
   cout << "Ingresar la fecha en el formato aaaammdd para obtener la info por separado ";
   cin >> f;

   fechaDividir(f,a,m,d);

   cout << "El día es " << d << " el mes es " << m << " y el año es " << a;

	return 0;
}
