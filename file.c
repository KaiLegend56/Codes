#include <stdio.h>
int main(){

    FILE *p;
    p=fopen("ABC.txt","w+");

    if(p==NULL)
    printf("not created");
    else
    {
        char ch;
        ch=getchar();
        putc(ch,p);

        char ch1=getc()


    }
}