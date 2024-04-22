# Unary Operators (ইউনারি অপারেটরস)

ইউনারি অপারেটর হলো সেইসব অপারেটর যার দ্বারা একটি নতুন মান তৈরি করতে একটি একক অপারেন্ড দ্বারা যোগ বা বিয়োগ করে তাঁর মান বৃদ্ধি বা হ্রাস করে । অর্থাৎ, একটি নতুন মান তৈরি করতে `++` দ্বারা যোগ করে সেই মানটি `1` করে বৃদ্ধি করে, অথবা `--` দ্বারা বিয়োগ করে সেই মানটিকে `1` করে হ্রাস করে । এটি `integer`, `floating-point`, এবং `pointer` এর ক্ষেত্রেও প্রয়োগ করা যেতে পারে ।

- ## Increment Operator (`++`):

  - যখন `++` একটি ভ্যারিয়েবলের পূর্বে বসানো হয় (`++ভ্যারিয়েবল`), তখন এটিকে <i>pre-increment operator (পূর্ব-বৃদ্ধি অপারেটর)</i> বলা হয় । এটি ভ্যারিয়েবলের মান বৃদ্ধি করে এবং তারপর সেই <i>বর্ধিত / বৃদ্ধি</i> হওয়া মান মূল্যায়ন করে ।
  - যখন `++` একটি ভ্যারিয়েবলের পরে বসানো হয় (`ভ্যারিয়েবল++`), তখন এটিকে <i>post-increment operator (পরে-বৃদ্ধি অপারেটর)</i> বলা হয় । এটি ভেরিয়েবলের বর্তমান মানকে আগে মূল্যায়ন করে এবং তারপর মান বৃদ্ধি করে ।

    উদাহরণ :

    ```c
    int a = 5;
    int b;

    b = ++a; // Increment 'a' by 1, then assign the incremented value to 'b'
    // Now, 'a' is 6, 'b' is 6

    b = a++; // Assign the current value of 'a' to 'b', then increment 'a' by 1
    // Now, 'a' is 7, 'b' is 6

    ```

- ## Decrement Operator (--):

  - Increment Operator এর মতোই, `--` ভ্যারিয়েবলের মানকে `1` করে decrement (হ্রাস) করে ।
  - `--` দিয়েও <i> pre-decrement (পূর্ব-হ্রাস)</i> অথবা <i>post-decrement (পরে-হ্রাস)</i> অপারেটর হিসেবে ব্যবহার করা যেতে পারে, সেই একই যুক্তি ব্যবহার করে যেটা আমরা increment operator এর ক্ষেত্রে ব্যবহার করেছিলাম ।

    উদাহরণ :

    ```c
    int x = 10;
      int y;

      y = --x; // Decrement 'x' by 1, then assign the decremented value to 'y'
      // Now, 'x' is 9, 'y' is 9

      y = x--; // Assign the current value of 'x' to 'y', then decrement 'x' by 1
      // Now, 'x' is 8, 'y' is 9

    ```
