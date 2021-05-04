psshih_test_run: psshih_test_compile
	psshih_test.exe

psshih_test_compile: *.cc
	g++ *.cc -o psshih_test.exe