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
#include <stdlib.h>

int main(void) {
    // your code here
    int input;
    scanf("%d", &input);
    char *result = (char *)(malloc((input * (input+1)) * sizeof(char)));

    for (int c = 0; c < input; ++c) {
        result[c] = '*';
    }
    result[input] = '\n';
    for (int c = 0; c < input; ++c) {
        result[(input+1) * (input-1) + c] = '*';
    }
    for (int r = 1; r < input-1; ++r) {
        int previous = (input+1) * r;
        result[ previous ] = '*';
        result[ previous + input-1 ] = '*';
        result[ previous + input ] = '\n';
        for (int c = 1; c < input-1; ++c) {
            result[ previous + c ] = ' ';
        }
    }
    result[(input+1) * input - 1] = '\0';
    printf("%s\n", result);
    
    free(result);
    return 0;
}