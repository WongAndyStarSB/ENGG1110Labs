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
 * Date         : 4/9/2025
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    const double PI = 3.14;
    double r;
    printf("Input the radius=");
    scanf("%lf", &r);
    printf("Perimeter: %.2f\n", 2 * PI * r);
    printf("Area: %.2f", PI * r * r);

    return 0;
}
