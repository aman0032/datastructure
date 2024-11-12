#include<stdio.h>
float force(float,float);

float force(float m,float g){
  float f=m*g;
  return f;
}


int main(){
 float m=100.0;
 float g=9.8;

 printf("%.2f",force(m,g));

  return 0;
}