#include <stdio.h>
int rev(int n){
    int d,a=0;
    while(n!=0){
        d=n%10;
        a=a*10+d;
        n/=10;
    }
    return a;
}
int main(){
    int n;
    FILE *p=fopen("source.txt","w+");
    FILE *q=fopen("rev.txt","w+");
    for(int i=0;i<3;i++){
        scanf("%d",&n);
        putw(n,p);

    }
    rewind(p);
    int a;
    while(!feof(p)){
        a=rev(getw(p));
        putw(a,q);
    }
    printf("content of file");
    int tell=ftell(q);
    tell-=2;
    /*fseek(q,-2,2);
    while(tell>0){
        
        printf("%d\n",getw(q));
        fseek(q,-2,1);
        
        tell--;
    }*/
    printf("%d",tell);
    rewind(q);
    while(tell>0){
        printf("%d\n",getw(q));
        tell--;
    }
}