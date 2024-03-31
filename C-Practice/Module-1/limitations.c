#include <stdio.h>

int main()
{
    int a = 1000000000;         // This line declares a variable 'a' and assigns it the value 1000000000.
    int b = 10000000000;        // This line declares a variable 'b' and tries to assign it a value of 10000000000.
                                 // However, this number is too large to fit into an 'int' type variable in C.
                                 // An int in C can typically hold numbers up to around 2 billion (depending on the system).
                                 // So, this line will result in an error.

    long long int c = 10000000000;  // This line declares a variable 'c' of type long long int.
                                     // 'long long int' is a data type that can hold larger numbers compared to 'int'.
                                     // So, it can hold the value 10000000000 without any issue.

    printf("%d\n", a);          // This line prints the value of 'a'. The '%d' tells printf that 'a' is an int.
                                 // So, it prints the value of 'a' which is 1000000000.

    printf("%d\n", b);          // This line tries to print the value of 'b', but since 'b' wasn't properly initialized
                                 // (because it couldn't hold the value assigned), it will cause an error.

    printf("%lld\n", c);        // This line prints the value of 'c'. The '%lld' tells printf that 'c' is a long long int.
                                 // So, it prints the value of 'c' which is 10000000000.

    return 0;
}


/*
Explanation in simpler terms:

1. We're using a programming language called C.
2. In this program, we're trying to store and print some big numbers.
3. We have three variables: 'a', 'b', and 'c'.
4. 'a' can hold a large number because it's an 'int'. But 'b' can't hold such a big number because it's also an 'int' and ints have a limit.
5. So, when we try to store 10000000000 in 'b', the program gets confused because 'b' can't handle such a large number. It's like trying to put a big watermelon into a small basket.
6. But 'c' is different. It's called a 'long long int', which means it can hold even bigger numbers than 'a' and 'b'. So, it has no problem storing and printing 10000000000.
7. Finally, we use 'printf' to print the values of 'a', 'b', and 'c'. But because 'b' wasn't stored properly, printing its value will cause an error.
*/