#include <stdio.h>
#include <string.h>

struct buy{
    int d;
    int m;
    int y;
};
struct car{
    char name[50];
    int model;
    struct buy b;
};
struct car Car (struct car temp){
    printf("%s",temp.name);
    FILE *q=fopen("structFIle.txt","r");
    struct car c;
    fread(&c,sizeof(temp),1,q);
    return c;
}

int main(){
    FILE *p=fopen("structFIle.txt","w");
    
    struct car s;
    
    
    for(int i=0;i<1;i++){
        scanf("%s",s.name);
        scanf("%d%d%d",&s.b.d,&s.b.m,&s.b.y);




    }
    fwrite(&s,sizeof(s),1,p);
    fclose(p);
    for(int i=0;i<1;i++){
        printf("%s \n",s.name);
        printf("%d%d%d\n",s.b.d,s.b.m,s.b.y);




    }
    struct car temp=Car(s);
    printf("%s",temp.name);



}