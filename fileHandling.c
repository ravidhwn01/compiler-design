#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r");
    char c;
    if (NULL == ptr)
    {
        printf("file can't be opened \n");
    }

    printf("content of this file are \n");
    do
    {
        c = fgetc(ptr);

        printf("%c", c);  // not removing  extra white spaces

    } while (c != EOF);
    // printf("the character I read was %c\n",c);
    //  c = fgetc(ptr);
    // printf("the character I read was %c\n",c);
    // fgets
    // char str[23];
    // fgets(str,16,ptr);
    // printf("the string I read was %s\n",str);
    // fputc('s',ptr);
    // fputs(" it is our duty to inform  you about this",ptr);
    fclose(ptr);
    return 0;
}