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
