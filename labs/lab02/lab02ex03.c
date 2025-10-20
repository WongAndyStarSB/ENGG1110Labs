/*
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
 * Date         : 11/09/2025
 */


#include <stdio.h>

int main(void) {

    // declare the variables
    int input;

    // print "Input a 3 digit number: "
    printf("Input a 3 digit number: ");

    // obtain integer "input" from user
    scanf("%d", &input);

    // MSD = input / 100 (e.g. 450 / 100 is 4)
    int MSD = input / 100;

    // LSD = input % 10  (e.g. remainder of 450 / 10 is 0)
    int LSD = input % 10;

    // print MSD and LSD
    printf("MSD: %d\nLSD: %d\n", MSD, LSD);

    return 0;
}