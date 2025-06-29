use std::collections::HashMap;

pub fn two_sum_brute(nums: Vec<i32>, target: i32) -> Vec<i32> {
    for i in 0..nums.len() {
        for j in i + 1..nums.len() {
            if nums[i] + nums[j] == target {
                return vec![i as i32, j as i32];
            }
        }
    }
    vec![]
}

pub fn two_sum_sort(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut nums_with_indices: Vec<(i32, usize)> = Vec::with_capacity(nums.len());
    for i in 0..nums.len() {
        nums_with_indices.push((nums[i], i as usize));
    }
    nums_with_indices.sort();
    for i in 0..nums_with_indices.len() {
        let desired = target - nums_with_indices[i].0 as i32;
        let found = nums_with_indices[i + 1..].binary_search_by_key(&desired, |&(a, _)| a);
        if found.is_ok() {
            return vec![
                nums_with_indices[i].1 as i32,
                nums_with_indices[found.unwrap() + i + 1].1 as i32,
            ];
        }
    }
    vec![]
}

pub fn two_sum_hash(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut processed_nums = HashMap::new();
    for (i, &v) in nums.iter().enumerate() {
        let desired = target - v;
        if let Some(&j) = processed_nums.get(&desired) {
            return vec![j as i32, i as i32];
        }
        processed_nums.insert(v, i);
    }
    vec![]
}
