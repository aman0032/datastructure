#include<stdio.h>

float avg(int a,int b,int c);

 float avg(int a,int b,int c ){
float d=(a+b+c)/3.0;
return d;
}



int main(){
  float f=avg(3,10,7);
  printf("%f",f);
return 0;
}