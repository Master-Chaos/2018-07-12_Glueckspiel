#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void initialize_random_number_generator() //INIT THE RANDOM-NUMBER-GENERATOR
{
  srand(time(NULL)); //
}

int random_number() //GENERATE A RANDOM-NUMBER BETWEEN 1 AND 100
{
    int min = 1; //MINIMAL VALUE FOR RANDOM-GENERATOR
    int max = 100; //MAXIMUM VALUE FOR RANDOM-GENERATOR
    int random_number = 0; //INIT THE VARIABLE BEFOR USE IT

    random_number = rand() % max + min; //GENERATE RAMDOM NUMBER WITH MODULO FOR EXAMPLE: 201%100 + 1 = 2 -> RANDOM-NUMBER IS 2

return random_number;
}

int main(int argc, char* argv[]) // MAIN FUNCTION PROGRAM ARGUMENTS: 17 Maya m
{
    int random = 0; //INIT THE VARIABLE BEFOR USE IT
    int number = atoi(argv[1]); //CONVERT INPUT FROM CHAR TO INT

    initialize_random_number_generator(); //CALL FUNCTION TO INIT THE RAMDOM-GENERATOR
    random = random_number(); //GET A RANDOM-NUMBER

    if(number < 18) // IF PERSON IS UNDER 18
    {
        printf("Hallo %s!\n", argv[2]);
    }
    else if (strcmp(argv[3], "m") == 0) //CHECK IF PERSON IS MALE (=M)
    {
        printf("Guten Tag Herr %s!\n", argv[2]);
    }
    else //OTHERWISE PERSON IS FEMALE
    {
        printf("Guten Tag Frau %s!\n", argv[2]);
    }

    if(random <= 42) //CHECK IF RANDOM-NUMBER IS UNDER OR IS 42 -> 42% WIN CHANCE
    {
         printf("Gewonnen! %i\n", random);
    }
    else
    {
         printf("Verloren! %i\n", random);
    }

return 0;
}
