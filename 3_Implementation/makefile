SRC = main.c\
src/Addingbook.c\
src/Deletingbook.c\
src/issuingbook.c\
src/Searchingbook.c\
src/viewingbook.c


TEST_SRC =src/Addingbook.c\
src/Deletingbook.c\
src/issuingbook.c\
src/Searchingbook.c\
src/viewingbook.c\
unity/unity.c\
test/test_LibraryManagement.c


INC_HEADER = inc
INC_TEST = unity

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

all:
	gcc -I $(INC_HEADER) $(SRC) -o run.$(EXEC)

unittest:
	 gcc -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o test.$(EXEC)

clean:
	$(RM) *.$(EXEC)
