/*write a program using recursion to calculate nth element of fibbnacci series*/

//0,1,1,2,3,5,8,13,21,34
#include<stdio.h>
int fibbo(int);

int fibbo(int n){

  if (n==2||n==1){
    return n-1;
  }
  return fibbo(n-1)+fibbo(n-2);
}



int main(){
  int n=8;
  printf("%d",fibbo(n));

  return 0;
}
