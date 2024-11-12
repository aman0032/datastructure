#include<stdio.h>
int fact();

int fact(int n){
  if (n==1||n==0){
    return 1;
  }
  return fact(n-1)*n;
}
int main(){
 int d=6;
 // int g=fact(d);
  printf("%d",fact(d));
  
}