#include <stdio.h>

/**
 * bitwise_post_increment - Mimics the behavior of x++
 * @n: Pointer to the integer to increment
 * 
 * Returns: The original value before incrementing.
 */
int bitwise_post_increment(int *n) {
    int original = *n;
    unsigned int mask = 1;

    // Bitwise increment logic:
    // Flip all bits from the right until we find the first 0
    while (*n & mask) {
        *n = *n ^ mask; // Flip 1 to 0
        mask <<= 1;     // Move to next bit
    }
    
    // Flip the first 0 we found to 1
    *n = *n ^ (int)mask;

    return original;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Original value: %d\n", num);
    
    int old_val = bitwise_post_increment(&num);
    
    printf("Returned value (post-inc): %d\n", old_val);
    printf("New value in variable: %d\n", num);

    return 0;
}
