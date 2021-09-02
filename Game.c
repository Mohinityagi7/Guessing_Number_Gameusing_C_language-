/*NUMBER GUESSING GAME*/
#include<stdio.h>  
#include<stdlib.h>   //Import the library to random number to generated
#include<time.h>    // include the header files.

int main(){
    int number,guess,nguesses=1;
    srand(time(0)); // initilaiz seconds mai time return karta h almost different time return th number value will be different
    number=rand()%100+1;  //Generates a random number between 1 and 100.    
    //keep running the loop untill the number is guessed.
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lowe number please!\n");
        }
        else if(guess<number){
            printf("High number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n",nguesses);

        }
        nguesses++;
    }while(guess!=number);
    return 0;
    


}