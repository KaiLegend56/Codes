#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){
int i,j,u;
    char s[50]="eretyyhuunuety";
    u=strlen(s);
    printf("%d",u);
    int a[14]={0};
    for(i=0;i<14;i++)
    {
        for(j=0;j<14;j++)
        {if(s[i]==s[j])
        a[i]++;}
    }
    for(i=0;i<14;i++)
    {
        printf("%c=%d\n",s[i],a[i]);
    }

    

    
}