/**
 * @param {T[]} arr 
 * @param {number} start 
 * @param {number} end 
 * @param {T} target 
 * @param {function} comparator 
 * @returns {number}
 */
export function binarySearch(arr, start, end, target, comparator) {
    if (start > end)
        return -1;
    let middle = (start + end) >> 1;
    if (comparator(arr[middle], target) > 0)
        return binarySearch(arr, start, middle - 1, target, comparator);
    if (comparator(arr[middle], target) < 0)
        return binarySearch(arr, middle + 1, end, target, comparator);
    return middle;
}