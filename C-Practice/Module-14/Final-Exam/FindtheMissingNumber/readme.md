```c
#include <stdio.h>

int main()
{
    int t;
    // t will store the number of test cases
    scanf("%d", &t);

    long long int m, a, b, c;
    // m represents the total quantity, a, b, c represent the quantities of three items
    for (int i = 0; i < t; i++)
    {
        // Loop through each test case

        // Input the values of m, a, b, and c for the current test case
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        // Calculate the product of a, b, and c
        long long int multiplied = a * b * c;

        // Check if the product is zero
        if (multiplied == 0)
        {
            // If the product is zero, and m is also zero, output 0
            if (m == 0)
            {
                printf("0\n");
            }
            // If the product is zero but m is not zero, it's impossible to achieve m, so output -1
            else
            {
                printf("-1\n");
            }
        }
        // Check if m is divisible by the product without any remainder
        else if (m % multiplied == 0)
        {
            // If m is divisible by the product, output the quotient (m divided by the product)
            printf("%lld\n", m / multiplied);
        }
        // If none of the above conditions are met, it's impossible to achieve m, so output -1
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
```

Let's break down the code with a visualized explanation using sample inputs.

Let's take the first sample input:

```
4
20 1 2 2
10 2 2 1
1 1 2 3
0 3 10 15
```

Here's how the code processes each test case:

1. **Test Case 1:** `20 1 2 2`

   - `m = 20`, `a = 1`, `b = 2`, `c = 2`
   - Calculate the product of `a`, `b`, and `c`: `multiplied = 1 * 2 * 2 = 4`
   - Since `multiplied` is not zero, and `m % multiplied == 0` (20 % 4 == 0), the missing number is `m / multiplied = 20 / 4 = 5`
   - Output: `5`

2. **Test Case 2:** `10 2 2 1`

   - `m = 10`, `a = 2`, `b = 2`, `c = 1`
   - Calculate the product of `a`, `b`, and `c`: `multiplied = 2 * 2 * 1 = 4`
   - Since `multiplied` is not zero, but `m % multiplied != 0` (10 % 4 != 0), output `-1`

3. **Test Case 3:** `1 1 2 3`

   - `m = 1`, `a = 1`, `b = 2`, `c = 3`
   - Calculate the product of `a`, `b`, and `c`: `multiplied = 1 * 2 * 3 = 6`
   - Since `multiplied` is not zero, and `m % multiplied != 0` (1 % 6 != 0), output `-1`

4. **Test Case 4:** `0 3 10 15`
   - `m = 0`, `a = 3`, `b = 10`, `c = 15`
   - Calculate the product of `a`, `b`, and `c`: `multiplied = 3 * 10 * 15 = 450`
   - Since `multiplied` is not zero, and `m == 0`, output `0`

### Visual Explanation:

```
Test Case 1:  20 1 2 2   =>   Output: 5
Test Case 2:  10 2 2 1   =>   Output: -1
Test Case 3:  1 1 2 3    =>   Output: -1
Test Case 4:  0 3 10 15  =>   Output: 0
```

- For each test case, the product of `a`, `b`, and `c` is calculated.
- If the product is zero, the program checks if `m` is also zero. If it is, the missing number is `0`, otherwise, the missing number cannot be determined (`-1` is output).
- If the product is non-zero, the program checks if `m` is divisible by the product. If it is, the missing number is determined by dividing `m` by the product. Otherwise, the missing number cannot be determined (`-1` is output).

This process repeats for each test case, and the output is printed accordingly.
