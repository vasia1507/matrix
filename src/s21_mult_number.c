#include"./s21_matrix.h"

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  int i = 0, j = 0, error = 0;
  if (A == NULL) {
    error = 1;
  } else if (A->rows <= 0 || A->columns <= 0) {
    error = 2;
  } else {
    if (s21_create_matrix(A->rows, A->columns, result) != 0) {
      error = 2; 
    } else {
      for (i = 0; i < A->rows; i++) {
        for (j = 0; j < A->columns; j++) {
          result->matrix[i][j] = A->matrix[i][j] * number;
        }
      }
    }
  }
  return error;
}