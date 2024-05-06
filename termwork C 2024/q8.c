#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
    scanf("%d",p+i);

    for(int i=0,j=4;i<j;i++,j--)
    {
        int t=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=t;
    }

    for(int i=0;i<5;i++)
    printf("%d",*(p+i));

}