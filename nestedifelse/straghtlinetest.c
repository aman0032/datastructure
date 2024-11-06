#include<stdio.h>
void main(){
  double x1,x2,x3,y1,y2,y3,m1,m2;
  printf("x1:");
  scanf("%d",&x1);
  printf("x2:");
  scanf("%d",&x2);
  printf("x3:");
  scanf("%d",&x3);
  printf("y1:");
  scanf("%d",&y1);
  printf("y2:");
  scanf("%d",&y2);
  printf("y3:");
  scanf("%d",&y3);
  m1=(y2-y1)/(x2-x1);
  m2=(y3-y2)/(x3-x2);
  if(m1==m2){
    printf("point in staright line");
  }
  else{
    printf("point are not in straight line");
  }
}