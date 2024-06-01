#include <stdio.h>
struct game{
    char name[50];
    int price;
    int copiesSold;
};
int main(){
    struct game s[5],temp;
    for(int i=0;i<5;i++){
        scanf("%s",s[i].name);
        scanf("%d%d",&s[i].price,&s[i].copiesSold);
    }
    printf("entered\n");
     for(int i=0;i<5;i++){
        printf("%s %d %d\n",s[i].name,s[i].price,s[i].copiesSold);
    }
    for(int i=1;i<5;i++){
        for(int j=0;j<5-i;j++){
            if(s[j].price<s[j+1].price){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("sorted \n");
    for(int i=0;i<5;i++){
        printf("%s %d %d\n",s[i].name,s[i].price,s[i].copiesSold);
}
}