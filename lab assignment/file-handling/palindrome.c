#include <stdio.h>
int main(){
    FILE *p=fopen("source.txt","w+");
    char a[100];
    fgets(a,100,stdin);
    fputs(a,p);
    int lastPos= ftell(p);
    printf("%d",lastPos);
    lastPos-=3;
    printf("%d",lastPos);
    int i=0,c=1;
    char ch1,ch2;
    //rewind(p);
   
    while(i<lastPos/2){
        
        fseek(p,i,0);
        ch1= getc(p);
        fseek(p,lastPos-i,0);
        ch2=getc(p);
        //printf("%c = %c\n",ch1,ch2);
        if(ch1!=ch2){
            
            c=0;
            break;
        }
        i++;
        
    }
    if(c)
    printf("palindrome");
    else
    printf("not palidrome");

    

}