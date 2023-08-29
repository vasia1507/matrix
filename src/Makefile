FLAGS = -std=c11 -pedantic
LFLAGS = -lcheck -lm -lpthread
GCF = -ftest-coverage -fprofile-arcs --coverage

all: clean s21_matrix.a test

clean:
	rm -rf *gcno *gcda gcov* test *.a *.o report *.out

test:
	gcc *.c tests/*.c -o test $(LFLAGS) -lsubunit
	./test

s21_matrix.a:
	gcc $(FLAGS) -c *.c -lcheck -lm -lpthread -lsubunit
	ar rcs s21_matrix.a *.o
	ranlib s21_matrix.a

style_check:
	clang-format -style=Google -i *.c *.h
	clang-format -style=Google -n *.c *.h
	clang-format -style=Google -i tests/*.c tests/*.h
	clang-format -style=Google -n tests/*.c tests/*.h

gcov_report: clean s21_matrix.a
	gcc $(GCF) -c tests/*.c
	gcc $(GCF) *.c tests/*.c $(LFLAGS) -o gcov_report -lsubunit
	./gcov_report
	lcov -t "gcov_report" -o gcov_report.info -c -d .
	genhtml -o report gcov_report.info
	open report/index.html
