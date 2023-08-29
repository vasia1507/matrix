#include "./test.h"

int main(void) {
  int failed = 0;
  Suite *s21_matrix_test[] = {
      test_s21_create_matrix(),    test_s21_remove_matrix(),
      test_s21_eq_matrix(),        test_s21_sum_matrix(),
      test_s21_sub_matrix(),       test_s21_mult_number(),
      test_s21_mult_matrix(),      test_s21_transpose(),
      test_s21_calc_complements(), test_s21_determinant(),
      test_s21_inverse_matrix(),   NULL};

  for (int i = 0; s21_matrix_test[i] != NULL; i++) {
    SRunner *sr = srunner_create(s21_matrix_test[i]);
    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);
    failed += srunner_ntests_failed(sr);
    srunner_free(sr);
  }
  printf("FAILED: %d \n", failed);

  return 0;
}
