//============================================================================
// Name        : terceraclase1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Fraccion
{
   int n;
   int d;
};

bool verificarDifCero(int d){
   bool siono = false;
   if(d==0){
      siono = true;
   }else{
      siono = false;
   }

   return siono;
}

void  fraccionVerificar(int& d){
  bool dc = verificarDifCero(d);
  if( dc == true){
     cout << "Ingresar un denominador diferente a 0: ";
     cin >> d;
  }
}

double dividirDosNum(double n, double d){
   double division;
   division = d/n;
   return division;
}

double fraccionCreate(Fraccion f){
   double fraccionConComa;

   fraccionConComa = dividirDosNum(f.n, f.d);

   return fraccionConComa;
}

int main() {
   int d;
   int n;
	cout << "Ingresar el denominador: ";
	cin >> d;
	cout << endl << "Ingresar el numerador: ";
	cin >> n;

	fraccionVerificar(d);
   Fraccion f1 = {d,n};
	double fraccionComa = fraccionCreate(f1);

	cout << "El numero con coma de la fraccion es: " << fraccionComa;

	return 0;
}
