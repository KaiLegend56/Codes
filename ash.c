#include <stdio.h>
#include <string.h>
int main(){
    int i,j=0,min=100,max=0,k1,k2,p1,p2;
    char a[100];
    fgets(a,100,stdin);
    int n=strlen(a);
    printf("%d",n);
    for(i=0;i<=n;i++){
    
        if(a[i]==' '||a[i]=='\0')
        {
            if(i-j>max){
                max=i-j;
                 k1=i;
                 p1=j;     
                     }
            if(i-j<min){
                min=i-j,k2=i,p2=j;
            }
            j=i+1;
        }

        

    }

    for(i=p2;i<k2;i++)
    printf("%c",a[i]);
    printf("\n");
    for(i=p1;i<k1;i++)
     printf("%c",a[i]);
    
    
    
}