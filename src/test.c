#include<stdio.h>
#include"./s21_matrix.h"

int main() {
  matrix_t a;
  s21_create_matrix(3, 3, &a);
  a.matrix[0][0] = 4; a.matrix[0][1] = 2; a.matrix[0][2] = 3;
  a.matrix[1][0] = 4; a.matrix[1][1] = 5; a.matrix[1][2] = 6;
  a.matrix[2][0] = 7; a.matrix[2][1] = 8; a.matrix[2][2] = 10;
  double result = 0;
  s21_determinant(&a, &result);
  printf("%lf\n", result);
  s21_remove_matrix(&a);
  return 0;
}