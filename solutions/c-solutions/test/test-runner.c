#include "Unity/src/unity.h"

void twoSumTestCase1(void);
void twoSumTestCase2(void);
void twoSumTestCase3(void);

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(twoSumTestCase1);
    RUN_TEST(twoSumTestCase2);
    RUN_TEST(twoSumTestCase3);
    return UNITY_END();
}