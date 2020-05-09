//============================================================================
// Name        : 11.cpp
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
   cout << "Ingresar el año:" << endl;
   int anio;
   cin >> anio;
   bool bcst = false;

   if(anio%4==0){
            if(anio%100==0 and anio%400!=0 ){

            }else{
               bcst=true;
            }
         }else{

         }
   int ene = 31;
   int feb;
   if(bcst==true){
      feb=29;
   }
   else{
      feb=28;
   }
   int marz = 31;
   int abr = 30;
   int may = 31;
   int jun = 30;
   int jul = 31;
   int ago = 31;
   int sep = 30;
   int oct = 31;
   int nov = 30;
   int dic = 31;

   cout << "Ingresar el mes que desea saber el día:" << endl;
   int m = 0;
   cin >> m;

   if(m==1){
      cout << "Tiene " << ene << " días." << endl;
   }else{
      if(m==2){
         cout << "Tiene " << feb << " días." << endl;
      }else{
         if(m==3){
            cout << "Tiene " << marz << " días." << endl;
         }else{
            if(m==4){
               cout << "Tiene " << abr << " días." << endl;
            }else{
               if(m==5){
                  cout << "Tiene " << may << " días." << endl;
               }else{
                  if(m==6){
                     cout << "Tiene " << jun << " días." << endl;
                  }else{
                     if(m==7){
                        cout << "Tiene " << jul << " días." << endl;
                     }else{
                        if(m==8){
                           cout << "Tiene " << ago << " días." << endl;
                        }else{
                           if(m==9){
                              cout << "Tiene " << sep << " días." << endl;
                           }else{
                              if(m==10){
                                 cout << "Tiene " << oct << " días." << endl;
                              }else{
                                 if(m==11){
                                    cout << "Tiene " << nov << " días." << endl;
                                 }else{
                                    if(m==12){
                                       cout << "Tiene " << dic << " días." << endl;
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }



   return 0;
}
