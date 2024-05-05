#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(){
  int i,j,c=0;
    char * p=(char *)calloc(50,sizeof(char));
    char *q=(char *)calloc(50,sizeof(char));
    if(p==NULL||q==NULL)
    printf("dma not allocated");
    else{

     printf("enter word 1");
     scanf("%s",p);
    
     printf("enter word 2");
     scanf("%s",q);

        int l1=0,l2=0;
        for(i=0;*(p+i)!='\0';i++)
        l1++;
        for(i=0;*(q+i)!='\0';i++)
        l2++;

    for(i=0;*(p+i)!='\0';i++)
    {
      for(j=0;*(q+j)!='\0';j++)
      {
        if(*(p+i)==*(q+j))
        { 
          *(q+j)='$';
          c++;
        }
      }

    }
   
    printf("%d \n",l1);
    if(c==l1)
    printf("arragram");
    else 
    printf("not arragram");

}

}