#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void initialize_random_number_generator() //INIT THE RANDOM NUMBER GENERATOR
{
  srand(time(NULL)); 
}

int random_number()
{
    int min = 1;
    int max = 100;
    int random_number = 0;

    random_number = rand() % max + min;
  return random_number;
}

int main(int argc, char* argv[])
{
    int random = 0;
    initialize_random_number_generator();

    random = random_number();

int number = atoi(argv[1]);

    for(int i = 0; i < argc; i++)
    {
        printf("%i = %s\n", i, argv[i]);
    }

    if(number < 18)
    {
        printf("Hallo %s!\n", argv[2]);
    }
    else if (strcmp(argv[3], "m") == 0)
    {
        printf("Guten Tag Herr %s!\n", argv[2]);
    }
    else
    {
        printf("Guten Tag Frau %s!\n", argv[2]);
    }

    if(random <= 42)
    {
         printf("Gewonnen! %i\n", random);
    }
    else
    {
         printf("Verloren! %i\n", random);
    }

return 0;
}
