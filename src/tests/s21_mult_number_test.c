#include "./test.h"

START_TEST(test_mult_number_1) {}
END_TEST

START_TEST(test_mult_number_2) {}
END_TEST

START_TEST(test_mult_number_3) {}
END_TEST

START_TEST(test_mult_number_4) {}
END_TEST

START_TEST(test_mult_number_5) {}
END_TEST

START_TEST(test_mult_number_6) {}
END_TEST

START_TEST(test_mult_number_7) {}
END_TEST

START_TEST(test_mult_number_8) {}
END_TEST

START_TEST(test_mult_number_9) {}
END_TEST

START_TEST(test_mult_number_10) {}
END_TEST

Suite *test_s21_mult_number(void) {
  Suite *s = suite_create("\033[45m-=s21_mult_number=-\033[0m");
  TCase *tc = tcase_create("mult_number_tc");

  tcase_add_test(tc, test_mult_number_1);
  tcase_add_test(tc, test_mult_number_2);
  tcase_add_test(tc, test_mult_number_3);
  tcase_add_test(tc, test_mult_number_4);
  tcase_add_test(tc, test_mult_number_5);
  tcase_add_test(tc, test_mult_number_6);
  tcase_add_test(tc, test_mult_number_7);
  tcase_add_test(tc, test_mult_number_8);
  tcase_add_test(tc, test_mult_number_9);
  tcase_add_test(tc, test_mult_number_10);

  suite_add_tcase(s, tc);
  return s;
}
