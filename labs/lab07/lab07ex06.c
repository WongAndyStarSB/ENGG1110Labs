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
#include <stdint.h>
#include <stdlib.h>

// #define uint8_t unsigned char
int main() {
    uint8_t N, K;
    scanf("%hhu %hhu", &N, &K); // %hhu for uint8_t
    if (N == 0 || K > N || N > 100 || K > 100) {
        puts("/??X/X?/?");
        return 1;
    }

    int *numbers = (int *)(malloc(N * sizeof(int)));
    if (numbers == NULL) {
        puts("where: main() what: Memory allocation failed for `numbers` (type int *)");
        return 1;
    }
    for (int i = 0; i < N; ++i) {
        scanf("%d", numbers + i);
    }

    int sum = 0;
    // first calculation
    for (int i = 0; i < K; ++i) {
        sum += numbers[i];
    }
    printf("%.2lf", ((double)sum / (double)K));
    // remaining calculations
    for (int i = 0; i < N-K; ++i) {
        sum += numbers[i+K] - numbers[i];
        printf(" %.2lf", ((double)sum / (double)K));
    }

    free(numbers);
    return 0;
}