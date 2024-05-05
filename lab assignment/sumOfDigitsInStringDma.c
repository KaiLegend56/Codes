#include <stdio.h>
#include <stdlib.h>
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
            if(*(p+i)>='0'&&*(p+i)<='9')
            sum+=*(p+i)-48;
        }
        printf("%d",sum);
       
    }
}