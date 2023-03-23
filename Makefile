main: main.o io.o math.o
	g++-10 main.o io.o math.o -o main -std=c++20 -pedantic-errors -Weffc++ -Wextra -Wall -Wsign-conversion -Werror -g

main.o: main.cpp
	g++-10 -c main.cpp -std=c++20 -pedantic-errors -Weffc++ -Wextra -Wall -Wsign-conversion -Werror 

io.o: io.cpp
	g++-10 -c io.cpp -std=c++20 -pedantic-errors -Weffc++ -Wextra -Wall -Wsign-conversion -Werror

math.o: math.cpp
	g++-10 -c math.cpp -std=c++20 -pedantic-errors -Weffc++ -Wextra -Wall -Wsign-conversion -Werror	

clean:
	rm *.o main
