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
#include <stdint.h>

int main(void) {
    const int SEP_OF_1_3_mul10 = 415;
    const int SEP_OF_3_8_mul10 = 625;
    const int SEP_OF_8_10_mul10 = 1175;
    // Enter your code here to
    // 1. Obtain input of wind speed
    int wind_speed, before_point, after_point;
    uint8_t result;

    scanf("%d.%d", &before_point, &after_point);
    // 2. Classify the tropical cyclone warning signal type
    wind_speed = before_point * 10 + after_point;

    result = (wind_speed < SEP_OF_1_3_mul10) + (wind_speed < SEP_OF_3_8_mul10) * 3 + (wind_speed < SEP_OF_8_10_mul10) * 8 + (wind_speed >= SEP_OF_8_10_mul10) * 10;

    // 3. Print both the wind speed and signal
    printf(
        "Continuous Wind Speed of %d.%d => Tropical Cyclone Warning Signal No %d", before_point, after_point, result
    );
    /* last statement of this C program */
    return 0;

}