test_board_run: test_compile
	test_main.exe board

test_timer_run: test_compile
	test_main.exe timer

test_compile: *.cc
	g++ src/*.cc test_main.cc -Iinclude -o test_main.exe

clean:
	rm -f test_main.exe
