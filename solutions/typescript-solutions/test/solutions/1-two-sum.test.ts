import { describe, it } from 'node:test';
import { strict as assert } from 'node:assert';
import { twoSumBrute, twoSumSort, twoSumHash } from '../../src/problems/1-two-sum.js';

describe('twoSum', () => {
    it('1st test case', () => {
        const nums = [2, 7, 11, 15];
        const target = 9;
        const expected = [0, 1];
        assert.deepEqual(twoSumBrute(nums, target), expected);
        assert.deepEqual(twoSumSort(nums, target), expected);
        assert.deepEqual(twoSumHash(nums, target), expected);
    });

    it('2nd test case', () => {
        const nums = [3, 2, 4];
        const target = 6;
        const expected = [1, 2];
        assert.deepEqual(twoSumBrute(nums, target), expected);
        assert.deepEqual(twoSumSort(nums, target), expected);
        assert.deepEqual(twoSumHash(nums, target), expected);
    });

    it('3nd test case', () => {
        const nums = [3, 3];
        const target = 6;
        const expected = [0, 1];
        assert.deepEqual(twoSumBrute(nums, target), expected);
        assert.deepEqual(twoSumSort(nums, target), expected);
        assert.deepEqual(twoSumHash(nums, target), expected);
    });

    it('throws error when no solutions', () => {
        const nums = [1, 2, 3];
        const target = 6;
        assert.throws(() => twoSumBrute(nums, target));
        assert.throws(() => twoSumSort(nums, target));
        assert.throws(() => twoSumHash(nums, target));
    });
});
