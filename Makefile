test_board_run: test_compile_board
	test_board.exe

test_compile_board: *.cc
	g++ src/*.cc test_board.cc -Iinclude -o test_board.exe

test_timer_run: test_compile_timer
	test_timer.exe

test_compile_timer: *.cc
	g++ src/*.cc test_timer.cc -Iinclude -o test_timer.exe

clean:
	rm -f *.exe
