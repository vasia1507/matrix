#include"./s21_matrix.h"

double calc_minor(matrix_t *A, int index_i, int index_j) {
  int i = 0, j = 0, flag1 = 0, flag2 = 0;
  double result = 0;
  double **tmp = malloc((A->rows - 1) * sizeof(double*));
  for (i = 0; i < A->rows - 1; i++) {
    tmp[i] = malloc((A->columns - 1) * sizeof(double));
  }
  for (i = 0; i < A->rows - 1; i++) {
    if (i == index_i) {
      flag1 = 1;
    }
    flag2 = 0;
    for (j = 0; j < A->columns - 1; j++) {
      if (j == index_j) {
        flag2 = 1;
      }
      tmp[i][j] = A->matrix[i + flag1][j + flag2];
    }
  }
  result = calc_opredelitel(tmp, A->rows - 1, A->columns - 1);
  for (i = 0; i < A->rows - 1; i++) {
    free(tmp[i]);
  }
  free(tmp);
  return result;
}

int s21_calc_complements(matrix_t *A, matrix_t *result) {
  int i = 0, j = 0, error = 0;
  if (A == NULL) {
    error = 1;
  } else if (A->columns <= 0 || A->rows <= 0 || A->columns != A->rows) {
    error = 2;
  } else {
    if (s21_create_matrix(A->rows, A->columns, result) != 0) {
      error = 2; 
    } else {
      for (i = 0; i < A->rows; i++) {
        for (j = 0; j < A->columns; j++) {
          result->matrix[i][j] = calc_minor(A, i, j);
          if ((i + j) % 2 == 1) {
            result->matrix[i][j] *= -1;
          }
        }
      }
    }
  }
  return error;
}