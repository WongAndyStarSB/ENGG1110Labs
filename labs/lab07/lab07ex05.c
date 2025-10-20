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
#include <stdbool.h>

int main() {
    int num_of_row;
    printf("Rows (2-20)? ");
    scanf("%d", &num_of_row);

    int num_of_col = num_of_row * 2;

    char *result = (char *)(malloc((num_of_col * num_of_row * 2 + 1) * sizeof(char)));

    // for (int i = 0; i < num_of_col * num_of_row * 2; ++i) {
    //     result[i] = '-';
    // }
    for (int i = 0; i < 2; ++i) {
        for (int r = 0; r < num_of_row; ++r) {
            int previous = i * (num_of_row * num_of_col) + r * num_of_col;
            int cut1_index = num_of_row-r-1;
            int cut2_index = num_of_row+r;
            for (int c = 0; c < cut1_index; ++c) {
                result[ previous + c ] = '.';
            }
            bool is_star = true;
            for (int c = cut1_index; c < cut2_index; ++c) {
                if (is_star) {
                    result[ previous + c ] = '*';
                    is_star = false;
                } else {
                    result[ previous + c ] = '@';
                    is_star = true;
                }
            }
            for (int c = cut2_index; c < num_of_col-1; ++c) {
                result[ previous + c ] = '.';
            }
            result[ previous + num_of_col-1 ] = '\n';
        }
    }
    result[ num_of_col * num_of_row * 2 ] = '\0';

    printf(result);

    free(result);
    return 0;
}