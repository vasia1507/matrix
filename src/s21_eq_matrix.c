#include"./s21_matrix.h"

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int i = 0, j = 0, error = 1;
  if (A->columns != B->columns || A->rows != B->rows || A == NULL || B == NULL) {
    error = 0;
  }
  for (i = 0; i < A->rows; i++) {
    for (j = 0; j < A->columns; j++) {
      if (A->matrix[i][j] != B->matrix[i][j]) {
        error = 0;
      }
    }
  }
  return error;
}