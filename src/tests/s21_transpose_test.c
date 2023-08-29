#include "./test.h"

double get_rand(double min, double max) {
  double val = (double)rand() / RAND_MAX;
  return min + val * (max - min);
}

START_TEST(test_transpose_1) {
  matrix_t A, B, R;
  s21_create_matrix(1, 1, &A);
  s21_create_matrix(1, 1, &B);

  A.matrix[0][0] = 1.25;
  B.matrix[0][0] = 1.25;

  s21_transpose(&A, &R);
  ck_assert_int_eq(s21_eq_matrix(&R, &B), SUCCESS);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&R);
}
END_TEST

START_TEST(test_transpose_2) {
  matrix_t A, B, R;
  s21_create_matrix(3, 3, &A);
  s21_create_matrix(3, 3, &B);

  A.matrix[0][0] = 0.25;
  A.matrix[0][1] = 1.25;
  A.matrix[0][2] = 2.25;
  A.matrix[1][0] = 3.25;
  A.matrix[1][1] = 4.25;
  A.matrix[1][2] = 5.25;
  A.matrix[2][0] = 6.25;
  A.matrix[2][1] = 7.25;
  A.matrix[2][2] = 8.25;

  s21_transpose(&A, &R);

  B.matrix[0][0] = 0.25;
  B.matrix[1][0] = 1.25;
  B.matrix[2][0] = 2.25;
  B.matrix[0][1] = 3.25;
  B.matrix[1][1] = 4.25;
  B.matrix[2][1] = 5.25;
  B.matrix[0][2] = 6.25;
  B.matrix[1][2] = 7.25;
  B.matrix[2][2] = 8.25;

  ck_assert_int_eq(s21_eq_matrix(&R, &B), SUCCESS);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&R);
}
END_TEST

START_TEST(test_transpose_3) {
  matrix_t A, B;
  s21_create_matrix(1, 1, &A);
  s21_create_matrix(1, 1, &B);
  A.columns = -1;

  int ret = s21_transpose(&A, &B);
  ck_assert_int_eq(ret, 2);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(test_transpose_4) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);

  matrix_t check = {0};
  s21_create_matrix(cols, rows, &check);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      double rand_val = get_rand(-10e10, 10e10);
      m.matrix[i][j] = rand_val;
      check.matrix[j][i] = rand_val;
    }
  }

  matrix_t res = {0};
  s21_create_matrix(cols, rows, &res);
  ck_assert_int_eq(s21_transpose(&m, &res), 0);
  ck_assert_int_eq(s21_eq_matrix(&check, &res), SUCCESS);

  s21_remove_matrix(&m);
  s21_remove_matrix(&res);
  s21_remove_matrix(&check);
}
END_TEST

START_TEST(test_transpose_5) {}
END_TEST

START_TEST(test_transpose_6) {}
END_TEST

START_TEST(test_transpose_7) {}
END_TEST

START_TEST(test_transpose_8) {}
END_TEST

START_TEST(test_transpose_9) {}
END_TEST

START_TEST(test_transpose_10) {}
END_TEST

Suite *test_s21_transpose(void) {
  Suite *s = suite_create("\033[45m-=s21_transpose=-\033[0m");
  TCase *tc = tcase_create("transpose_tc");

  tcase_add_test(tc, test_transpose_1);
  tcase_add_test(tc, test_transpose_2);
  tcase_add_test(tc, test_transpose_3);
  tcase_add_test(tc, test_transpose_4);
  tcase_add_test(tc, test_transpose_5);
  tcase_add_test(tc, test_transpose_6);
  tcase_add_test(tc, test_transpose_7);
  tcase_add_test(tc, test_transpose_8);
  tcase_add_test(tc, test_transpose_9);
  tcase_add_test(tc, test_transpose_10);

  suite_add_tcase(s, tc);
  return s;
}
