//take 3 number input and tell if they can be the sides of a triangle.
#include<stdio.h>
int main(){
  int a,b,c;
  printf("first side of triangle:");
  scanf("%d",&a);
  printf("2nd side of triangle:");
  scanf("%d",&b);
  printf("3rd side of triangle:");
  scanf("%d",&c);
  if((a+b)>c && (b+c)>a && (a+c)>b){
    printf(" valid tringle side");
  }
  else{
    printf("invalid triangle");
  }
  
  return 0;
}