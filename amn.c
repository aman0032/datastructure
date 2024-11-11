#include<stdio.h>

int multi(int x, int y,int z){
  return x*y*z;
}
int main(){
  int a=9;
  int b=10;
  int c=5;
  int g=multi(a,b,c);
  printf("%d",g);

  
}