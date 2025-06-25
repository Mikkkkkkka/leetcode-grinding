namespace CSharpSolutions.Tests;

using CSharpSolutions.LeetCode;

public class _1TwoSumTests
{
    [Theory]
    [InlineData(new int[] { 2, 7, 11, 15 }, 9, new int[] { 0, 1 })]
    [InlineData(new int[] { 3, 2, 4 }, 6, new int[] { 1, 2 })]
    [InlineData(new int[] { 3, 3 }, 6, new int[] { 0, 1 })]
    public void TestCases(int[] nums, int target, int[] expected)
    {
        Assert.Equal(expected, _1TwoSum.TwoSum(nums, target));
    }

    [Fact]
    public void TestNoSolution()
    {
        int[] nums = [1, 2, 3];
        int target = 6;

        Assert.Throws<ArgumentException>(() => _1TwoSum.TwoSum(nums, target));
    }
}
