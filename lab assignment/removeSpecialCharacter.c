#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(){
  int i,j,c=0;
    char * p=(char *)calloc(50,sizeof(char));
       if(p==NULL)
    printf("dma not allocated");
    else{
         printf("enter whole word");
        scanf("%s",p);
        
        for(i=0;*(p+i)!='\0';i++)
        c++;
        printf("%d",c);
        for(i=0;*(p+i)!='\0';i++)
        if(*(p+i)>=32&&*(p+i)<=64)
        for(j=i;*(p+j)!='\0';i++)
        { 
          *(p+j)=*(p+j+1);
          i--;    
        }

        for(i=0;*(p+i)!='\0';i++)
        printf("%c",*(p+i));
        printf("end");
    }
}
