# Ascending Sort

```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Taking input for the size of the array 'n'
    int ar[n]; // Declaring an array of size 'n'

    // Loop to read 'n' integers and store them in the array 'ar'
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]); // Reading and storing each integer in the array
    }

    // Bubble sort algorithm to sort the array in ascending order
    for (int i = 0; i < n - 1; i++) // Outer loop for passes
    {
        for (int j = i + 1; j < n; j++) // Inner loop for comparisons
        {
            if(ar[i] > ar[j]) // If current element is greater than the next element
            {
                int temp = ar[i]; // Swap the elements
                ar[i] = ar[j];
                ar[j] = temp;
            };
        }
    }

    // Printing the sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]); // Printing each element of the sorted array
    }
    return 0; // Indicating successful completion of the program
}
```

This code takes an array of integers as input and sorts it in ascending order using the selection sort algorithm. Let's break down how it works:

1. **Input:**

   - The code reads an integer `n` representing the number of elements in the array.
   - It then reads `n` integers into the array `ar`.

2. **Selection Sort Algorithm:**

   - The selection sort algorithm divides the array into two parts: sorted and unsorted.
   - It repeatedly selects the smallest element from the unsorted part and swaps it with the first element of the unsorted part until the entire array is sorted.

3. **Sorting Process:**

   - The outer loop iterates through each element of the array, except for the last one.
   - For each element at index `i`, the inner loop starts from `i + 1` to compare it with all subsequent elements.
   - If an element at index `j` is smaller than the element at index `i`, they are swapped.
   - This process moves the smallest element of the unsorted part to the beginning of the unsorted part.
   - The outer loop then moves to the next element, and the process repeats until the entire array is sorted.

4. **Output:**
   - Finally, the sorted array is printed.

Now, let's see an example with input and output:

**Input:**

```

5
5 3 7 2 10

```

**Output:**

```

2 3 5 7 10

```

This output represents the sorted array in ascending order, where each element is less than or equal to the next element.

# Descending Sort

```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Taking input for the size of the array 'n'
    int ar[n]; // Declaring an array of size 'n'

    // Loop to read 'n' integers and store them in the array 'ar'
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]); // Reading and storing each integer in the array
    }

    // Sorting the array in descending order using bubble sort algorithm
    for (int i = 0; i < n - 1; i++) // Outer loop for passes
    {
        for (int j = i + 1; j < n; j++) // Inner loop for comparisons
        {
            if(ar[i] < ar[j]) // If current element is less than the next element
            {
                int temp = ar[i]; // Swap the elements
                ar[i] = ar[j];
                ar[j] = temp;
            };
        }
    }

    // Printing the sorted array in descending order
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]); // Printing each element of the sorted array
    }
    return 0; // Indicating successful completion of the program
}

```

This code is similar to the previous one, but it sorts the array in descending order instead of ascending order. Let's break down how it works:

1. **Input:**

   - The code reads an integer `n` representing the number of elements in the array.
   - It then reads `n` integers into the array `ar`.

2. **Sorting Process (Descending Order):**

   - The outer loop iterates through each element of the array, except for the last one.
   - For each element at index `i`, the inner loop starts from `i + 1` to compare it with all subsequent elements.
   - If an element at index `j` is greater than the element at index `i`, they are swapped.
   - This process moves the largest element of the unsorted part to the beginning of the unsorted part.
   - The outer loop then moves to the next element, and the process repeats until the entire array is sorted in descending order.

3. **Output:**
   - Finally, the sorted array in descending order is printed.

Now, let's see an example with input and output:

**Input:**

```
5
5 3 7 2 10
```

**Output:**

```
10 7 5 3 2
```

This output represents the sorted array in descending order, where each element is greater than or equal to the next element.
