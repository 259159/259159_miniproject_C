#include "unity.h"
#include <header.h>


#include <header.h>
#define PROJECT_NAME "Harry_Potter_Quiz"

/* Prototypes for all the test functions */
void test_help(void);
void test_startquiz(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
 
  RUN_TEST(test_help);
  RUN_TEST(test_startquiz);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
void test_help(void) {
  TEST_ASSERT_EQUAL(0, help());
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, help());
}

void test_startquiz(void) {
  TEST_ASSERT_EQUAL(0, start_quiz());
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, start_quiz());
}
