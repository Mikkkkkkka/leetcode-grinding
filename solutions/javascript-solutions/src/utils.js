/**
 * @param {T[]} arr 
 * @param {number} start 
 * @param {number} end 
 * @param {T} target 
 * @param {function} comparator 
 * @returns {number}
 */
export function binarySearch(arr, target, start, end, comparator) {
    if (start > end)
        return -1;
    let middle = (start + end) >> 1;
    if (comparator(arr[middle], target) > 0)
        return binarySearch(arr, target, start, middle - 1, comparator);
    if (comparator(arr[middle], target) < 0)
        return binarySearch(arr, target, middle + 1, end, comparator);
    return middle;
}