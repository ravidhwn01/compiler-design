#include <stdio.h>

int main()
{
    char keyWord[32][10] = {"for", "int", "float", "char", "double", "long", "long long", "bool", "string", "while", "if", "goto", "extreme", "const", "signed", "sizeof", "continue", "void", "default"};

    char str[10];
    printf("Enter the keyword: ");
    scanf("%s", &str);
    int isKeyword = 0;
    for (int i = 0; i < 32; i++)
    {

        if (strcmp(str, keyWord[i]) == 0)
        {

            isKeyword = 1;
            break;
        }
    }
    if (isKeyword == 1)
    {
        printf("%s is a keyword :-)", str);
    }
    else
    {
        printf("Not a keyword :-(");
    }

    return 0;
}