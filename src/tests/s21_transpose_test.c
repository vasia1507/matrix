#include "./test.h"

START_TEST(test_transpose_1) {}
END_TEST

START_TEST(test_transpose_2) {}
END_TEST

START_TEST(test_transpose_3) {}
END_TEST

START_TEST(test_transpose_4) {}
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
