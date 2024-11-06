#include<stdio.h>

int main(){
  int n;
  printf("Enter the order of the matrices (n): ");
  scanf("%d", &n);

  int a[n][n], b[n][n], result[n][n];

  // Input first matrix
  printf("Enter elements of first matrix:\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      scanf("%d", &a[i][j]);
    }
  }

  // Input second matrix
  printf("Enter elements of second matrix:\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      scanf("%d", &b[i][j]);
    }
  }

  // Initialize result matrix to 0
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      result[i][j] = 0;
    }
  }

  // Multiply matrices
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      for(int k = 0; k < n; k++){
        result[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  // Display result matrix
  printf("Resultant matrix:\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}
