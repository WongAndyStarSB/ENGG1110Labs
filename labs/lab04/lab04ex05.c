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

/* include header file */
#include <stdio.h>

/* starting point of this C program */
int main(void) {

    // 1. Declare an array countVote[3] to count the votes, remember to initialize the array
    int countVote[] = {0, 0, 0};
    int vote;

    // 2. Read the number, and count the vote.
    scanf("%d", &vote);
    countVote[vote-1]++;

    // 3. Do (copy and paste) statements in step 2 for 9 more times
    scanf("%d", &vote); // 2
    countVote[vote-1]++;
    scanf("%d", &vote); // 3
    countVote[vote-1]++;
    scanf("%d", &vote); // 4
    countVote[vote-1]++;
    scanf("%d", &vote); // 5
    countVote[vote-1]++;
    scanf("%d", &vote); // 6
    countVote[vote-1]++;
    scanf("%d", &vote); // 7
    countVote[vote-1]++;
    scanf("%d", &vote); // 8
    countVote[vote-1]++;
    scanf("%d", &vote); // 9
    countVote[vote-1]++;
    scanf("%d", &vote); // 10
    countVote[vote-1]++;

    char largest_candidate;
    if (countVote[0] > countVote[1] && countVote[0] > countVote[2]) {
        largest_candidate = '1';
    } else if (countVote[1] > countVote[0] && countVote[1] > countVote[2]) {
        largest_candidate = '2';
    } else if (countVote[2] > countVote[0] && countVote[2] > countVote[1]) {
        largest_candidate = '3';
    } else {
        printf("We cannot decide our committee chairman in this vote.");
        goto EXIT0;
    }
    printf("Congratulations! Candidate %c is the next committee chairman.", largest_candidate);
    // last programming statement
    EXIT0:
    return 0;
}