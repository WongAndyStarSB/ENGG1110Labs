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
 * Class/Section: D
 * Date         : 2/10/2025
 */

/* include header file */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void inputVector(double *v, uint8_t size) {
    for (uint8_t i = 0; i < size-1; ++i) {
        scanf("%lf ", &v[i]);
    }
    scanf("%lf", &v[size-1]);
}

int main() {
    uint8_t num_of_dimensions;
    double *v;
    double *w;
    double result = 0;

    printf("Input n: ");
    scanf("%d", &num_of_dimensions);

    v = (double *)malloc(num_of_dimensions * sizeof(double));
    w = (double *)malloc(num_of_dimensions * sizeof(double));

    printf("Enter vector v: ");
    inputVector(v, num_of_dimensions);

    printf("Enter vector w: ");
    inputVector(w, num_of_dimensions);

    for (uint8_t i = 0; i < num_of_dimensions; ++i) {
        result += v[i] * w[i];
    }
    printf("Dot product v.w = %.2f", result);

    return 0;
}
