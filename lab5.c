#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[15];
    int pass = 0;

    printf("\nEnter the password: \n");
    gets(buff);

    if (strcmp(buff, "thegeekstuff"))
    {
    }
    else
    {
        pass = 1;
    }

    if (pass)
    {
        printf("\nCorrect Password\n");
        printf("\nRoot privileges given to the user\n");
    }
    else
    {
        printf("\nWrong Password\n");
    }

    return 0;
}
