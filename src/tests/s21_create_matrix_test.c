#include "./test.h"

START_TEST(test_create_matrix_1) {

}
END_TEST

START_TEST(test_create_matrix_2) {

}
END_TEST

START_TEST(test_create_matrix_3) {

}
END_TEST

START_TEST(test_create_matrix_4) {

}
END_TEST

START_TEST(test_create_matrix_5) {

}
END_TEST

START_TEST(test_create_matrix_6) {

}
END_TEST

START_TEST(test_create_matrix_7) {

}
END_TEST

START_TEST(test_create_matrix_8) {

}
END_TEST

START_TEST(test_create_matrix_9) {

}
END_TEST

START_TEST(test_create_matrix_10) {

}
END_TEST

Suite *test_create_matrix(void) {
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
