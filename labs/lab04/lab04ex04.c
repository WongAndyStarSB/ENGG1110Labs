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
* Date         : 25/09/2025
*/

#include <stdio.h>

int main() {
    double v[3];
    double w[3];
    printf("Enter vector v ([0] [1] [2]): ");
    scanf("%lf %lf %lf", &v[0], &v[1], &v[2]);
    printf("Enter vector w ([0] [1] [2]): ");
    scanf("%lf %lf %lf", &w[0], &w[1], &w[2]);
    double dot_product = 0;
    for (int i = 0; i < 3; ++i) {
        dot_product += v[i] * w[i];
    }
    printf("Dot product v.w = %.2f", dot_product);
    return 0;
}