#include"Library_Management.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}


void test_insertBook(void){
    TEST_ASSERT_EQUAL(pass,insertBook(125, "Sonika", "Dragon"));
}

void test_viewBook(void){
    TEST_ASSERT_EQUAL(pass,viewBook());
}

void test_searchBookById(void){
    TEST_ASSERT_EQUAL(fail,searchBookById(-2));
    TEST_ASSERT_EQUAL(pass,searchBookById(125));
}



void test_deleteBookById(void){
    TEST_ASSERT_EQUAL(pass,deleteBookById(125));
}        

void test_issueBook(void){
    TEST_ASSERT_EQUAL(pass,issueBook(125));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_insertBook);
    RUN_TEST(test_searchBookById);
    RUN_TEST(test_issueBook);
    RUN_TEST(test_deleteBookById);
    RUN_TEST(test_viewBook);
    
    return UNITY_END();
}