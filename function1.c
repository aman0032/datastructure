#include<stdio.h>


//function prototype
//int sum(int,int);


//function definition
int sum(int x,int y){
 //printf("the sum is %d\n",x+y);
  return x+y;
}

int main(){
  int a =1;
  int b= 2;
 int v=sum(a,b);//this is the function call 
 printf("%d\n",v);

  int a1=23;
  int b1=34;
  sum(a1,b1);
  int d=56;
  int g=79;
  sum(d,g);
  sum(34,66);
}