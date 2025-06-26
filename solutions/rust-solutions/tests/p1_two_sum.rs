#[cfg(test)]
mod tests {
    use rust_solutions::p1_two_sum::*;

    #[test]
    fn two_sum_testcase_1() {
        let nums = vec![2, 7, 11, 15];
        let target = 9;
        let expected = vec![0, 1];
        assert_eq!(two_sum(nums, target), expected);
    }

    #[test]
    fn two_sum_testcase_2() {
        let nums = vec![3, 2, 4];
        let target = 6;
        let expected = vec![1, 2];
        assert_eq!(two_sum(nums, target), expected);
    }

    #[test]
    fn two_sum_testcase_3() {
        let nums = vec![3, 3];
        let target = 6;
        let expected = vec![0, 1];
        assert_eq!(two_sum(nums, target), expected);
    }

    #[test]
    fn two_sum_no_solution() {
        let nums = vec![1, 2, 3];
        let target = 6;
        let expected = vec![];
        assert_eq!(two_sum(nums, target), expected);
    }
}
