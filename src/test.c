#include<stdio.h>
#include"./s21_matrix.h"

int main() {
  int i = 0, j = 0;
  matrix_t a, b;
  s21_create_matrix(2, 3, &a);
  s21_create_matrix(3, 4, &b);
  a.matrix[0][0] = 0; a.matrix[0][1] = 1; a.matrix[0][2] = 1;
  a.matrix[1][0] = 1; a.matrix[1][1] = -3; a.matrix[1][2] = 7;

  b.matrix[0][0] = 1; b.matrix[0][1] = 2; b.matrix[0][2] = 3; b.matrix[0][3] = 4;
  b.matrix[1][0] = 5; b.matrix[1][1] = 6; b.matrix[1][2] = 7; b.matrix[1][3] = 8;
  b.matrix[2][0] = 9; b.matrix[2][1] = 10; b.matrix[2][2] = 11; b.matrix[2][3] = 12;
  
  //double result = 0;
  //s21_determinant(&a, &result);
  //printf("%lf\n", result);

  matrix_t result;
  s21_mult_matrix(&a, &b, &result);

  for (i = 0; i < result.rows; i++) {
    for (j = 0; j < result.columns; j++) {
      printf("%lf ", result.matrix[i][j]);
    }
    printf("\n");
  }

  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  return 0;
}