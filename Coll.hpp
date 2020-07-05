#ifndef _TCOLL_T_
#define _TCOLL_T_

#include <iostream>
#include "../funciones/strings.hpp"
#include "../funciones/tokens.hpp"

using namespace std;

template<typename T>
struct Coll
{
   string s;
   char sep;
   int count;
};

// collCreate
template<typename T>
Coll<T> collCreate()
{
   Coll<T> x;
   x.s="";
   x.sep='|';
   x.count = 0;
   return x;
}

template<typename T>
Coll<T> collCreate(char c)
{
   Coll<T> x;
   x.s="";
   x.sep=c;
   x.count = 0;
   return x;
}


template<typename T>
int collSize(Coll<T> c)
{
   int f = tokenCount(c.s,c.sep);
   return f;
}

template<typename T>
void collRemoveAll(Coll<T>& c)
{
   c.s="";
}

template<typename T>
void collRemoveAt(Coll<T>& c, int p)
{
   removeTokenAt(c.s,c.sep,p);
}


// -- [GENERICAS] --

template<typename T>
int collAdd(Coll<T>& c,T t,string tToString(T))
{
   string f = tToString(t);
   addToken(c.s,c.sep,f);
   int x = collSize(c);
   return x;
}

template <typename T>
void collSetAt(Coll<T>& c,T t, int p, string tToString(T))
{
   string f = tToString(t);
   setTokenAt(c.s,c.sep,f,p);
}

template <typename T>
T collGetAt(Coll<T> c, int p, T tFromString(string))
{
   string f = getTokenAt(c.s,c.sep,p);
   return tFromString(f);
}

template <typename T, typename K>
int collFind(Coll<T> c, K k, int cmpTK(T,K), T tFromString(string))
{
   int res;
   int max = tokenCount(c.s,c.sep);
   for(int i = 0;i<max+1;i++){
      string objeto = getTokenAt(c.s,c.sep,i);
      res = cmpTK(tFromString(objeto),k);
      if(res==0){
         i=max;
      }
   }
   return res;
}

template <typename T>
void collSort(Coll<T>& c, int cmpTT(T,T),T tFromString(string),string tToString(T))
{
   bool ordenado = true;
   int i=0;
   T aux;
   while(ordenado){
      ordenado=false;
      for(i=0;i<(collSize<T>(c)-1);i++){
         if(cmpTT(collGetAt<T>(c,i,tFromString),collGetAt<T>(c,i+1,tFromString))){
            aux = collGetAt<T>(c,i,tFromString);
            collSetAt<T>(c,collGetAt<T>(c,i+1,tFromString),i,tToString);
            collSetAt<T>(c,aux,i+1,tToString);
            ordenado=true;
         }
      }
   }
}

template<typename T>
bool collHasNext(Coll<T> c)
{
   bool hsnext = true;
   if(c.count<collSize(c)){
      hsnext = true;
   }else{
      hsnext = false;
   }
   return hsnext;
}

template<typename T>
T collNext(Coll<T>& c,T tFromString(string))
{
   T t;
   if(c.count<=collSize(c)){
      t = collGetAt(c,c.count,tFromString);
      c.count++;
   }else{

   }

   return t;
}

template<typename T>
void collReset(Coll<T>& c)
{
   c.count = 0;
}

#endif
