package com.mikkkkkkka;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import com.mikkkkkkka.problems._1TwoSum;

public class _1TwoSumTest {
    @Test
    public void testCase1() {
        int[] nums1 = { 2, 7, 11, 15 };
        int target1 = 9;
        int[] expected1 = { 0, 1 };
        Assertions.assertArrayEquals(expected1, _1TwoSum.twoSumBrute(nums1, target1));
        Assertions.assertArrayEquals(expected1, _1TwoSum.twoSumSort(nums1, target1));
        Assertions.assertArrayEquals(expected1, _1TwoSum.twoSumHash(nums1, target1));
    }

    @Test
    public void testCase2() {
        int[] nums2 = { 3, 2, 4 };
        int target2 = 6;
        int[] expected2 = { 1, 2 };
        Assertions.assertArrayEquals(expected2, _1TwoSum.twoSumBrute(nums2, target2));
        Assertions.assertArrayEquals(expected2, _1TwoSum.twoSumSort(nums2, target2));
        Assertions.assertArrayEquals(expected2, _1TwoSum.twoSumHash(nums2, target2));
    }

    @Test
    public void testCase3() {
        int[] nums3 = { 3, 3 };
        int target3 = 6;
        int[] expected3 = { 0, 1 };
        Assertions.assertArrayEquals(expected3, _1TwoSum.twoSumBrute(nums3, target3));
        Assertions.assertArrayEquals(expected3, _1TwoSum.twoSumSort(nums3, target3));
        Assertions.assertArrayEquals(expected3, _1TwoSum.twoSumHash(nums3, target3));
    }

    @Test
    public void testNoSolution() {
        int[] nums = { 1, 2, 3 };
        int target = 6;
        Assertions.assertThrows(IllegalArgumentException.class, () -> _1TwoSum.twoSumBrute(nums, target));
        Assertions.assertThrows(IllegalArgumentException.class, () -> _1TwoSum.twoSumSort(nums, target));
        Assertions.assertThrows(IllegalArgumentException.class, () -> _1TwoSum.twoSumHash(nums, target));
    }
}
