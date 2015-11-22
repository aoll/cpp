EXEC=megaphone
CXX=clang++
CXXFLAG= -Wall -Werror -Wextra
SRC=megaphone.cpp
OBJ=$(SRC:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) -o $@ $^
%.o: %.c
	$(CXX) -o $@ -c $< $(CXXFLAG)

.PHONY: all clean fclean

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(EXEC)


