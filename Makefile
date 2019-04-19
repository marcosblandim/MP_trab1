main: romano.cpp
	g++ -std=c++11 -Wall romano.cpp -o romano.exe
	./romano.exe
testar: testa_romano.cpp
	g++ -std=c++11 -Wall testa_romano.cpp -o testa_romano
	./testa_romano
