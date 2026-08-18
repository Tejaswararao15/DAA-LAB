PRACTICAL 1:

Summary :

This practical was used to implement and analyze five sorting algorithms: Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, and Quick Sort. Each algorithm sorts the elements in ascending order, but their working methods and execution times are different.

Bubble Sort repeatedly compares and swaps adjacent elements.(Best Case: O(n)Average Case: O(n²)Worst Case: O(n²))

Selection Sort finds the smallest element and places it in the correct position.(Best Case: O(n²)Average Case: O(n²)Worst Case: O(n²))

Insertion Sort inserts each element into its proper place in the sorted part of the array.(Best Case: O(n)
Average Case: O(n²)Worst Case: O(n²))

Merge Sort divides the array into smaller parts, sorts them, and merges them.(Best Case: O(n log n)
Average Case: O(n log n)Worst Case: O(n log n))

Quick Sort selects a pivot element and partitions the array into smaller subarrays.(Best Case: O(n log n)
Average Case: O(n log n)Worst Case: O(n²))

Conclusion :

From this practical, we learned that every sorting algorithm has its own advantages and disadvantages. Bubble Sort, Selection Sort, and Insertion Sort are simple but slower for large datasets. Merge Sort and Quick Sort are faster and more efficient for large datasets. We also understood that choosing the right sorting algorithm depends on the size of the data and the application requirements.

PRACTICAL 2 :

Summary :

In this practical, we implemented Linear Search and Binary Search algorithms and compared their execution time.

Linear Search checks each element one by one until the element is found.(Best Case: O(1)Average Case: O(n)Worst Case: O(n))

Binary Search searches by dividing the sorted array into two halves, so it is faster.(Best Case: O(1)
Average Case: O(log n)Worst Case: O(log n))

Linear Search works on both sorted and unsorted arrays.
Binary Search works only on sorted arrays.

Conclusion :

Linear Search is simple and works on both sorted and unsorted arrays.
Binary Search is faster but works only on sorted arrays.
The time analysis shows that Binary Search takes less time than Linear Search.
Therefore, Binary Search is better for large sorted data, while Linear Search is suitable for small or unsorted data.

PRACTICAL 3:

Summary :
1. Max Heap Sort
Explanation

A Max Heap is a binary heap where the largest element is always at the root.

Steps:

Convert the array into a Max Heap.
The largest element comes to the first position.
Swap the first element with the last element.
Remove the last element from the heap.
Heapify the remaining elements.
Repeat until the array is sorted.

Example:

Array:       40  10  30  20  50

Max Heap:    50  20  30  10  40

After sorting:
             10  20  30  40  50
Time Complexity
Building Max Heap: O(n)
Heapify: O(log n)
Best Case: O(n log n)
Average Case: O(n log n)
Worst Case: O(n log n)
Space Complexity

O(log n) with recursive heapify.

2. Min Heap Sort
Explanation

A Min Heap is a binary heap where the smallest element is always at the root.

Steps:

Convert the array into a Min Heap.
The smallest element comes to the root.
Swap the root with the last element.
Remove the last element from the heap.
Heapify the remaining elements.
Repeat until all elements are sorted.

Example:

Array:       40  10  30  20  50

Min Heap:    10  20  30  40  50

A Min Heap naturally gives the smallest element first. Depending on how the extraction is implemented, it can produce descending order; reversing the result gives ascending order.

Time Complexity
Building Min Heap: O(n)
Heapify: O(log n)
Best Case: O(n log n)
Average Case: O(n log n)
Worst Case: O(n log n)
Space Complexity

O(log n) with recursive heapify.

Simple difference

Max Heap: Largest element → root → commonly used to get ascending order with standard heap sort.

Min Heap: Smallest element → root → commonly used to get descending order with standard extraction, or ascending order after reversing.

Conclusion

Both Max Heap and Min Heap are important heap structures in DAA. Heap Sort has O(n log n) time complexity in the best, average, and worst cases. Max Heap is commonly used for ascending Heap Sort, while Min Heap can be used for descending Heap Sort.


PRACTICAL 4:

Summary :

This practical was used to implement and analyze a factorial program using iterative and recursive methods. Both methods calculate the factorial of a given number, but their working methods and memory usage are different.

Iterative Method calculates the factorial by using a loop and repeatedly multiplying the numbers from 1 to n.
Time Complexity: O(n)
Space Complexity: O(1)

Recursive Method calculates the factorial by calling the same function repeatedly with a smaller value until it reaches the base condition.
Time Complexity: O(n)
Space Complexity: O(n)

Conclusion :

From this practical, we learned that both iterative and recursive methods can be used to calculate the factorial of a number. Both methods have O(n) time complexity, but their space requirements are different. The iterative method uses less memory and is more memory efficient, while the recursive method is useful for understanding the concept of recursion. We also learned how to calculate and compare the execution time of both methods.

