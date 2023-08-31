#include "./test.h"

START_TEST(test_eq_matrix_1) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);
  matrix_t mtx = {0};
  s21_create_matrix(rows, cols, &mtx);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      double rand_val = get_rand(DBL_MIN, DBL_MAX);
      m.matrix[i][j] = rand_val;
      mtx.matrix[i][j] = rand_val;
    }
  }
  ck_assert_int_eq(s21_eq_matrix(&m, &mtx), SUCCESS);
  s21_remove_matrix(&m);
  s21_remove_matrix(&mtx);
}
END_TEST

START_TEST(test_eq_matrix_2) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);
  matrix_t mtx = {0};
  s21_create_matrix(rows, cols, &mtx);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      m.matrix[i][j] = get_rand(DBL_MIN, DBL_MAX) + 1;
      mtx.matrix[i][j] = get_rand(DBL_MIN, DBL_MAX);
    }
  }
  ck_assert_int_eq(s21_eq_matrix(&m, &mtx), FAILURE);
  s21_remove_matrix(&m);
  s21_remove_matrix(&mtx);
}
END_TEST

START_TEST(test_eq_matrix_3) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);
  matrix_t mtx = {0};
  s21_create_matrix(rows, cols, &mtx);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      double rand_val = get_rand(DBL_MIN, DBL_MAX);
      m.matrix[i][j] = rand_val;
      mtx.matrix[i][j] = rand_val;
    }
  }
  ck_assert_int_eq(s21_eq_matrix(&m, &mtx), SUCCESS);
  s21_remove_matrix(&m);
  s21_remove_matrix(&mtx);
}
END_TEST

START_TEST(test_eq_matrix_4) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);
  matrix_t mtx = {0};
  s21_create_matrix(rows, cols, &mtx);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      m.matrix[i][j] = get_rand(DBL_MIN, DBL_MAX) + 1;
      mtx.matrix[i][j] = get_rand(DBL_MIN, DBL_MAX);
    }
  }
  ck_assert_int_eq(s21_eq_matrix(&m, &mtx), FAILURE);
  s21_remove_matrix(&m);
  s21_remove_matrix(&mtx);
}
END_TEST

START_TEST(test_eq_matrix_5) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);
  matrix_t mtx = {0};
  s21_create_matrix(rows, cols, &mtx);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      double rand_val = get_rand(DBL_MIN, DBL_MAX);
      m.matrix[i][j] = rand_val;
      mtx.matrix[i][j] = rand_val;
    }
  }
  ck_assert_int_eq(s21_eq_matrix(&m, &mtx), SUCCESS);
  s21_remove_matrix(&m);
  s21_remove_matrix(&mtx);
}
END_TEST

START_TEST(test_eq_matrix_6) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);
  matrix_t mtx = {0};
  s21_create_matrix(rows, cols, &mtx);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      m.matrix[i][j] = get_rand(DBL_MIN, DBL_MAX) + 1;
      mtx.matrix[i][j] = get_rand(DBL_MIN, DBL_MAX);
    }
  }
  ck_assert_int_eq(s21_eq_matrix(&m, &mtx), FAILURE);
  s21_remove_matrix(&m);
  s21_remove_matrix(&mtx);
}
END_TEST

START_TEST(test_eq_matrix_7) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);
  matrix_t mtx = {0};
  s21_create_matrix(rows, cols, &mtx);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      double rand_val = get_rand(DBL_MIN, DBL_MAX);
      m.matrix[i][j] = rand_val;
      mtx.matrix[i][j] = rand_val;
    }
  }
  ck_assert_int_eq(s21_eq_matrix(&m, &mtx), SUCCESS);
  s21_remove_matrix(&m);
  s21_remove_matrix(&mtx);
}
END_TEST

START_TEST(test_eq_matrix_8) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);
  matrix_t mtx = {0};
  s21_create_matrix(rows, cols, &mtx);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      m.matrix[i][j] = get_rand(DBL_MIN, DBL_MAX) + 1;
      mtx.matrix[i][j] = get_rand(DBL_MIN, DBL_MAX);
    }
  }
  ck_assert_int_eq(s21_eq_matrix(&m, &mtx), FAILURE);
  s21_remove_matrix(&m);
  s21_remove_matrix(&mtx);
}
END_TEST

START_TEST(test_eq_matrix_9) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);
  matrix_t mtx = {0};
  s21_create_matrix(rows, cols, &mtx);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      double rand_val = get_rand(DBL_MIN, DBL_MAX);
      m.matrix[i][j] = rand_val;
      mtx.matrix[i][j] = rand_val;
    }
  }
  ck_assert_int_eq(s21_eq_matrix(&m, &mtx), SUCCESS);
  s21_remove_matrix(&m);
  s21_remove_matrix(&mtx);
}
END_TEST

START_TEST(test_eq_matrix_10) {
  const int rows = rand() % 100 + 1;
  const int cols = rand() % 100 + 1;
  matrix_t m = {0};
  s21_create_matrix(rows, cols, &m);
  matrix_t mtx = {0};
  s21_create_matrix(rows, cols, &mtx);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      m.matrix[i][j] = get_rand(DBL_MIN, DBL_MAX) + 1;
      mtx.matrix[i][j] = get_rand(DBL_MIN, DBL_MAX);
    }
  }
  ck_assert_int_eq(s21_eq_matrix(&m, &mtx), FAILURE);
  s21_remove_matrix(&m);
  s21_remove_matrix(&mtx);
}
END_TEST

Suite *test_s21_eq_matrix(void) {
  Suite *s = suite_create("\033[45m-=s21_eq_matrix=-\033[0m");
  TCase *tc = tcase_create("eq_matrix_tc");

  tcase_add_test(tc, test_eq_matrix_1);
  tcase_add_test(tc, test_eq_matrix_2);
  tcase_add_test(tc, test_eq_matrix_3);
  tcase_add_test(tc, test_eq_matrix_4);
  tcase_add_test(tc, test_eq_matrix_5);
  tcase_add_test(tc, test_eq_matrix_6);
  tcase_add_test(tc, test_eq_matrix_7);
  tcase_add_test(tc, test_eq_matrix_8);
  tcase_add_test(tc, test_eq_matrix_9);
  tcase_add_test(tc, test_eq_matrix_10);

  suite_add_tcase(s, tc);
  return s;
}
