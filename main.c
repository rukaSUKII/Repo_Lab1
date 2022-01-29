#include <stdio.h>

int count (int a, int b)
{
    return a*b;
}

int main() {
    printf("Hello, World!\n");
    printf(" W drugim branchu; 2 * 3 = %d\n", count(2, 3));
    return 0;
}
