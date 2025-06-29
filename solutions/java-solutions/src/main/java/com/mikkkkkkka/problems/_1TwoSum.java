package com.mikkkkkkka.problems;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class _1TwoSum {
    public static int[] twoSumBrute(int[] nums, int target) {
        for (int i = 0; i < nums.length - 1; i++)
            for (int j = i + 1; j < nums.length; j++)
                if (nums[i] + nums[j] == target)
                    return new int[] { i, j };
        throw new IllegalArgumentException("No solution found");
    }

    private record NumAndIndex(int value, int index) {
        public static int Comparator(NumAndIndex a, NumAndIndex b) {
            return a.value - b.value;
        }
    }

    public static int[] twoSumSort(int[] nums, int target) {
        var numsWithIndex = new NumAndIndex[nums.length];
        for (int i = 0; i < nums.length; i++)
            numsWithIndex[i] = new NumAndIndex(nums[i], i);
        Arrays.sort(numsWithIndex, NumAndIndex::Comparator);
        for (int i = 0; i < nums.length; i++) {
            int desired = target - numsWithIndex[i].value;
            int found = Arrays.binarySearch(numsWithIndex, i + 1, nums.length, new NumAndIndex(desired, 0),
                    NumAndIndex::Comparator);
            if (found > 0)
                return new int[] { numsWithIndex[i].index, numsWithIndex[found].index };
        }
        throw new IllegalArgumentException("No solution found");
    }

    public static int[] twoSumHash(int[] nums, int target) {
        Map<Integer, Integer> processedNums = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int desired = target - nums[i];
            if (processedNums.containsKey(desired))
                return new int[] { processedNums.get(desired), i };
            processedNums.put(nums[i], i);
        }
        throw new IllegalArgumentException("No solution found");
    }
}
