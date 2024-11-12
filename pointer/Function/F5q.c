#include<stdio.h>
float c2f(float);
float c2f(float c){
  float f=((9*c)/5)+32;
  return f;
}
int main(){
  float c=37;
  printf("%.2f",c2f(c));
  return 0;
}