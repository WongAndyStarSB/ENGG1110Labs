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

int main(void) {
	// Hint: You do not need to use if-statement.
    unsigned int n_adults;
    unsigned int n_childrens;
    float cost;
    float tips;

    float child_should_pay;

    printf("Input number of adults: ");
    scanf("%d", &n_adults);
    printf("Input number of children: ");
    scanf("%d", &n_childrens);
    printf("Input cost of meal: ");
    scanf("%f", &cost);
    printf("Input tips: ");
    scanf("%f", &tips);

    child_should_pay = (float)(cost + tips) / (float)(n_adults * 2 + n_childrens);

    printf(
        "Each adult pays: %.2f\n"
            "Each child pays: %.2f", 
        child_should_pay * 2,
        child_should_pay
    );
}