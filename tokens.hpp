#ifndef _TTOKENS_T_
#define _TTOKENS_T_

#include <iostream>
#include <stdio.h>
#include "strings.hpp"
using namespace std;

// --[Funciones Token]--

// s = "John|Paul|George|Ringo"
int tokenCount(string s,char sep) // ok
{
   int ret=0;
   if( length(s)>0 ){
      ret = charCount(s,sep)+1;
   }
   return ret;
}

// pablo|juan|pedro|carlos
string getTokenAt(string s,char sep, int p)  // ok
{
   string x = "";
   int i =0;
   while(s[i]!=sep){
      x=x+s[i];
      i++;
   }
   while(p!=0){
      x="";
      i++;
      while(s[i]!=sep && s[i]!=0){
         x=x+s[i];
         i++;
      }
      p--;
   }
   return x;
}

void addToken(string& s,char sep,string t) // ok
{
   s=s+sep;
   s=s+t;
}

void removeTokenAt(string& s,char sep, int p) //  ok
{
 int i = 0;
 int f = tokenCount(s,sep);
 string t = "";
 while(i!=p){
    t=t+getTokenAt(s,sep,i)+sep;
    i++;
 }
 if(p<f){
    int y = p+1;
    while(y<=f){
       t=t+getTokenAt(s,sep,y)+sep;
       y++;
    }

 }
 int o = length(getTokenAt(s,sep,p));
 int oa = length(s);
 s=substring(t,1,oa-o);
}

void setTokenAt(string& s,char sep, string t,int p) // ok
{
   string k = "";
   string suba = "";
   string subb = "";
   int i = 0;
   int x = 0;
   while(i<p){
      if(s[x]==sep){
         i++;
      }
      x++;
   }

   suba = substring(s,1,x);
   subb = substring(s,x,length(s));
   k=suba+sep+t+subb;
   removeTokenAt(k,sep,p+1);

   if(p==0){
      removeTokenAt(s,sep,p);
      k=t+sep+s;
   }

   s=k;

}

int findToken(string s,char sep, string t)
{
   int i = 0;
   int f;
   while(i<=tokenCount(s,sep)){
      string sub = getTokenAt(s,sep,i);
      if(sub==t){
         f=i;
      }
      i++;
   }
   return f;
}

// --[/Funciones Token]--



#endif
