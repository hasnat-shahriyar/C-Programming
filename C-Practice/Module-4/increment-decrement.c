#include <stdio.h>

int main(){
    int i = 10;

    // Post-increment: x, i এর বর্তমান ভ্যালু (10) পায়, তারপর i এর মান 1 করে বৃদ্ধি পায়
    int x = i++;

    // Pre-increment: i প্রথমে 1 দ্বারা বৃদ্ধি পায়, তারপর y পেয়ে যায় i (12) এর নতুন মান
    int y = ++i;

    printf("x : %d y : %d i : %d\n", x, y, i);
    
    // Post-decrement: a পেয়ে যায় i (12) এর বর্তমান ভ্যালু, তারপর i decremented হ্রাস পায় 1 দ্বারা
    int a = i--;

    // Pre-decrement: i প্রথমে decremented বা হ্রাস পায় 1 দ্বারা, তারপর b পেয়ে যায় i (10) এর নতুন মান
    int b = --i;
    
    printf("a : %d b : %d", a, b);
    return 0;
}

/* Output will be

i : 12 x : 10 y : 12
a : 12 b : 10

*/