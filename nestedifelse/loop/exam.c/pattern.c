#include<stdio.h>

int main(){
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  
  for(int i = 1; i <= n; i++){
    // Print spaces
    for(int j = i; j < n; j++){
      printf(" ");
    }
    // Print stars
    for(int k = 1; k <= 2*i-1; k++){
      printf("*");
    }
    // Move to the next line6
    
    printf("\n");
  }

  return 0;
}