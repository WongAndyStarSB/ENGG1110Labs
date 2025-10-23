/**
 * ENGG1110 Problem Solving by Programming 
 *
 * I declare that the assignment here submitted is original
 * except for source material explicitly acknowledged,
 * and that the same or closely related material has not been
 * previously submitted for another course.
 * I also acknowledge that I am aware of University policy and
 * regulations on honesty in academic work, and of the disciplinary
 * guidelines and procedures applicable to breaches of such
 * policy and regulations, as contained in the website.
 *
 * University Guideline on Academic Honesty:
 *   http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : Wong Wang Yui
 * Student ID   : 1155257766
 * Class/Section: ENGG1110D
 * Date         : 23/10/2025
 */

#include <stdio.h>

char isEvilNum(int n);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = b; i >= a; --i) {
        if (isEvilNum(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

char isEvilNum(int n) {
    unsigned int mask = 1 << (sizeof(n) * 8 - 1); // 10000...000
    unsigned int cnt = 0;
    for (int i = 0; i < sizeof(n) * 8; ++i) {
        if (mask & n) {
            cnt++;
        }
        mask >>= 1;
    }
    return (cnt % 2 == 0);
}