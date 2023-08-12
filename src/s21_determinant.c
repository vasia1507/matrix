#include<stdio.h>
#include"./s21_matrix.h"

double calc_opredelitel(double** matr, int matr_rows, int matr_columns) {
  int i = 0, j = 0, k = 0;
  double result = 0;
  if (matr_rows == 1) {
    return matr[0][0];
  }
  double*** mass_matr = malloc(matr_columns * sizeof(double**));
  for (i = 0; i < matr_columns; i++) {
    mass_matr[i] = malloc((matr_rows - 1) * sizeof(double*));
    for (j = 0; j < matr_rows - 1; j++) {
      mass_matr[i][j] = malloc((matr_columns - 1) * sizeof(double));
    }
  }
  int flag = 0;
  for (i = 0; i < matr_columns; i++) {
    for (j = 0; j < matr_rows - 1; j++) {
      flag = 0;
      for (k = 0; k < matr_columns - 1; k++) {
        if (k == i) {
          flag = 1;
        }
        mass_matr[i][j][k] = matr[j + 1][k + flag];
      }
    }
  }
  for (i = 0; i < matr_columns; i++) {
    if (i % 2 == 0) {
      result += matr[0][i] * calc_opredelitel(mass_matr[i], matr_rows - 1, matr_columns - 1);
    } else {
      result += -1 * matr[0][i] * calc_opredelitel(mass_matr[i], matr_rows - 1, matr_columns - 1);
    }
  }
  for (i = 0; i < matr_columns; i++) {
    for (j = 0; j < matr_rows - 1; j++) {
      free(mass_matr[i][j]);
    }
    free(mass_matr[i]);
  }
  free(mass_matr);
  return result;
}

int s21_determinant(matrix_t *A, double *result) {
  int i = 0, j = 0, error = 0;
  if (A->rows <= 0 || A->columns <= 0 || A->columns != A->rows) {
    error = 2;
  } else if (A == NULL) {
    error = 1;
  } else {
    double** matr = malloc(A->rows * sizeof(double*));
    for (i = 0; i < A->rows; i++){
      matr[i] = malloc(A->columns * sizeof(double));
    }
    for (i = 0; i < A->rows; i++) {
      for (j = 0; j < A->columns; j++){
        matr[i][j] = A->matrix[i][j];
      }
    }
    *result = calc_opredelitel(matr, A->rows, A->columns);
    for (i = 0; i < A->columns; i++) {
      free(matr[i]);
    }
    free(matr);
  }
  return error;
}