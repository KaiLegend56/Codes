#include <stdio.h>
#include <stdbool.h>
int main(){
    int n; 
    n=2345;
    int d,a=0;
    do
    {
        d=n%10;
        a=a*10+d;
        n/=10;
    } while (n!=0);
    while(a!=0)
    {
        d=a%10;
        switch(d)
        {
            case 1: printf("ONE");
                    break;
            case 2: printf("TWO");
                    
            case 3: printf("THREE");
                    break;
            case 4: printf("FORUR");
                    break;
            case 5: printf("five");
                    break;
                    default: printf("ZERO");
                    
        }
        a=a/10;
    }
    




}