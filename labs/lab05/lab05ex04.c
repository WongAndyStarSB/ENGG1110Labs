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
 *http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : Wong Wang Yui
 * Student ID   : 1155257766
 * Class/Section: D
 * Date         : 2/10/2025
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main() {
    const uint16_t BEGIN = 1000;
    const uint16_t END = 1501;
    int n;
    scanf("%d", &n);
    n--;
    bool first = true;
    uint16_t i = BEGIN;
    while (i < END) {
        if (!(i % n)) {
            if (first) {
                printf("%d", i);
                first = false;
            } else {
                printf(" %d", i);
            }
        }
        i++;
    }
    printf("\n");
}