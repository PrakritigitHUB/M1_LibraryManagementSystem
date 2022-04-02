TEST_SRC =src/Addingbook.c\
src/Deletingbook.c\
src/issuingbook.c\
src/Searchingbook.c\
src/viewingbook.c\
unity/unity.c\
test/test_Managment.c

SRC = main.c\
src/Addingbook.c\
src/Deletingbook.c\
src/issuingbook.c\
src/Searchingbook.c\
src/viewingbook.c

INC_HEADER = inc
INC_TEST = unity


all:
	gcc -I $(INC_HEADER) $(SRC) -o run.exe
	
	
	
	
test:
	gcc -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, ./$(TEST_OUTPUT))
	$(call FixPath, ./$(TEST_OUTPUT))	
	
