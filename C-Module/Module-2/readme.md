# Operators and Conditional Statements

## Arithmetic Operator (অ্যারিথমেটিক অপারেটরস)

পাটি গনিতে আমরা যে সকল Operators ব্যাবহার করেছি তাই হল Arithmetic Operators। যেমন যোগ, বিয়োগ, গুন, ভাগ ইত্যাদি।

- ### Operator :

- `+` (যোগ)

- `-` (বিয়োগ)

- `*`(গুণ)

- `/` (ভাগ)

- `%` (ভাগশেষ)

<i><b>Short Note :</b> 5 / 2 এর উত্তর আসবে 2.5 কিন্তু সি প্রোগ্রামে 5 / 2 ভাগ করলে উত্তর আসবে 2 এখানে ঘাবড়ানোর কিছু নেই আসলে integer সবসময় পূর্ণ সংখ্যা দেয় তাই integer কে integer দিয়ে ভাগ করলে পূর্ণ সংখ্যায় সে উত্তর দিবে সেখত্রে আমরা যদি .5 পেতে চাই তাহলে আমাদের 5 এবং 2 এর যেকোনো একটাকে float হতে হবে (মানে দশমিক হতে হবে) । </i>

উদাহরণ :

```c
#include <stdio.h>

int main() {
    // integer operands দিয়ে ভাগ
    int result_integer = 5 / 2;
    printf("Result with integer operands: %d\n", result_integer); // Output: 2

    // একটি integer এবং একটি floating-point operand দিয়ে ভাগ
    float result_float1 = 5 / 2.0; // 5 is treated as integer, 2.0 is treated as floating-point
    printf("Result with one integer and one floating-point operand: %f\n", result_float1); // Output: 2.500000

    // দুটো floating-point operands দিয়ে
    float result_float2 = 5.0 / 2.0;
    printf("Result with floating-point operands: %f\n", result_float2); // Output: 2.500000

    return 0;
}
```

## Relational Operator (রিলেশনাল অপারেটর)

যেসব অপারেটর দুটো অপারেন্ডের মধ্যে তুলনা বা সম্পর্ক বুঝানোর জন্য ব্যবহৃত হয় তাকে রিলেশনাল অপারেটর বলে ।

### Operator

- `==` (Equal to)

- `!=` (Not equal to)

- `<` (Less then; )

- `<=` (Less than or equal to)

- `>` (Greater than)

- `>=` (Greater than or equal to )

- ### Equal to (==):
  এই অপারেটরটি চেক করে যে দুটো অপারেন্ড "সমান" কিনা । যদি অপারেন্ড দুটি "সমান" হয় তাহলে এটা `true` রিটার্ন করবে, আর নাহলে `false`.

Example:

```c
int a = 5, b = 5;
if (a == b) {
    printf("a is equal to b\n");
}
```

- ### Not equal to (!=):
  এই অপারেটরটি চেক করে যে দুটো অপারেন্ড "সমান-না" কিনা । যদি অপারেন্ড দুটি "অসমান / সমান-না" হয় তাহলে এটা `true` রিটার্ন করবে, আর নাহলে `false`.

Example:

```c
int a = 5, b = 10;
if (a != b) {
    printf("a is not equal to b\n");
}
```

- ### Greater than (>):
  এই অপারেটরটি চেক করে যে বামদিকের অপারেন্ডটি ডানপাশের অপারেন্ডের তুলনায় 'বড়' কিনা । যদি বামপাশের অপারেন্ডটি ডানপাশের অপারেন্ডের তুলনায় 'বড়' হয় তাহলে এটি `true` রিটার্ন করবে, আর যদি 'ছোট' হয় তাহলে `false`.

Example:

```c
int a = 10, b = 5;
if (a > b) {
    printf("a is greater than b\n");
}

```

- ### Less than (<):
  এই অপারেটরটি চেক করে যে বামদিকের অপারেন্ডটি ডানপাশের অপারেন্ডের তুলনায় 'ছোট' কিনা। যদি বামপাশের অপারেন্ডটি ডানপাশের অপারেন্ডের তুলনায় 'ছোট' হয় তাহলে এটি `true` রিটার্ন করবে, আর যদি 'বড়' হয় তাহলে `false`.

Example :

```c
int a = 5, b = 10;
if (a < b) {
    printf("a is less than b\n");
}
```

- ### Greater than or equal to (>=):
  এই অপারেটরটি চেক করে যে বামদিকের অপারেন্ডটি ডানদিকের অপারেন্ডের তুলনায় 'বড়' অথবা সমান কিনা । যদি বামপাশের অপারেন্ডটি ডানপাশের অপারেন্ডের তুলনায় 'বড়' অথবা 'সমান' হয় তাহলে এটি `true` রিটার্ন করবে, আর নাহলে `false`.

Example:

```c
int a = 10, b = 10;
if (a >= b) {
    printf("a is greater than or equal to b\n");
}
```

- ### Less than or equal to (<=):
  এই অপারেটরটি চেক করে যে, বামপাশের অপারেন্ডটি ডানপাশের অপারেন্ডের তুলনায় 'ছোট' অথবা 'সমান' কিনা । বামপাশের অপারেন্ড ডানপাশের অপারেন্ডের তুলনায় 'ছোট' অথবা 'সমান' হলে এটি `true` রিটার্ন করবে, নয়তো `false`.

Example:

```c
int a = 5, b = 10;
if (a <= b) {
    printf("a is less than or equal to b\n");
}
```

## Logical operators (লজিক্যাল অপারেটর)

যেসব অপারেটর Boolean values (`true` or `false`) এর ওপর লজিক্যাল অপারেশন সম্পন্ন করার জন্য ব্যবহৃত হয় তাকে লজিক্যাল অপারেটর বলে । এই ধরণের অপারেটরগুলো আমাদের একাধিক শর্ত / কন্ডিশন একত্রিত করতে এবং অভিব্যক্তির সামগ্রিক সত্য মান নির্ধারণ করতে দেয় ।

### Operator :

- `&&` (কে বলা হয় Logical and)
- `||` (কে বলা হয় Logical Or)
- `!` (কে বলা হয় Logical Not)

- ### Logical AND (&&):
  এই অপারেটরটি `true` রিটার্ন করে যদি দুটো অপারেন্ডই সত্যি হয়, নয়তো `false` রিটার্ন করবে.

Example:

```c
int a = 5, b = 10;
if (a > 0 && b > 0) {
    printf("Both a and b are greater than 0\n");
}
```

- ### Logical OR (||):
  এই অপারেটরটি `true` রিটার্ন করে যদি অন্তত / কমপক্ষে একটি অপারেন্ড 'সত্যি' হয়, নয়তো এটি `false` রিটার্ন করবে.

Example:

```c
int a = 5, b = 10;
if (a == 5 || b == 5) {
    printf("At least one of a or b is equal to 5\n");
}
```

- ### Logical NOT (!):
  এই অপারেটরটি ব্যবহার হয় যখন এই অপারেটরটি তার অপারেন্ডের যৌক্তিক অবস্থাকে বিপরীত করতে ব্যবহৃত হয়। যদি অপারেন্ড `true` হয়, তাহলে এটি `false` রিটার্ন করবে, এবং অপারেন্ডটি `false` হলে, এটি `true` ফেরত দিবে ।

Example:

```c
int a = 5;
if (!(a == 10)) {
    printf("a is not equal to 10\n");
}
```

## Conditional Statements

C-প্রোগ্রামে নির্দিষ্ট শর্তের উপর ভিত্তি করে প্রোগ্রাম এক্সিকিউসন নিয়ন্ত্রণ করতে ব্যবহৃত হয় ।

The main conditional statements in C are:

- `if`
- `if-else`
- `else if`
- `switch`

- ### `if` স্টেটমেন্ট:
  কোন বিশেষ একটা শর্ত সত্য হলে তার ভিত্তিতে একটা বিশেষ কার্য সম্পাদনের জন্য ব্যবহার করা হয়

Example :

```c
if (condition) {
    // code block to be executed if condition is true
}
```

```c
int x = 10;
if (x > 5) {
    printf("x is greater than 5\n");
}
```

- ### - `if-else` স্টেটমেন্ট
  কোন বিশেষ একটা শর্ত সত্য হলে তার ভিত্তিতে সুনির্দিষ্ট একটা বিশেষ কার্য আর মিথ্যা হলে অপর একটা কার্য সম্পাদনের জন্য ব্যবহার করা হয়

Example :

```c
if (condition) {
    // code block to be executed if condition is true
}
else {
    // code block to be executed if condition is false
}

```

```c
int x = 10;
if (x > 5) {
    printf("x is greater than 5\n");
} else {
    printf("x is not greater than 5\n");
}
```

- ### `else if` স্টেটমেন্ট
  কোন বিশেষ একটা শর্ত সত্য হলে তার ভিত্তিতে সুনির্দিষ্ট একটা বিশেষ কার্য আর মিথ্যা হলে অপর এক বা একাধিক শর্ত বিশ্লেষণ করে তার উপর ভিত্তি করে একটা বিশেষ কার্য সম্পাদনের জন্য ব্যবহার করা হয়
  Example :

```c
if (condition1) {
    // code block to be executed if condition1 is true
}
else if (condition2) {
    // code block to be executed if condition1 is false and condition2 is true
}
else {
    // code block to be executed if both condition1 and condition2 are false
}
```

```c
#include <stdio.h>

int main() {
    int num = 10;

    if (num > 0) {
        printf("Number is positive\n");
    }
    else if (num == 0) {
        printf("Number is zero\n");
    }
    else {
        printf("Number is negative\n");
    }

    return 0;
}
```

- ### - `switch` স্টেটমেন্ট
  কোন একটা শর্তের বিভিন্ন ইনপুট এর উপর ভিত্তি করে এক সেট কার্যের মধ্যে থেকে একটা বিশেষ কার্য সম্পাদনের জন্য ব্যবহার করা হয়

Example :

```c
switch (expression) {
    case constant1:
        // code block to be executed if expression equals constant1
        break;
    case constant2:
        // code block to be executed if expression equals constant2
        break;
    // more case statements as needed
    default:
        // code block to be executed if expression doesn't match any case
}

```

```c
#include <stdio.h>

int main() {
    int choice = 2;

    switch (choice) {
        case 1:
            printf("You chose option 1\n");
            break;
        case 2:
            printf("You chose option 2\n");
            break;
        case 3:
            printf("You chose option 3\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
```
