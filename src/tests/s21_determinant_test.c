#include "./test.h"

START_TEST(test_determinant_1) {

}
END_TEST

START_TEST(test_determinant_2) {

}
END_TEST

START_TEST(test_determinant_3) {

}
END_TEST

START_TEST(test_determinant_4) {

}
END_TEST

START_TEST(test_determinant_5) {

}
END_TEST

START_TEST(test_determinant_6) {

}
END_TEST

START_TEST(test_determinant_7) {

}
END_TEST

START_TEST(test_determinant_8) {

}
END_TEST

START_TEST(test_determinant_9) {

}
END_TEST

START_TEST(test_determinant_10) {

}
END_TEST

Suite *test_determinant(void) {
  Suite *s = suite_create("\033[45m-=s21_determinant=-\033[0m");
  TCase *tc = tcase_create("determinant_tc");

  tcase_add_test(tc, test_determinant_1);
  tcase_add_test(tc, test_determinant_2);
  tcase_add_test(tc, test_determinant_3);
  tcase_add_test(tc, test_determinant_4);
  tcase_add_test(tc, test_determinant_5);
  tcase_add_test(tc, test_determinant_6);
  tcase_add_test(tc, test_determinant_7);
  tcase_add_test(tc, test_determinant_8);
  tcase_add_test(tc, test_determinant_9);
  tcase_add_test(tc, test_determinant_10);

  suite_add_tcase(s, tc);
  return s;
}
