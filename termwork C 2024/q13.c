#include <stdio.h>

int main(){
    FILE*p=fopen("File.txt","w+");
    FILE *q=fopen("Count.txt","w+");
    char a[100];
    int i;
    printf("%d",fgets(a,100,stdin));
    while(fgets(a,100,stdin)!=NULL){
       
       fputs(a,p);


    }
    rewind(p);

    }