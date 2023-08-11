#ifndef SRC_S21_DECIMAL_H_
#define SRC_S21_DECIMAL_H_

#include<stdlib.h>

typedef struct matrix_struct {
    double** matrix;
    int rows;
    int columns;
} matrix_t;

#define SUCCESS 1
#define FAILURE 0

int s21_create_matrix(int rows, int columns, matrix_t *result);       // done
void s21_remove_matrix(matrix_t *A);                                  // done
int s21_eq_matrix(matrix_t *A, matrix_t *B);                          // done
int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result);       // done
int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result);       // done
int s21_mult_number(matrix_t *A, double number, matrix_t *result);    // done
int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result);      // undone
int s21_transpose(matrix_t *A, matrix_t *result);                     // done
int s21_calc_complements(matrix_t *A, matrix_t *result);              // undone
int s21_determinant(matrix_t *A, double *result);                     // undone
int s21_inverse_matrix(matrix_t *A, matrix_t *result);                // undone

#endif