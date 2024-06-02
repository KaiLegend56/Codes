#include <stdio.h>
int main(){
    FILE *p=fopen("source.txt","w+");
    char a[100];
    while(fgets(a,100,stdin)!=NULL){
        fputs(a,p);

    }
    char ch;
    int pos;
    fseek(p,-3,2);
    while(1){
        ch=getc(p);
        if(ch=='\n'){
            pos=ftell(p);
            break;
        }
        fseek(p,-2,1);
    }
    fseek(p,pos,0);
    printf("%s",fgets(a,100,p));
}