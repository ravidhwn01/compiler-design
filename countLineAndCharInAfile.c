#include <stdio.h>
#define MAX_FILE_NAME 100
int main(){
        FILE *fp;
        int count = 0,line = 1;
        char filename[MAX_FILE_NAME];

char c;
fp = fopen("demo.txt","r");
if(fp==NULL){
    printf("could not open file %s",filename);
    return 0;
}
for ( c = getc(fp); c!=EOF; c=getc(fp))
{
    count++;
    if(c=='\n'){
        line++;
    }
}
fclose(fp);
printf("the file  has %d lines and %d characters\n",line,count);
return 0;
}