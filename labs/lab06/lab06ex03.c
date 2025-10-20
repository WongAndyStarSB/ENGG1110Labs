/**
 * ENGG1110 Problem Solving by Programming 
 *
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

// your code here
#include <stdio.h>

int main() {
    double coefficients[4];
    for (int i = 0; i < 4; ++i) {
        scanf("%lf", &coefficients[i]);
    }
    for (int x = -6; x <= 4; ++x) {
        printf("f(%d) = %.2lf\n", 
            x, 
            coefficients[0]*x*x*x 
                + coefficients[1]*x*x 
                + coefficients[2]*x 
                + coefficients[3]
        );
    }
}


