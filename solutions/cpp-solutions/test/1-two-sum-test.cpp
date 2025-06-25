#include "leetcode/1-two-sum.h"
#include <gtest/gtest.h>

TEST(_1TwoSumTest, TestCase1) {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> expected = {0, 1};

    auto solution = _1TwoSum::Solution();
    EXPECT_EQ(solution.twoSumBrute(nums, target), expected);
    EXPECT_EQ(solution.twoSumSort(nums, target), expected);
    EXPECT_EQ(solution.twoSumMap(nums, target), expected);
}

TEST(_1TwoSumTest, TestCase2) {
    std::vector<int> nums = {3, 2, 4};
    int target = 6;
    std::vector<int> expected = {1, 2};

    auto solution = _1TwoSum::Solution();
    EXPECT_EQ(solution.twoSumBrute(nums, target), expected);
    EXPECT_EQ(solution.twoSumSort(nums, target), expected);
    EXPECT_EQ(solution.twoSumMap(nums, target), expected);
}

TEST(_1TwoSumTest, TestCase3) {
    std::vector<int> nums = {3, 3};
    int target = 6;
    std::vector<int> expected = {0, 1};

    auto solution = _1TwoSum::Solution();
    EXPECT_EQ(solution.twoSumBrute(nums, target), expected);
    EXPECT_EQ(solution.twoSumSort(nums, target), expected);
    EXPECT_EQ(solution.twoSumMap(nums, target), expected);
}
