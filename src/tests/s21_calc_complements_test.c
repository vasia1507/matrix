#include "./test.h"

START_TEST(test_calc_complements_1) {}
END_TEST

START_TEST(test_calc_complements_2) {}
END_TEST

START_TEST(test_calc_complements_3) {}
END_TEST

START_TEST(test_calc_complements_4) {}
END_TEST

START_TEST(test_calc_complements_5) {}
END_TEST

START_TEST(test_calc_complements_6) {}
END_TEST

START_TEST(test_calc_complements_7) {}
END_TEST

START_TEST(test_calc_complements_8) {}
END_TEST

START_TEST(test_calc_complements_9) {}
END_TEST

START_TEST(test_calc_complements_10) {}
END_TEST

Suite *test_s21_calc_complements(void) {
  Suite *s = suite_create("\033[45m-=s21_calc_complements=-\033[0m");
  TCase *tc = tcase_create("calc_complements_tc");

  tcase_add_test(tc, test_calc_complements_1);
  tcase_add_test(tc, test_calc_complements_2);
  tcase_add_test(tc, test_calc_complements_3);
  tcase_add_test(tc, test_calc_complements_4);
  tcase_add_test(tc, test_calc_complements_5);
  tcase_add_test(tc, test_calc_complements_6);
  tcase_add_test(tc, test_calc_complements_7);
  tcase_add_test(tc, test_calc_complements_8);
  tcase_add_test(tc, test_calc_complements_9);
  tcase_add_test(tc, test_calc_complements_10);

  suite_add_tcase(s, tc);
  return s;
}
