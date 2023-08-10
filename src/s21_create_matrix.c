#include"./s21_matrix.h"

int s21_create_matrix(int rows, int columns, matrix_t *result) {
  int error = 0;
  if (result == NULL) {
    error = 2;
  } else if (rows <= 0 || columns <= 0) {
    error = 1;
  } else {
    matrix_t tmp;
    tmp.matrix = malloc(rows * sizeof(double*));
    for (i = 0; i < rows; i++) {
      tmp.matrix[i] = malloc(columns * sizeof(double))
    }
    tmp.rows = rows;
    tmp.columns = columns;
    *result = tmp;
  }
  return error;
}