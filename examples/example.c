#include <stdio.h>
#include <string.h>

/*
    This program adds 3 + 4 and prints sum on the screen.
*/

char* str[] = "This is sum of 3 and 4.";

int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

int main(void) {
    int a = 3;
    int b = 4;

    int x = addNumbers(a, b); // Calculate a + b (3 + 4)

    printf("%s", str);
    printf(x);

    return 0;
}