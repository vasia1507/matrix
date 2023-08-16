#include<stdio.h>
#include"./s21_matrix.h"

int main() {
  int i = 0, j = 0;
  matrix_t a, result;
  s21_create_matrix(3, 3, &a);
  a.matrix[0][0] = 1; a.matrix[0][1] = 2; a.matrix[0][2] = 3;
  a.matrix[1][0] = 0; a.matrix[1][1] = 4; a.matrix[1][2] = 2;
  a.matrix[2][0] = 5; a.matrix[2][1] = 2; a.matrix[2][2] = 1;
  s21_inverse_matrix(&a, &result);
  for (i = 0; i < result.rows; i++) {
    for (j = 0; j < result.columns; j++) {
      printf("%lf ", result.matrix[i][j]);
    }
    printf("\n");
  }
  s21_remove_matrix(&a);
  s21_remove_matrix(&result);
  return 0;
}