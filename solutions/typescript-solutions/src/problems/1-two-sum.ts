import { binarySearch, NumWithIndex } from "../utils.js";

export function twoSumBrute(nums: number[], target: number): number[] {
    for (let i = 0; i < nums.length - 1; i++)
        for (let j = i + 1; j < nums.length; j++)
            if (nums[i] + nums[j] == target)
                return [i, j];
    throw new Error('No solution found');
}

export function twoSumSort(nums: number[], target: number): number[] {
    const numsWithIndices: NumWithIndex[] = [];
    for (let i = 0; i < nums.length; i++)
        numsWithIndices.push({ value: nums[i], index: i });
    numsWithIndices.sort((a, b) => a.value - b.value);
    for (let i = 0; i < nums.length; i++) {
        const desired = target - numsWithIndices[i].value;
        const found = binarySearch(numsWithIndices, { value: desired, index: 0 }, i + 1, nums.length - 1, (a, b) => a.value - b.value);
        if (found > 0)
            return [numsWithIndices[i].index, numsWithIndices[found].index];
    }
    throw new Error('No solution found');
}

export function twoSumHash(nums: number[], target: number): number[] {
    const processedNums: Map<number, number> = new Map();
    for (let i = 0; i < nums.length; i++) {
        const j = processedNums.get(target - nums[i]);
        if (j != undefined)
            return [j, i]
        processedNums.set(nums[i], i)
    }
    throw new Error('No solution found');
}
