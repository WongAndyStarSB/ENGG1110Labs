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

int nocheck_int_pow(int num, int p) {
    if (p == 0) {
        return 1;
    }
    int result = 1;
    for (int i = 0; i < p; ++i) {
        result *= num;
    }
    return result;
}
int binaryToDecimal(int b) {
	// convert binary number to decimal number
    int dec = 0;
    int pow_num = 0;
    while (b > 0) {
        dec += (b % 10) * nocheck_int_pow(2, pow_num);
        b /= 10;
        pow_num++;
    }
    return dec;
}

int decimalToBinary(int d) {
	// convert decimal number to binary number
    int bin = 0;
    int pow_num = 0;
    while (d > 0) {
        bin += (d % 2) * nocheck_int_pow(10, pow_num);
        d /= 2;
        pow_num++;
    }
    return bin;
}

int main(void) {
    int b1, b2, d1, d2, diff_b, diff_d;
    // Read b1 and b2 from user, and start calculation
    printf("b1 and b2? ");
    scanf("%d %d", &b1, &b2);
    // Do NOT modify the following lines
    // NEVER EVER TOUCH THESE!
    d1 = binaryToDecimal(b1);
    d2 = binaryToDecimal(b2);
    printf("The numbers (in decimal) are %d and %d\n", d1, d2);
    diff_d = d1 - d2;
    diff_b = decimalToBinary(diff_d);
    printf("The difference is %d (decimal) or %d (binary)\n", diff_d, diff_b);
    return 0;
}