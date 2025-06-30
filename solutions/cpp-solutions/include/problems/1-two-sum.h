#ifndef _1_TWO_SUM_H
#define _1_TWO_SUM_H

#include <vector>

namespace _1TwoSum {

class Solution {
public:
    std::vector<int> twoSumBrute(const std::vector<int>& nums, int target);

    std::vector<int> twoSumSort(const std::vector<int>& nums, int target);

    std::vector<int> twoSumMap(const std::vector<int>& nums, int target);
};

}  // namespace _1TwoSum

#endif  // _1_TWO_SUM_H