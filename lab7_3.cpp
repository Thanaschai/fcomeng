//การเติมคำตอบในช่องนี้ ขอให้เติมเฉพาะ Function adiff() เท่านั้น โดยห้ามเติม Function main() มาในนี้
#include<iostream>

using namespace std;

int adiff (int A ,int B)
{ int C ;
  if (A>B){
     C = A-B ;
  }
  else {
     C = B-A ;
  }
  if (C > 360)
   {
    C=C % 360 ;
   }
   if (C> 180){
    C=360-C;
    }
  return C ;  
}

