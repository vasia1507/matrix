#include "./s21_matrix.h"

int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
  int error = 0;
  double determinant = 0.;
  if (A == NULL) {
    error = 1;
  } else if (A->rows <= 0 || A->columns <= 0 || A->columns != A->rows) {
    error = 2;
  } else {
    if (s21_create_matrix(A->rows, A->columns, result) != 0) {
      error = 2;
    } else {
      s21_determinant(A, &determinant);
      s21_calc_complements(A, result);
      s21_transpose(result, result);
      s21_mult_number(result, 1. / determinant, result);
    }
  }
  return error;
}