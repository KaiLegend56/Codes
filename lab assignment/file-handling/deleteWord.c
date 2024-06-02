#include<stdio.h>
#include <string.h>
int main(){
    FILE *p=fopen("org.txt","w+");
    FILE *q=fopen("updated.txt","w+");
    char a[100];
    fgets(a,100,stdin);
    fputs(a,p);
    fseek(p,-3,2);
    int c=ftell(p);
    rewind(p);
    char b[50];
    while(ftell(p)<=c){
        fscanf(p,"%s",b);
        if(strcmp("hello",b)==0)
        strcpy(b,"kill");
        fprintf(q,"%s ",b);
        
    }
    int lastPos;
    /*while(!feof(p)){
        fscanf(p,"%s",b);
        //puts(b);
       //h printf("1");
        if(strcmp("hello",b)==0)
        {
            fseek(p,lastPos,0);
            fputs("kingo",p);
            printf("%d",lastPos);
            
        }
        lastPos=ftell(p);
        lastPos+=2;
    }*/


}