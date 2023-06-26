#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];

    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        int randomChar = rand() % 62;
        if (randomChar < 26)
            password[i] = 'A' + randomChar;
        else if (randomChar < 52)
            password[i] = 'a' + (randomChar - 26);
        else
            password[i] = '0' + (randomChar - 52);
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s", password);

    return 0;
}

