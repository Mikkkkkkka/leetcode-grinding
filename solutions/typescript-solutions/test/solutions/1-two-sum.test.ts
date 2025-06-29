import { describe, it } from 'node:test';
import { strict as assert } from 'node:assert';
import { twoSum } from '../../src/problems/1-two-sum.js';

describe('twoSum', () => {
    it('should return indices of two numbers that add up to target', () => {
        const nums = [2, 7, 11, 15];
        const target = 9;
        const expected = [0, 1];
        assert.deepEqual(twoSum(nums, target), expected);
    });

    it('should work with negative numbers', () => {
        const nums = [-3, 4, 3, 90];
        const target = 0;
        const expected = [0, 2];
        assert.deepEqual(twoSum(nums, target), expected);
    });

    it('should return empty array if no solution exists', () => {
        const nums = [1, 2, 3];
        const target = 7;
        assert.throws(() => twoSum(nums, target));
    });
});
