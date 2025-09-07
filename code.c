#include <stdio.h>
// all information of Precedence and Associativity in C language operators
int main(){
    // Precedence and Associativity in C
    // 1. Precedence: Determines the order in which operators are evaluated.
    // 2. Associativity: Determines the order in which operators of the same precedence are evaluated.

    // Example of Precedence
    int a = 5 + 2 * 3; // Multiplication has higher precedence than addition
    printf("Result of 5 + 2 * 3: %d\n", a); // Output: 11

    // Example of Associativity
    int b = 10 - 4 + 2; // Left-to-right associativity
    printf("Result of 10 - 4 + 2: %d\n", b); // Output: 8

    return 0;
}