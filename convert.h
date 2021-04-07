#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int findwhitespace(string tofind){
   int spaces;
   for(int i(0); i < tofind.size(); i++){
     if(tofind[i] == ' '){spaces++;}

   }
   return spaces;
}
string* linetoarr(string ptrtoptr){
   string *arr = new string[findwhitespace(ptrtoptr)];
   int counter(0);
   int start(0);
   auto lam = [start, ptrtoptr] () -> int {
     int i(start);
     while (true){
      if (ptrtoptr[i] == ' ')
         return i;
         break;//should do nothing but there for safety 
      }
      i++;
      return i;
   };
   int fin = lam();
   arr[counter] = ptrtoptr.substr(start, fin);
   counter++;
   return arr;
}