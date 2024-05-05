#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,n,c=0;
    printf("enter no. of elements");
    scanf("%d",&n);
    int *p=(int *)calloc(n,sizeof(int));
    
    if(p==NULL)
    printf("dma not allocated");
    else{
        for(i=0;i<n;i++){
        printf("input element");
        scanf("%d",p+i);
        }
        for(i=0;i<n;i++){
           
        for(j=0;j<n;j++){
           

            if(*(p+i)==*(p+j))
            {  c++;
              
            }

            
        }
        printf("%d is repeated %d times\n",*(p+i),c);
        c=0; 
        }
    }

}