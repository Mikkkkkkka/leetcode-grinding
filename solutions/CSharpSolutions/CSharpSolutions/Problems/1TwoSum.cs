namespace CSharpSolutions.Problems;

public class _1TwoSum
{
    public static int[] TwoSumBrute(int[] nums, int target)
    {
        for (int i = 0; i < nums.Length - 1; i++)
            for (int j = i + 1; j < nums.Length; j++)
                if (nums[i] + nums[j] == target)
                    return [i, j];
        throw new ArgumentException("No solution found");
    }

    public static int[] TwoSumSort(int[] nums, int target)
    {
        var numsWithIndices = new (int value, int index)[nums.Length];
        for (int i = 0; i < nums.Length; i++)
            numsWithIndices[i] = (nums[i], i);
        Array.Sort(numsWithIndices);
        for (int i = 0; i < nums.Length; i++)
        {
            int desired = target - numsWithIndices[i].value;
            var comparer = Comparer<(int value, int index)>.Create((a, b) => a.value - b.value);
            int found = Array.BinarySearch(numsWithIndices, i + 1, nums.Length - i - 1, (desired, 0), comparer);
            if (found > 0) return [numsWithIndices[i].index, numsWithIndices[found].index];
        }
        throw new ArgumentException("No solution found");
    }

    public static int[] TwoSumHash(int[] nums, int target)
    {
        var processedNums = new Dictionary<int, int>();
        for (int i = 0; i < nums.Length; i++)
        {
            if (processedNums.TryGetValue(target - nums[i], out int j))
                return [j, i];
            processedNums[nums[i]] = i;
        }
        throw new ArgumentException("No solution found");
    }
}
