#include <stdio.h>
#include <string.h>
int main(){
    FILE *p=fopen("source.txt","w+");
    FILE *q=fopen("updated.txt","w+");
    char a[100];
    fgets(a,100,stdin);
    fputs(a,p);
    //fseek(p,-3,2);
    //int c=ftell(p);
    rewind(p);
    int c=0,n=0;
    char b[50];
    char ch;
    while(!feof(p)){
       ch=fgetc(p);
       printf("%c",ch);
        if(ch==' ')
        {
            
             if(n==0)
             {
               c++;
               n=1;
               } 

               }
        else 
        n=0;
    }
    

printf("%d",c+1);

}
    