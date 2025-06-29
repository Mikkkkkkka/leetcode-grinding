#ifndef _1_TWO_SUM_H
#define _1_TWO_SUM_H

#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSumBrute(int* nums, int numsSize, int target, int* returnSize);

int* twoSumSort(int* nums, int numsSize, int target, int* returnSize);

#endif  // _1_TWO_SUM_H
