#include "./s21_matrix.h"

void s21_remove_matrix(matrix_t *A) {
  int i = 0;
  for (i = 0; i < A->rows; i++) {
    free(A->matrix[i]);
  }
  free(A->matrix);
}