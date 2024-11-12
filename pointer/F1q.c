#include<stdio.h>
int main (){
  int i = 72 ;
  int *j = &i;  // j is pointer pointing to i;
  printf("The address of i is %u\n",&i);
  printf("the address of i is %p",j);
  return 0;
  
}