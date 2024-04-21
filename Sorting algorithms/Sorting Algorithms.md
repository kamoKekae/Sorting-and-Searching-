# Sorting Algorithms

Sorting algorithms seek to make sure that all elements of a collection are in some particular order.
Sorting entails imposing some order relation on a collection and making sure that the relation is symmetric, transitive and reflexive. i.e ) its an equivalence relation.

## Selection Sort

Selection Sort is the most intuitive sorting algorithm,it uses a selection subroutine to pick('select') an element that is going to named the pivot element. We then seek to place this element in its correct position in the array according to the order we prefer(less,greater). For composite objects, the relation used will be a comparator and the pivot element will be chosen according to this.

We begin with the initial array `unsorted_array` and an empty array `sorted_array`.

We use the selection subroutine to pick the pivot element according to our comparator, this will be the first element in the `sorted_array`, we then mark this element off somehow and then we recall the selection subroutine again on the `unsorted_array` but without considering the element that was placed in its correct position now.

### Example
Let `unsorted_array = {0,4,1}` and let `sorted_array={}`. 

1) Call Selection Subroutine -> returns 0;
2) Insert 0 in `sorted_array={0}` and mark off 0 in the unsorted array.

The sorted array will get updated in this manner by repeating the above steps:`sorted_array={0}`,`sorted_array={0,1}`,`sorted_array={0,1,4}`.

The above manner will use twice the amount of memory to store and sort the array which is not good. An alternative is to do the sorting **in place**, this will allow us to use *constant* amount of space which will be made up of the array and some auxiallary variables.

We will then use a swapping operation after selecting the pivot element, we swap the pivot element with the element at the position that the pivot is supposed to be at hence us needing to know the following:

1) The beginning of the unordered sublist(Will be tracked by the main loop variable).
2) Position of the pivot element in the unordered list.

Therefore the pivot will always be swapped with the element at the the beginning of the unordered list thus increasing the size of the ordered list by 1 and reducing the unordered list by 1.

`Algorithm: Given an Array A`
    `for(every element in the array)`
    `Let minElement = element`
    `use selection subroutine to find minElement in unordered list`
    `Swap the pivot with minElement`

The complexity of the algorithm is O(n^2) and its easy to see why. The main Loop will run n times and the inner selection search procedure which is linear will run n-1 times on the first pass, n-2 times and so on and hence the overall major runtime will be n(n-1 + n-2 + n-2 ... 1) which is in the quadratic class.

