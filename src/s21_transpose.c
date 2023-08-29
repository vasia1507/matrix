#include "./s21_matrix.h"

int s21_transpose(matrix_t *A, matrix_t *result) {
  int i = 0, j = 0, error = 0;
  if (A->rows <= 0 || A->columns <= 0) {
    error = 2;
  } else if (A == NULL) {
    error = 1;
  } else {
    matrix_t tmp;
    if (s21_create_matrix(A->columns, A->rows, &tmp) != 0) {
      error = 2;
    } else {
      for (i = 0; i < A->rows; i++) {
        for (j = 0; j < A->columns; j++) {
          tmp.matrix[j][i] = A->matrix[i][j];
        }
      }
    }
    *result = tmp;
  }
  return error;
}