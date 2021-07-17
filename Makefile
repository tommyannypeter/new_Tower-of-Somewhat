test_timer_run: psshih_test_compile
	test_timer.exe

test_timer_compile: *.cc
	g++ *.cc -o test_timer.exe

clean:
	rm -f test_timer.exe
