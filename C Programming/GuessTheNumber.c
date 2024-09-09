#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num, guess, guessno=1;
    srand(time(0));
    num=rand()%101 +1;
    printf("Computer has generated a RANDOM NUMBER.\n");
    printf("RULE: You get only 10 chances.\n");
    printf("Now Guess a Number Between 1 & 100: ");
    for(int i=0;i<10;i++){
        scanf("%d",&guess);
        if(guess==num){
            printf("Correct Guess!");
            break;
        }
        else if(guess>num){
            printf("Enter smaller Number! ");
        }
        else if(guess<num){
            printf("Enter bigger Number! ");
        }
        guessno++;
    }
    if(guess==num){
        printf("\nYou took %d times to Guess the Number.",guessno);
    }
    else{
        printf("\nWrong Guesses! and your chances are over!!");
    }
    return 0;
}