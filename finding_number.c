#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    const int max = 100;
    const int min = 1;
    int guess;
    int guesses;
    int answer;

    srand(time(0));
    answer = (rand() % max) + min ;

    printf("Welcome to guess game\nlets find a number between 1 to 100");
    
    do
    {
       printf("\nEnter the guess : ");
       scanf("\n%d", &guess);
       if (guess < answer)
       {
        printf("your guess is too low");
       }
       else if(guess > answer)
       {
        printf("your guess is too hight");
       }
       else
       {
        printf("youe guess is correct !");
       }
       guesses++;
    } while (guess != answer);

    printf("\n***********************");
    printf("\nthe answer : %d", answer);   
    printf("\nyour guesses : %d", guesses); 
    printf("\n***********************");  
    


    return 0;
}