#include<stdio.h>
int main ()
{
    int secret =7;
    int guess;
    int i;
    printf("Welcome to Number Guessung Game!\n");
    for (i=1; i<=5; i++)
    {
        printf("Guess the Number between 1 and 10: ");
        scanf("%d", &guess);
        if (guess == secret)
        {
            printf("Congratulations! Correct Guess!\n");
            break;
        }
    else if (guess<secret)
    {
        printf("Too low! Try Again.\n");
    }    
    }
return 0;
}
