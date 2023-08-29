#include "./test.h"

START_TEST(test_create_matrix_1) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      m.matrix[i][j] = 0;
      ck_assert_ldouble_eq_tol(0, m.matrix[i][j], 1e-07);
    }
  }
  ck_assert_int_eq(m.rows, rows);
  ck_assert_int_eq(m.columns, cols);
  s21_remove_matrix(&m);
}
END_TEST

START_TEST(test_create_matrix_2) {
  int rows = 10;
  int columns = 10;
  matrix_t matrix = {0};
  int status = s21_create_matrix(rows, columns, &matrix);
  if (matrix.matrix) {
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < columns; ++j) {
        ck_assert(fabs(matrix.matrix[i][j]) < 1e-7);
      }
    }
    ck_assert_int_eq(matrix.rows, rows);
    ck_assert_int_eq(matrix.columns, columns);
    ck_assert_int_eq(status, 0);
  } else {
    ck_assert_int_eq(status, 2);
  }
  if (status == 0) s21_remove_matrix(&matrix);
}
END_TEST

START_TEST(test_create_matrix_3) {
  const int rows = 0;
  const int cols = 10;
  matrix_t m = {0};
  ck_assert_int_eq(s21_create_matrix(rows, cols, &m), 1);
}
END_TEST

START_TEST(test_create_matrix_4) {
  const int rows = 10;
  const int cols = 0;
  matrix_t m = {0};
  ck_assert_int_eq(s21_create_matrix(rows, cols, &m), 1);
}
END_TEST

START_TEST(test_create_matrix_5) {
  int rows = -10;
  int columns = 10;
  matrix_t matrix = {0};
  int status = s21_create_matrix(rows, columns, &matrix);
  ck_assert_int_eq(status, 1);
  if (status == 0) s21_remove_matrix(&matrix);
}
END_TEST

START_TEST(test_create_matrix_6) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      m.matrix[i][j] = 0;
      ck_assert_ldouble_eq_tol(0, m.matrix[i][j], 1e-07);
    }
  }
  ck_assert_int_eq(m.rows, rows);
  ck_assert_int_eq(m.columns, cols);
  s21_remove_matrix(&m);
}
END_TEST

START_TEST(test_create_matrix_7) {
  int rows = 10;
  int columns = 10;
  matrix_t matrix = {0};
  int status = s21_create_matrix(rows, columns, &matrix);
  if (matrix.matrix) {
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < columns; ++j) {
        ck_assert(fabs(matrix.matrix[i][j]) < 1e-7);
      }
    }
    ck_assert_int_eq(matrix.rows, rows);
    ck_assert_int_eq(matrix.columns, columns);
    ck_assert_int_eq(status, 0);
  } else {
    ck_assert_int_eq(status, 2);
  }
  if (status == 0) s21_remove_matrix(&matrix);
}
END_TEST

START_TEST(test_create_matrix_8) {
  const int rows = 10;
  const int cols = 0;
  matrix_t m = {0};
  ck_assert_int_eq(s21_create_matrix(rows, cols, &m), 1);
}
END_TEST

START_TEST(test_create_matrix_9) {
  const int rows = 10;
  const int cols = 0;
  matrix_t m = {0};
  ck_assert_int_eq(s21_create_matrix(rows, cols, &m), 1);
}
END_TEST

START_TEST(test_create_matrix_10) {
  int rows = -10;
  int columns = 10;
  matrix_t matrix = {0};
  int status = s21_create_matrix(rows, columns, &matrix);
  ck_assert_int_eq(status, 1);
  if (status == 0) s21_remove_matrix(&matrix);
}
END_TEST

Suite *test_s21_create_matrix(void) {
  Suite *s = suite_create("\033[45m-=s21_create_matrix=-\033[0m");
  TCase *tc = tcase_create("create_matrix_tc");

  tcase_add_test(tc, test_create_matrix_1);
  tcase_add_test(tc, test_create_matrix_2);
  tcase_add_test(tc, test_create_matrix_3);
  tcase_add_test(tc, test_create_matrix_4);
  tcase_add_test(tc, test_create_matrix_5);
  tcase_add_test(tc, test_create_matrix_6);
  tcase_add_test(tc, test_create_matrix_7);
  tcase_add_test(tc, test_create_matrix_8);
  tcase_add_test(tc, test_create_matrix_9);
  tcase_add_test(tc, test_create_matrix_10);

  suite_add_tcase(s, tc);
  return s;
}