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
 * Date         : 16/10/2025
 */

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (!(n % 2) || !(n % 3)) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 // check for divisable by (6x-1)
            || n % (i + 2) == 0 // check for divisable by (6x+1)
        ) { 
            return false;
        }
    }
    return true;
    // 7(6x+1) 8(2x) 9(3x) 10(2x) 11(6x-1) 12(2x)
}

int main() {
    int a, b;
    printf("Input a and b: ");
    scanf("%d %d", &a, &b);
    for (int num = b; num >= a; --num) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    return 0;
}