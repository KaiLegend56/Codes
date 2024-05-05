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
        scanf("%[^\n]%*c",p);
        
        for(i=0;*(p+i)!='\0';i++)
       { for(j=0;*(p+j)!='\0';j++)
        {
            if(*(p+j)>=32&&*(p+j)<=64)
           { 
            *(p+j)=*(p+j+1);
            
           }
        }

        puts(p);
    }
}