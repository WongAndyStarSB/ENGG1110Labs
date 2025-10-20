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
 * Class/Section: D
 * Date         : 2/10/2025
 */

/* include header file */
#include <stdio.h>
#include <stdint.h>

int main(void) {
  
  // GIVEN an initialized array isPrime[] with proper initializers each element in the array, e.g., isPrime[3], isPrime[4], represents that the corresponding integer index is a prime number or not
  
	// DO NOT CHANGE
  int isPrime[] = {
    0, // this is [0]
    0, 1, 1, 0, 1, 0, 1, 0, 0, 0,
		// elements [2], [3], [5], [7] are true because 2, 3, 5 and 7 are primes
    1, 0, 1, 0, 0, 0, 1, 0, 1, 0,
		// elements [12], [14], [15], [16], [18], [20] are false because they are composites
    0, 0, 1, 0, 0, 0, 0, 0, 1, 0,     
    1, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    1, 0, 1, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 1, 0,
    1, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    1, 0, 1, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0
  };

  // students shall code below
  int first, last;
  scanf("%d %d", &first, &last);

  printf("[%d, %d]: ", first, last);
  
  uint8_t cnt;
  for (int i = first; i <= last; ++i) {
    if (isPrime[i]) {
      printf("%d ", i);
      cnt++;
    }
  }
  printf("(%d)", cnt);
  
  return 0;
}