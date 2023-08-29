#include "./s21_matrix.h"

double calc_element(matrix_t *A, matrix_t *B, int index_i, int index_j) {
  int i = 0;
  double result = 0;
  for (i = 0; i < A->columns; i++) {
    result += A->matrix[index_i][i] * B->matrix[i][index_j];
  }
  return result;
}

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int i = 0, j = 0, error = 0;
  if (A->columns != B->rows || A->columns <= 0 || A->rows <= 0 ||
      B->columns <= 0) {
    error = 2;
  } else if (A == NULL || B == NULL) {
    error = 1;
  } else {
    if (s21_create_matrix(A->rows, B->columns, result) != 0) {
      error = 2;
    } else {
      for (i = 0; i < A->rows; i++) {
        for (j = 0; j < B->columns; j++) {
          result->matrix[i][j] = calc_element(A, B, i, j);
        }
      }
    }
  }
  return error;
}