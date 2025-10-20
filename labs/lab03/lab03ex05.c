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
 * Date         : 18/09/2025
 */

#include <stdio.h>
#include <stdint.h>

int main(void) {
    int x;
    scanf("%d", &x);
    
    if (x == 0) {
        printf("Zero");
    } else if (x > 0) {
        if (x % 2) {
            printf("Positive odd number");
        } else {
            printf("Positive even number");
        }
    } else {
        if (x % 2) {
            printf("Negative odd number");
        } else {
            printf("Negative even number");
        }
    }
    return 0;

}