#include<stdio.h>

int main()
{
    char str[] = "Hello World!";
    int size = sizeof(str) - 1; //exclude null terminator
    char rev[size + 1]; //size included for null terminator
    for(int i = 0; i < size; i++){
        rev[i] = str[size - 1 - i];
    }
    rev[size] = '\0';
    printf("%s\n", rev);
    return 0;
}