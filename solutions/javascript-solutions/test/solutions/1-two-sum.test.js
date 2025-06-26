import { describe, it } from 'node:test';
import { strict as assert } from 'node:assert';
import { twoSum } from '../../src/index.js';

describe('twoSum', () => {
    it('1st test case provided in leetcode', () => {
        const nums = [2, 7, 11, 15];
        const target = 9;
        const expected = [0, 1];
        assert.deepEqual(twoSum(nums, target), expected);
    });

    it('2nd test case provided in leetcode', () => {
        const nums = [3, 2, 4];
        const target = 6;
        const expected = [1, 2];
        assert.deepEqual(twoSum(nums, target), expected);
    });

    it('3rd test case provided in leetcode', () => {
        const nums = [3, 3];
        const target = 6;
        const expected = [0, 1];
        assert.deepEqual(twoSum(nums, target), expected);
    });

    it('throws if no solution is found', () => {
        const nums = [1, 2, 3];
        const target = 6;
        assert.throws(() => twoSum(nums, target));
    });
})
