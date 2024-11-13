#include<stdio.h>
#include<string.h>
#include <unistd.h>

int main()
{
    char text[] = "Hello World!";
    int textSize = sizeof(text);

    char chars[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ 1234567890!@#$^&*;";
    int charsSize = sizeof(chars);

    for(int i = 0; i < textSize; i++)
    {
        char tmp[textSize];

        for(int j = 0; j < charsSize; j++)
        {
            printf("%s%c\n",tmp,chars[j]);

            // sleep 10 mil sec
            usleep(10000);

            // if char looking for has found, break the loop
            if(chars[j] == text[i])
            {
                tmp[i]=text[i];
                break;
            }
        }
        
        // if str tmp is equal value to str text, break the loop
        if( strcmp(tmp, text) == 0)
        {
            break;
        }
    }
    return 0;
}