FLAGS = -Wall -Werror -Wextra -std=c11 -pedantic -fanalyzer #-fsanitize=address -g
LFLAGS = -lcheck -lm -lpthread
GCF = -ftest-coverage -fprofile-arcs --coverage

ifeq ($(shell uname -s), Linux)
	LFLAGS = -lsubunit -lm -lpthread -lcheck
endif

all: clean s21_matrix.a test

clean:
	rm -rf *gcno *gcda gcov* test *.a *.o report *.out

test:
	gcc $(FLAGS) -c  tests/*.c
	gcc *.o s21_matrix.a $(LFLAGS) -o test
	./test
	rm -rf *.o

s21_matrix.a:
	gcc $(FLAGS) -c *.c
	ar rcs s21_matrix.a *.o
	ranlib s21_matrix.a
	rm -rf *.o

style_check:
	clang-format -style=Google -i *.c *.h
	clang-format -style=Google -n *.c *.h
	clang-format -style=Google -i tests/*.c tests/*.h
	clang-format -style=Google -n tests/*.c tests/*.h

gcov_report: clean s21_matrix.a
	gcc $(GCF) -c tests/*.c
	gcc $(GCF) *.o s21_matrix.a $(LFLAGS) -o gcov_report
	./gcov_report
	lcov -t "gcov_report" -o gcov_report.info -c -d .
	genhtml -o report gcov_report.info
	open report/index.html
