#include<stdio.h>
#include"./s21_matrix.h"

int main() {
  matrix_t a;
  s21_create_matrix(4, 4, &a);
  a.matrix[0][0] = 0; a.matrix[0][1] = 1; a.matrix[0][2] = 1; a.matrix[0][3] = 1;
  a.matrix[1][0] = 1; a.matrix[1][1] = -3; a.matrix[1][2] = 7; a.matrix[1][3] = 40;
  a.matrix[2][0] = 0; a.matrix[2][1] = 10; a.matrix[2][2] = 1; a.matrix[2][3] = 12;
  a.matrix[3][0] = 0; a.matrix[3][1] = 14; a.matrix[3][2] = 15; a.matrix[3][3] = 1;
  double result = 0;
  s21_determinant(&a, &result);
  printf("%lf\n", result);
  s21_remove_matrix(&a);
  return 0;
}