#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* reverseString(char* str, int size);

int main()
{
    char str[] = "Hello World!";
    int size = strlen(str); //strlen exclude null terminator
    char* result = reverseString(str, size);
    printf("Original: %s\n", str);
    printf("Result  : %s\n", result);
    free(result); //free the result arr in malloc
    return 0;
}

//String swap approach
char* reverseString(char* str, int size)
{
    char* result = (char*)malloc( (size + 1) * sizeof(char)); //initialize str, include space for null terminator

    if (result == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }

    strcpy(result, str); //cpy string to new str, haven't rev yet

    int half = size / 2; //split the size by half and omit decimal e.g, 5 / 2 = 2 for int var

    for (int i  = 0; i < half / 2; i++){
        char tmp = result[i];
        result[i] = result[ size - i -1];
        result[size - i - 1] = tmp;
    }

    result[size] = '\0'; //null terminator
    return result;
}

