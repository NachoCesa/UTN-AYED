#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_


#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

// --[ Funciones Basicas ]--

// Descripcion: Retorna la longitud de la cadena s
// Paramerto:
//    s - La cadena cuya longitud se desea conocer
// Retorna: la longitud de la cadena s
// Ejemplo: l
int length(string s)
{
   int x = 0;
   for(int i = 0;s[i]!='\0';i++){
      x++;
   }
   return x;
}

// Retorna la cantidad de veces que la cadena s contiene a c
int charCount(string s,char c)
{
   int x=0;
   for(int i = 0;length(s)>i;i++){
      if(s[i]==c){
         x++;
      }
   }
   return x;
}

// Retorna la subcadena de s comprendida entre d (inclusive) y h (no inclusive)
string substring(string s,int d,int h)
{
   string x = "";
   for(int i=d-1;i<h-1;i++){
      x+=s[i];
   }
   return x;
}

// Retorna la subcadena de s que va desde d (inclusive) hasta el final
string substring(string s,int d) // ok
{
   string x = "";
   for(int i = d;i!=length(s);i++){
      x+=s[i];
   }
   return x;
}

// Retorna la posicion de la primer ocurrencia
// de c dentro s, o -1 si s no contiene a c
int indexOf(string s,char c) // ok
{
   int x=-1;
   for(int i = 0;i!=length(s);i++){
      if(c==s[i]){
         x=i+1;
         break;
      }
   }
   return x;
}

// Retorna la posicion de la primer ocurrencia de c dentro de s
// considerando la subcadena de s que va desde offset hasta el final.
// Ejemplo: indexOf("ALGORITMOS",'O',7) retorna: 1
int indexOf(string s,char c,int offSet) // ok
{
   string o = substring(s,offSet);
   int x = -1;
   for(int i = 0;i!=length(o);i++){
      if(o[i]==c){
         x=i;
      }
   }
   return x;
}

// Retorna la posicion de la ultima ocurrencia de c dentro de s
// o -1 si s no contiene a c
int lastIndexOf(string s,char c)
{
   int x=-1;
      for(int i = 0;i!=length(s);i++){
         if(c==s[i]){
            x=i+1;
         }
      }
      return x;
   return 0;
}

// Retorna la posicion de la n-esima ocurrencia de c dentro de s.
// Por ejemplo: indexOfN("pedro|pablo|juan|rolo",'|',2) retorna 11.
int indexOfN(string s,char c,int n)
{
   int f;
   int j = 0;
      for(int i = 0;i<length(s);i++){
         if(s[i]==c){
            j++;
            if(j==n){
               f=i;
            }
         }
      }
   return f;
}

// Retorna el valor numerico de ch.
// Ejemplo: charToInt('4') retorna: 4.
int charToInt(char ch)
{
   int x = ch;
   int f;
   f=x-48;
   return f;
}

// Retorna el valor char de i.
// Ejemplo: intToChar(4) retorna: '4'.
char intToChar(int i)
{
   char f;
   int x = i+48;
   f=x;
   return f;
}

int potencia(int a, int b)
{
   int x=1;
   for(int i=0;i<b;i++){
      x*=a;
   }
   return x;
}

// retorna el i-esimo digito de n contando desde la derecha
int getDigit(int n,int i) // ok
{
   int x;
   int p = i+1;

   x=n%(potencia(10,p));
   x=x/potencia(10,i);

   return x;
}

int digitCount(int i) // ok
{
   int x=0;
   while(i!=0){
      i=i/10;
      x++;
   }
   return x;
}

string intToString(int num) // ok
{
   string x = "";
   int l = digitCount(num);
   int cont = 0;
   while(cont<l){
      l--;
      int y = getDigit(num,l);
      char z = intToChar(y);
      x=x+z;
   }
   return x;
}

//retorna a que posicion centecimal se refiere el numero (1=1,2=10,3=100,4=1000,etc)
int getPosition(int x){
   int f;
   for(int i = 0;x>i;i++){
      f=potencia(10,i);
   }
   return f;
}


int stringToInt(string s) // ok
{
   int f=0,j=1;
   char c;
   for(int i=0;i<length(s);i++){
      c=s[length(s)-1-i];
      f=f+charToInt(c)*j;
      j=j*10;
   }
   return f;
}

int stringToInt(string s,int b) // ok
{
   int l = length(s);
   int res = 0;
   for(int i = 0;i<l;i++){
      res += charToInt(s[l-i-1]*(int)ceil(pow(b,i)));
   }
   return 0;
}

string charToString(char c)
{
   string f = "";
   f=f+c;
   return f;
}

char stringToChar(string s)
{
   char f;
   f=s[0];
   return f;
}

string doubleToString(double d)
{
   // PROGRAMAR AQUI...
   return "";
}

double stringToDouble(string s)
{
   // PROGRAMAR AQUI...
   return 0;
}

bool isEmpty(string s)
{
   bool f = false;
   if(s==" "){
      f=true;
   }
   return f;
}

bool contains(string s, char c)
{
   bool f = false;
   for(int i = 0;i!=length(s);i++){
      if(s[i]==c){
         f=true;
      }
   }
   return f;
}

string replace(string s, char oldChar, char newChar)
{
   for(int i = 0;i<length(s);i++){
      if(s[i]==oldChar){
         s[i]=newChar;
      }
   }
   return s;
}

string insertAt(string s,int pos,char c)
{
   string pinter = " ";
   string sinter = " ";
   pinter = substring(s,1,pos);
   sinter = substring(s,pos);
   string f = pinter+c+sinter;

   return f;
}

string removeAt(string s,int pos)
{
   string pinter;
   string sinter;
   pinter = substring(s,1,pos+1);
   sinter = substring(s,pos+1);
   string f = pinter+sinter;

   return f;
}

string ltrim(string s)
{
   int i = 0;
   while(s[i]==' '){
      s = removeAt(s,i);
   }
   return s;
}

string rtrim(string s)
{
   for(int i = length(s);i>0;i--){
      if(s[i]==' '){
         s = removeAt(s,i);
      }
   }
   return s;
}

string trim(string s)
{
   int i = 0;
      while(s[i]==' '){
         s = removeAt(s,i);
      }
      for(int j = length(s);j>0;j--){
            if(s[j]==' '){
               s = removeAt(s,j);
            }
         }
   return s;
}

string replicate(char c,int n)
{
   string f = "";
   for(int i = 0;i<n;i++){
    f+=c;
   }
   return f;
}

string spaces(int n)
{
   string f = "";
   for(int i = 0;i<n;i++){
      f+=' ';
   }
   return f;
}

string lpad(string s,int n,char c)
{
   string f = "";
   string x = replicate(c,n-length(s));
   if(length(s)<n){
      f = x+s;
   }
   return f;
}

string rpad(string s,int n,char c)
{
   string f = "";
      string x = replicate(c,n-length(s));
      if(length(s)<n){
         f = s+x;
      }
   return f;
}

string cpad(string s,int n,char c)
{
   string f = "";
         string x = replicate(c,(n-length(s))/2);
         if(length(s)<n){
            f = x+s+x;
         }
   return f;
}

bool isDigit(char c)
{
   bool f = false;
   if((c>47)and(c<58)){
      f=true;
   }else{
      f=false;
   }
   return f;
}

bool isLetter(char c)
{
   bool f = false;
   if((c>='A' and c<='Z')or(c>='a' and c<='z')){
      f=true;
   }
   return f;
}

bool isUpperCase(char c)
{
  bool f = false;
     if((c>64)and(c<91)){
        f=true;
     }else{
        f=false;
     }
   return f;
}

bool isLowerCase(char c)
{
   bool f = false;
      if((c>96)and(c<123)){
         f=true;
      }else{
         f=false;
      }
      return f;
}

char toUpperCase(char c)
{
   char f;
   f=c-32;
   return f;
}

char toLowerCase(char c)
{
   char f;
   f=c+32;
   return f;
}








#endif
