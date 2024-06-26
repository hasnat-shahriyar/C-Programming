# Loop (লুপ)

## Loop (লুপ) মানে কি? কত প্রকার ও কি কি?

Loop (লুপ) অর্থ চক্র । প্রোগ্রামের একই ধরনের কাজ বারবার করার প্রয়োজন হলে লুপ ব্যবহার করা হয় । একই কাজ বারবার করার প্রক্রিয়াকে লুপ বা চক্র বলে ।

Loop (লুপ) সাধারণত ৩ প্রকার

- `for Loop`
- `while Loop`
- `do-while loop`

  <i><b>Note :</b> ৩ নম্বরটির (`do-while`) কাজ প্রথম দুটি দিয়েই করা যায় । আসলে কোন একটি লুপ চালানোর জন্য প্রথম দুটির একটি ব্যবহার করলেই হয় । প্রথমের দুটি (`for` এবং `while`) দিয়েই লুপের সব কাজ করা যায় । সিন্ট্যাক্স এর দিক থেকে দুটি ভিন্ন । অর্থাৎ দুটি লেখার ধরণ ভিন্ন । তবে কাজ একই । লেখার ধরণ ভিন্ন হওয়ায় যার যখন যেভাবে লিখতে সুবিধা সে তখন সেই অনুযায়ী লুপ ব্যবহার করে । বেশিরভাগ ক্ষেত্রেই সাধারণত `for` লুপ ব্যবহার করা হয় । এখানে সেটি নিয়েই আলোচনা করা হল ।</i>

- ## `for` loop (ফর লুপ)

  `for` লুপ তখন ব্যবহার হয় যখন আমরা আগে থেকেই জানি যে, কতোবার block of code আমরা এক্সিকিউট করবো । এর তিনটি অংশ/পার্ট আছে : initialization (আরম্ভ), condition (শর্ত), এবং increment/decrement (বৃদ্ধি/হ্রাস) ।

  `for` লুপের সিন্ট্যাক্স :

  ```c
  for( initialization ; condition ; increment/decrement ) {
      /* যে কাজগুলো বারবার করতে হবে */
  }
  ```

  - এখানে `for` এর পরে প্রথম ব্র্যাকেটের মধ্যে তিনটি অংশ লক্ষনীয় । তিনটি অংশ দুইটি সেমিকোলনের মাধ্যমে আলাদা করা আছে । এই ব্যাপারটা গুরুত্বের সাথে মাথায় রাখতে হবে যে, এটি `C` এর `for` লুপের সিন্ট্যাক্স । অতএব: যখনই `for` লুপ লেখা হবে, তখনই দুইটি সেমিকোলনের মাধ্যমে আলাদা করা তিনটি অংশ থাকতেই হবে, এগুলোতে কিছু লেখা না থাকলেও সেমিকোলন দুইটি থাকতেই হবে । একটি কম হলেও হবে না, বেশি হলেও হবে না ।
  - এখন দেখা যাক ব্র্যাকেটের মধ্যে কি আছে । ব্র্যাকেটের মধ্যের যে তিনটি অংশ তার প্রথমটি দেখা যাচ্ছে `initialization`, এই অংশটি লুপ শুরু হওয়ার সময় সংঘটিত হয় । এখানে সাধারণত একটি এসাইনমেন্ট স্টেটমেন্ট থাকে । কোন একটি ভেরিয়েবলে, যেই ভেরিয়েবল দিয়ে লুপটি চলবে, তাকে একটি মান দেওয়া হয় । এর পরের অংশ হল `condition`, এখানে কোন একটি শর্ত থাকবে। এরপরে `increment/decrement`, এ কোন একটি ভেরিয়েবলের মান বাড়ানো হয় বা কমানো হয় । এতে করে প্রতিবার লুপ চলার সাথে সাথে লুপটি শর্তের দিকে আগাতে থাকে এবং এক সময় শর্ত মিথ্যা হয়ে লুপ থেমে যায় ।
  - এবার দেখি কিভাবে এটি কাজ করে । একটি উদাহরণ দেখি । ধরা যাক, আমাদেরকে একই লেখা বারবার প্রিন্ট করতে হবে । আমরা প্রিন্ট করতে চাই "Hello, Amar Naam Nahin" । এই লেখাটা দশবার প্রিন্ট করতে চাই । তাহলে আমরা printf() এর মধ্যে দশবার এটি লিখতে পারি । আর যদি কষ্ট কম করতে চাই তাহলে একটা লুপ ব্যবহার করে দশবার প্রিন্ট করে দিতে পারি । লুপের মাধ্যমে লিখলে প্রোগ্রামটি হবে এরকম :

- #### উদাহরণ ১ : `i` এর মান `1` হলে `i` যদি `10` এর ছোট বা সমান হয় তাহলে লুপটি `i++` হয়ে ১০ বার এক্সিকিউট হবে এবং ব্লকের ভেতরের কোডগুলো সেই দশবার এক্সিকিউট করবে ।

  ```c
  int i;
  for( i = 1; i <= 10; i++ ) {
    printf( "Hello, Amar Naam Nahin\n" );
  }
  ```

  - <i>এখানে প্রথমে `i` একটি ভেরিয়েবল ডিক্লেয়ার করা হয়েছে । এটি দিয়ে লুপ চালানো হবে । অর্থাৎ কতবার একটি কাজ হবে সেটি নির্দিষ্ট করে দেওয়া হবে । প্রথমে `initialization` অংশে প্রোগ্রাম যাবে । সেখানে যে স্টেটমেন্ট থাকবে সেটি সম্পন্ন হবে । এখানে আছে `i = 1` । অর্থাৎ `i` এর মান `1` হয়ে গিয়েছে । এই কাজটি একবারই হবে । একবার হয়ে যাওয়ার পর যতবার লুপ চলবে এটি আর হবে না । অর্থাৎ `initialization` অথবা প্রথম সেমিকোলনের আগের অংশে যা থাকবে সেটি পুরো লুপ চলার শুরুতে সম্পন্ন হবে এবং আর কখনই হবে না ।</i>
  - <i>এরপরের যে অংশটি আছে সেটি হল শর্ত (Condition) । `Initialization` হওয়ার ঠিক পরপরই এখানে এসে প্রোগ্রাম দেখবে যেই শর্তটি জুড়ে দেওয়া হইছে সেটি সত্য কিনা । শর্ত বিভিন্নভাবে দেওয়া যেতে পারে । এটার সাথে `initialization` এর সম্পর্ক থাকতেও পারে, আবার নাও থাকতে পারে । শর্ত আছে, সেটি সত্য নাকি মিথ্যা এটিই দেখার বিষয় । যদি শর্ত সত্য না হয় তাহলে লুপের ভিতরে প্রবেশ করবে না, যেমনটি `if` এর ক্ষেত্রে হয় । সরাসরি লুপের পরে যে স্টেটমেন্ট আছে সেখানে চলে যাবে । আর যদি শর্ত সত্য হয় তাহলে তখনই লুপের ভিতরে প্রবেশ করবে । ভিতরে যে স্টেটমেন্টগুলো আছে সেগুলো সম্পাদিত হবে । এখানে আছে `i <= 10` । যেহেতু প্রথমেই `i` এর মান `1` করে নেওয়া হয়েছে অতএব এখন শর্তটি সত্য । তাহলে লুপের ভিতরে প্রবেশ করবে এবং `printf()` সম্পাদিত হবে ।</i>
  - <i>স্টেটমেন্টগুলো সম্পাদিত হয়ে গেলে প্রোগ্রাম `increment/decrement` অংশে আসবে । এখানে যে স্টেটমেন্ট লেখা থাকবে সেটি সংঘটিত হবে । অর্থাৎ উপর্যুক্ত উদাহরণ অনুযায়ী `i++` হবে । `i` এর মান এক বাড়বে । এরপর প্রোগ্রাম আবার শর্ত পরীক্ষা করে দেখবে । শর্ত সত্য হলে আগেরমতই লুপের ভিতর প্রবেশ করবে । আরেকবার `printf()` হবে । আবার `increment/decrement` অংশে যাবে । `i` এর মান এক বাড়বে । এরপর শর্ত পরীক্ষা করবে । `printf()` হবে । এভাবে চলতে থাকবে । এখানে খেয়াল রাখা উচিৎ, `initialization` অংশটি আর আসবে না । একেবারে শুরুতে একবার হবে, তখনই শেষ ।</i>
  - <i>এভাবে লুপটি চলতে থাকবে এবং `i` এর মান এক এক করে বাড়বে এবং প্রিন্ট হবে । `i` এর মান যখন `10` হবে তখন শর্ত `i <= 10` সত্য হয়ে প্রিন্ট হয়ে `i++` হয়ে `i` এর মান `11` হবে । এবার যখন শর্ত পরীক্ষা করতে যাবে তখন শর্ত মিথ্যা হবে । ফলে লুপ থেকে প্রোগ্রাম বের হয়ে আসবে । এভাবে দশবার একই কাজ সম্পাদিত হলো । এখানে লক্ষনীয়, যখন লুপের শর্ত মিথ্যা হল তখন `i` এর মান `11` । এই ধারণাটি বিভিন্ন ক্ষেত্রে প্রয়োজন হয় । এটি বুঝতে অনেকেরই সমস্যা হয় । একটু ভালো মত খেয়াল করলেই বুঝা যাবে । কোন কাজের পর কোনটি হচ্ছে সেটি খেয়াল করতে হবে । `i++` হয়ে, অর্থাৎ `i` এর মান এক বেড়ে যাওয়ার পর শর্ত মিথ্যা হয়েছে, অতএব ইতোমধ্যে `i` এর মান `11` হয়েছে ।</i>

- #### উদাহরণ ২ : `i` এর মান `0` থেকে `4` আউটপুট দেখাতে

  ```c
  for (int i = 0; i < 5; i++) {
  printf("Value of i: %d\n", i);
  }
  ```

- ## `while` loop (হোয়াইল লুপ):

  `while` লুপ তখন ব্যবহার হয় যখন আমরা পুনরাবৃত্তি নম্বরটি জানি না । `while` লুপে, কন্ডিশনটি প্রথমে মূল্যায়ন করা হয় এবং যদি এটি সত্য হয় তবে লুপের ভিতরে স্টেটমেন্টগুলি কার্যকর হয়, কন্ডিশনটি মিথ্যা না হওয়া পর্যন্ত এটি বারবার ঘটবে । কন্ডিশন মিথ্যা হলে, কন্ট্রোল লুপ থেকে বেরিয়ে আসে এবং `while` লুপের পর প্রোগ্রামের পরবর্তী স্টেটমেন্টে চলে যায় ।

  `while` লুপের সিন্ট্যাক্স :

  ```c
  while (condition) {
    // যে কাজগুলো বারবার করতে হবে
  }

  ```

- #### উদাহরণ : `i` এর মান `0` থেকে `4` আউটপুট দেখাতে

  ```c
  int i = 0;
  while (i < 5) {
      printf("Value of i: %d\n", i);
      i++;
  }
  ```

- ## `do-while` loop (ডু-হোয়াইল লুপ):

  `do-while` লুপ অনেকটাই একইরকম `while` লুপের মতো, কিন্তু `do-while` এর ক্ষেত্রে এটি কোড এক্সিকিউশন করার পর `condition` (শর্ত) চেক করে, তাই এটি সবসময় অন্তত একবার কোড এক্সিকিউশন করে ।

  `while` লুপের সিন্ট্যাক্স :

  ```c
  do {
    // যে কোডটি এক্সিকিউট হবে
  } while (condition);
  ```

- #### উদাহরণ : `i` এর মান `0` থেকে `4` আউটপুট দেখাতে

  ```c
  int i = 0;
  do {
      printf("Value of i: %d\n", i);
      i++;
  } while (i < 5);
  ```

  - `i` এর মান `0` ডিক্লেয়ার করা হলো ।
  - `do-while` লুপ দেখে যে লুপের ভেতরের কোড যেনো অন্তত একবার এক্সিকিউট হয়, লুপের শর্ত চেক করার আগে ।
  - `do-while` লুপের ভেতরে :

    a. `printf()` ফাংশন কল করা হলো `i` এর বর্তমান ভ্যালু প্রিন্ট করার জন্য ।

    b. `i` এর ভ্যালু `1` করে বৃদ্ধি করা হলো `i++` <i>increment operator</i> দিয়ে ।

    c. লুপটি চলতে থাকবে যতক্ষণ পর্যন্ত শর্ত (`condition`) `i < 5` মিথ্যা (`false`) হচ্ছে ।

  - একবার `i` এর ভ্যালু `5` পর্যন্ত চলে গেলে, লুপের শর্ত `i < 5` মিথ্যা (`false`) হয়ে যায়, এবং লুপ সেখানেই শেষ (`terminates`) হয়ে যায় ।

<i><b>Note : </b>In C programming, `i += 1` is a shorthand notation for incrementing the value of the variable `i` by 1. It is equivalent to `i = i + 1`. This operation is commonly used to increase the value of a variable by 1.

For example:

```c
int i = 0;
i += 1;
```

After executing this code, the value of `i` will be incremented by 1. So, initially `i` was 0, and after the operation, `i` will become 1.

Similarly, you can use `i -= 1` to decrement `i` by 1, which is equivalent to `i = i - 1`.

This shorthand notation is convenient and commonly used in programming to make the code more concise and readable.</i>
