#include "leetcode/1-two-sum.h"
#include <algorithm>
#include <unordered_map>

using namespace std;

namespace _1TwoSum {

vector<int> Solution::twoSumBrute(const vector<int>& nums, int target) {
    for (size_t i = 0; i < nums.size() - 1; i++)
        for (size_t j = i + 1; j < nums.size(); j++)
            if (nums[i] + nums[j] == target)
                return {(int)i, (int)j};
    return {};
}

vector<int> Solution::twoSumSort(const vector<int>& nums, int target) {
    auto numsWithIndexes = vector<pair<int, int>>(nums.size());
    for (int i = 0; i < nums.size(); i++)
        numsWithIndexes[i] = {nums[i], i};
    ranges::sort(numsWithIndexes);
    for (auto it = numsWithIndexes.begin(); it != numsWithIndexes.end() + 1; it++)
        if (auto [first, last] =
                ranges::equal_range(it + 1, numsWithIndexes.end(), target - it->first,
                                    ranges::less{}, &pair<int, int>::first);
            first != last)
            return {it->second, first->second};
    return {};
}

vector<int> Solution::twoSumMap(const std::vector<int>& nums, int target) {
    auto processedNums = unordered_map<int, int>();
    for (int i = 0; i < nums.size(); i++) {
        const int desired = target - nums[i];
        if (processedNums.contains(desired))
            return {i, processedNums[desired]};
        processedNums[nums[i]] = i;
    }
    return {};
}

}  // namespace _1TwoSum
