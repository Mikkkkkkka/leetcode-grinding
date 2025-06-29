namespace CSharpSolutions.Problems;

public class _1TwoSum
{
    public static int[] TwoSum(int[] nums, int target)
    {
        for (int i = 0; i < nums.Length - 1; i++)
            for (int j = i + 1; j < nums.Length; j++)
                if (nums[i] + nums[j] == target)
                    return [i, j];
        throw new ArgumentException("No solution found");
    }
}
