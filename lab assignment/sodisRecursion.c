#include <stdio.h>
#include <stdlib.h>

char checkIf(char*p,int l,int sum) {
    
    if(l<0)
    return sum;
    else{
    if(*(p+l)>='0'&&*(p+l)<='9')
    sum+=*(p+l)-'0';
    return checkIf(p,l-1,sum);
    }
}


int main(){
    char *p=(char*)calloc(100,sizeof(char));
    if(p==NULL)
    printf("not allocated");
    else
    {
        printf("enter whole word");
        scanf("%[^\n]%*c",p);
        int sum=0;
        for(int i=0;*(p+i)!='\0';i++)
        {
           
            sum++;
        }
        int l=checkIf(p,sum,0);
        printf("%d",l);
       
    }
}
