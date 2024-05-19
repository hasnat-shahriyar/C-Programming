Let's break down the code step-by-step and explain each part:

### Overview

This C program determines the winner between "Tiger" and "Pathaan" based on given characters in a string for multiple test cases.

### Code Explanation

#### Variable Declarations

```c
int t, n;
char final[100001];
```

- `t` is the number of test cases.
- `n` is the length of the string for each test case.
- `final` is a character array (string) that will store the input for each test case. The size `100001` is chosen to handle strings up to 100000 characters, which provides a safe buffer for the input.

#### Reading Number of Test Cases

```c
scanf("%d", &t);
```

This reads the number of test cases from the user and stores it in the variable `t`.

#### Loop Through Test Cases

```c
while (t--)
```

- This loop runs `t` times, once for each test case.
- `t--` is a post-decrement operation. It decrements `t` by 1 after each iteration, which allows the loop to run `t` times starting from the original value of `t`.

**Why use `while (t--)` and not a `for` loop?**

- The `while (t--)` construct is concise and straightforward for iterating a fixed number of times. It’s a common idiom in C for looping a known number of times.
- A `for` loop could also be used, but `while (t--)` achieves the same result with slightly less code.

#### Processing Each Test Case

```c
scanf("%d", &n);
scanf("%s", final);
```

- `scanf("%d", &n);` reads the length of the string `n` for the current test case.
- `scanf("%s", final);` reads the string `final` which contains characters 'T' and 'P'.

#### Counting Characters

```c
int tiger = 0;
int pathan = 0;
```

- These variables are used to count the occurrences of 'T' (Tiger) and 'P' (Pathaan) in the string.

#### Counting Loop

```c
for (int i = 0; i < n; i++)
{
    if (final[i] == 'T')
    {
        tiger++;
    }
    else if (final[i] == 'P')
    {
        pathan++;
    }
}
```

- This loop iterates over each character in the string `final` (from index `0` to `n-1`).
- If the character is 'T', it increments the `tiger` counter.
- If the character is 'P', it increments the `pathan` counter.

**Visualization:**
For example, if `final` is "TPTPT":

- After first character 'T', `tiger = 1`, `pathan = 0`.
- After second character 'P', `tiger = 1`, `pathan = 1`.
- After third character 'T', `tiger = 2`, `pathan = 1`.
- And so on...

#### Determining the Result

```c
if (tiger > pathan)
{
    printf("Tiger\n");
}
else if (pathan > tiger)
{
    printf("Pathaan\n");
}
else
{
    printf("Draw\n");
}
```

- This part checks which count is greater:
  - If `tiger` is greater than `pathan`, it prints "Tiger".
  - If `pathan` is greater than `tiger`, it prints "Pathaan".
  - If both counts are equal, it prints "Draw".

### Using While Loop vs. For Loop

**When to use a while loop:**

- Use a `while` loop when the number of iterations is not known in advance and depends on some condition evaluated within the loop.
- In this case, `while (t--)` is used because it is a common idiom in C for iterating a fixed number of times when the loop counter `t` is known and needs to be decremented each iteration.

**Why `t--` inside the while loop?**

- `t--` decreases `t` by 1 after each loop iteration. The loop continues as long as `t` is not zero. Once `t` becomes zero, the condition `while (t--)` evaluates to false, and the loop exits.

In summary, this program reads multiple test cases, counts occurrences of 'T' and 'P' in each test case string, and then determines and prints the winner or if it's a draw. The use of `while (t--)` is a concise way to handle a fixed number of iterations based on the number of test cases provided.
