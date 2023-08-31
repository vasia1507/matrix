#ifndef SRC_TESTS_H_
#define SRC_TESTS_H_

#include "../s21_matrix.h"
#include "check.h"
#include "stddef.h"
#include "stdio.h"

Suite *test_s21_create_matrix(void);     // done
Suite *test_s21_remove_matrix(void);     // undone
Suite *test_s21_eq_matrix(void);         // done
Suite *test_s21_sum_matrix(void);        // undone
Suite *test_s21_sub_matrix(void);        // undone
Suite *test_s21_mult_number(void);       // done
Suite *test_s21_mult_matrix(void);       // undone
Suite *test_s21_transpose(void);         // done
Suite *test_s21_calc_complements(void);  // done
Suite *test_s21_determinant(void);       // done
Suite *test_s21_inverse_matrix(void);    // undone

double get_rand(double min, double max);

#endif

// утечки в inverse