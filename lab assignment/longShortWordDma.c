#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char *p =(char*)calloc(100,sizeof(char));
    if(p==NULL)
    printf("no");
    else
    {
        int i,j,l=0,m1,n1,m2,n2,max=0,min=45;
        printf("input string");
        scanf("%[^\n]s",p);
        

        for(j=0;*(p+j)!='\0';j++)
        l++;
        j=0;
        
        for(i=0;i<=l;i++){
            if(*(p+i)==' '||*(p+i)=='\0')
            {
                if(i-j>max)
                {
                    max=i-j;
                    m1=j;
                    m2=i;
                }
                if(i-j<min)
                {
                    min=i-j;
                    n1=j;
                    n2=i;
                    
                }
                j=i+1;

            }
        }
            printf(" %d %d  ",n1,n2);
            for(i=m1;i<m2;i++)
            {
                printf("%c",*(p+i));
            }
            printf("\n");
            
             for(i=n1;i<=n2;i++)
              printf("%c",*(p+i));
                                           
    }

    
}