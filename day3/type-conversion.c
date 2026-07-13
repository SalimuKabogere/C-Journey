/*
Here's a real-life example of data types and type conversion 
where we create a program to calculate the percentage of a user's score in relation to the maximum score in a game:
*/
#include <stdio.h>
int main() {
    // set the max score for the game
    int maxScore = 500;

    // set the actual user score in the game
    int userScore = 340;

    // calculate the percentage of the user's score in relation to the max score
    // convert the userScore and maxScore to float to get a more accurate percentage
    float percentage = (float) userScore / maxScore *100;
    
    // print the percentage of the user's score
    printf("The user's score is %.2f%% of the maximum score.\n", percentage);
    
    return 0;

}