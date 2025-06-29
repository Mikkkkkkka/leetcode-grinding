import pytest
import problems.p1_two_sum as p1


class Test1TwoSum:
    def test_case_1(self):
        nums = [2, 7, 11, 15]
        target = 9
        expected = [0, 1]
        assert p1.twoSum(nums, target) == expected
        
    def test_case_2(self):
        nums = [3, 2, 4]
        target = 6 
        expected = [1, 2]
        assert p1.twoSum(nums, target) == expected
        
    def test_case_3(self):
        nums = [3, 3]
        target = 6
        expected = [0, 1]
        assert p1.twoSum(nums, target) == expected
        
    def test_throws_on_no_solution(self):
        nums = [1, 2, 3]
        target = 6
        with pytest.raises(Exception):
            p1.twoSum(nums, target)
