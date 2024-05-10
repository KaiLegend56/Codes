#include<stdio.h>
#include <string.h>
int checkPrime(int n){
    if(n==1||n==0)
    return 0;
    int i=2;
    while(i<=n/2)
    {
        if(n%i==0){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
    FILE*p=fopen("efg.txt","w+");
    FILE *q=fopen("hij.txt","w+");
    int j;
    for (int i = 0; i <5; i++)
    {
        scanf("%d",&j);
        putw(j,p);
       
    }
    rewind(p);
    int num;
      while(!feof(p))  {
        num=getw(p);
        if(checkPrime(num)==1)
        putw(num,q);
      }

        
        
    
    rewind (q);
    while(!feof(q))
    printf("%d ",getw(q));
    
}