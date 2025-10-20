#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main() {
    int phone_no;
    printf("Input phone number: ");
    scanf("%d", &phone_no);
    if (phone_no < 20000000 || phone_no >= 100000000) {
        printf("Invalid phone number");
        return 0;
    }

    unsigned char bitf[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 8; ++i) {
        bitf[phone_no % 10] = 1;
        phone_no /= 10;
    }
    int cnt = 0;
    for (int i = 0; i < 10; ++i) {
        cnt += bitf[i];
    }
    printf("%d", cnt);
    return 0;
}