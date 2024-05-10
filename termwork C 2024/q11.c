#include<stdio.h>
#include <string.h>
int main(){
    FILE *p=fopen("Data.txt","w+");
    FILE *q=fopen("DEL.txt","w+");
    char a[200];
    fgets(a,200,stdin);
    int i=1;
    fputs(a,p);
    char b[100];
    rewind(p);
    while (!feof(p))
    {
        fscanf(p,"%s",b);
        printf("%s ",b);
        printf("%d",i);
        if(strcmp("a",b)==0||strcmp("an",b)==0||strcmp("the",b)==0)
        fputc(' ',q);
        else
        fputs(b,q);
       
        
        
    }
}