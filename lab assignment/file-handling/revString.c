#include  <stdio.h>
int main(){
    int n;
    FILE *p=fopen("source.txt","w+");
    FILE *q=fopen("rev.txt","w+");
    char ch;
    char a[50];
    fgets(a,50,stdin);
    fputs(a,p);
    
    
    
    fseek(p,-3,2);
    int c=ftell(p);
    while(c>=0){
        ch=fgetc(p);
        fputc(ch,q);
        fseek(p,-2,1);
        c--;
    }
}