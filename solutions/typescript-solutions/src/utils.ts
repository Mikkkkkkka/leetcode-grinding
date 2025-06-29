export type NumWithIndex = {
    value: number,
    index: number
}

export function binarySearch<T>(arr: T[], target: T, start: number, end: number, comparator: (a: T, b: T) => number) {
    if (start > end)
        return -1;
    let middle: number = (start + end) >> 1;
    if (comparator(arr[middle], target) > 0)
        return binarySearch(arr, target, start, middle - 1, comparator);
    if (comparator(arr[middle], target) < 0)
        return binarySearch(arr, target, middle + 1, end, comparator);
    return middle;
}
