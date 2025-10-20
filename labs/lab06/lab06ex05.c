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
 * Class/Section: ENGG1110 D
 * Date         : 9/10/2025
 */

// Please write down the formula for T_i on paper before
// you start writing the program

#include <stdio.h>

int main() {
    unsigned char n;
    printf("n? ");
    scanf("%d", &n);

    const double T_1 = 3.0;
    const double T_2 = T_1 + 4.0 / (2*3*4);

    printf("%.6lf\n", T_1);
    if (n == 1) { return 0; }
    printf("%.6lf\n", T_2);
    if (n == 2) { return 0; }
    if (n > 4) {
        puts("...");
    }
    char sign = -1;
    double pi = T_2;
    for (int i = 2; i < n-2; ++i) {
        pi += sign * 4.0 / (2*i*(2*i+1)*(2*i+2));
        sign *= -1;
        // pi = the (i+1)th term
    }
    for (int i = n-2; i < n; ++i) {
        pi += sign * 4.0 / (2*i*(2*i+1)*(2*i+2));
        sign *= -1;
        // pi = the (i+1)th term
        printf("%.6lf\n", pi);
    }
}

