#include <stdio.h>
#include <stdbool.h>

bool isCondition1(int X, int Y, int Z);
bool isCondition2(int X, int Y, int Z);
bool isCondition3(int X, int Y, int Z);

int main() {
    int X, Y, Z;
    printf("Input X, Y, Z: ");
    scanf("%d %d %d", &X, &Y, &Z);
    bool c1 = isCondition1(X, Y, Z);
    bool c2 = isCondition2(X, Y, Z);
    bool c3 = isCondition3(X, Y, Z);
    if (c1) {
        putchar('A');
    }
    if (c2) {
        putchar('B');
    }
    if (c3) {
        putchar('C');
    }
    if (c1 && c2 && c3) {
        putchar('D');
    }
    return 0;
}

bool isCondition1(int X, int Y, int Z) {
    char rightmost_of_X = X % 10;
    return (rightmost_of_X == 2 || rightmost_of_X == 7);
}
bool isCondition2(int X, int Y, int Z) {
    return (X + Y == Z || X + Z == Y || Y + Z == X);
}
bool isCondition3(int X, int Y, int Z) {
    return (X >= Y || Y % 3);
}