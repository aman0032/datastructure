#include<stdio.h>

//int sum(int);
int sum(int n){
  if(n==1){
    return 1;
  }

  return sum(n-1)+n;
}
int main(){
  int x=10;
  printf("%d",sum(x));

  return 0;
}