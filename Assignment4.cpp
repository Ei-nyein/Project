//
// Created by LENOVO-PC on 12/10/2022.
//
#include "stdio.h"
#include "string.h"

int main()
{
    FILE *fptr;
    char word[100];
    char name;
    char *filename = "words.txt";
    char search[] = "winhtut";
    char search2[] = "NationalCyberCity";
    int count = 0;
    int count2 = 0;

    fptr = fopen(filename, "r");

    do
    {
        name = fscanf(fptr, "%s", word);
        if(strcmp(word, search) == 0)
        {

            count++;
        }
        if(strcmp(word, search2) == 0)
        {

            count2++;
        }

    } while (name != EOF);

    if(count == 0){
        printf("'%s' not found in %s\n", search, filename);
        printf("'%s' not found in %s\n", search2, filename);
    }

    else
    {
        printf("'%s' is found.\n ", search);
        printf("Count Time 'winhtut' : %d times\n", count);
        printf("'%s' is found.\n", search2);
        printf("Count Time 'NationalCyberCity' : %d times\n", count2);
    }

    fclose(fptr);

    return 0;
}