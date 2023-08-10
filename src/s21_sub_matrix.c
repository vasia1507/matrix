#include"./s21_matrix.h"

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int i = 0, j = 0, error = 0;
  if (A->matrix.rows != B->matrix.rows || A->matrix.columns != B->columns) {
    error = 2;
  } else if (A == NULL || B == NULL) {
    error = 1;
  } else {
    if (s21_create_matrix(A->rows, A->columns, result) != 0) {
      error = 2; 
    } else {
      for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
          result.matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
        }
      }
    }
  }
  return error;
}