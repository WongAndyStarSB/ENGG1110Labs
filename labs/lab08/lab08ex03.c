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
 * Date         : 23/10/2025
 */
 
#include <stdio.h>

// This function returns the GCD of x and y
// You don't have to modify this function
int gcd(int x, int y) 
{
    // This function implements the Euclidean Algorithm for finding GCD
    // See: https://en.wikipedia.org/wiki/Euclidean_algorithm
    while (y != 0) {
        int tmp = y;
        y = x % y;
        x = tmp;
    }
    return x;
}

// Complete the implementation of this function so that it returns the 
// LCM of x and y
int lcm(int x, int y) 
{
// Write your code here
    return x * y / gcd(x, y);
}

// Complete the implementation of the main function.
int main(void)
{
// Write your code here
    const unsigned char NUM_OF_NUMBERS = 4;
    int numbers[4];
    for (unsigned char i = 0; i < NUM_OF_NUMBERS; ++i) {
        scanf("%d", numbers + i);
    }
    printf(
        "GCD is %d\nLCM is %d",
        gcd(gcd(gcd(numbers[0], numbers[1]), numbers[2]), numbers[3]),
        lcm(lcm(lcm(numbers[0], numbers[1]), numbers[2]), numbers[3])
    );
    return 0;
}
