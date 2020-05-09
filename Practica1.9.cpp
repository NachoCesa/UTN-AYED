//============================================================================
// Name        : 9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   int d,m,a;
   cout << "Ingresar el día:" << endl;
   cin >> d;
   cout << "Ingresar el mes:" << endl;
   cin >> m;
   cout << "Ingresar el año:" << endl;
   cin >> a;

   a=a*10000;
   m=m*100;
   int f;
   f=a+m+d;

   cout << f << endl;

	return 0;
}
