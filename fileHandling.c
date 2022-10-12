#include<stdio.h>



int main()
{
    FILE *ptr =NULL;
    ptr = fopen("myfile.txt","r");
    // char c = fgetc(ptr);
    // printf("the character I read was %c\n",c);
    //  c = fgetc(ptr);
    // printf("the character I read was %c\n",c);
    //fgets
    char str[23];
    fgets(str,3,ptr);
    return 0;
}