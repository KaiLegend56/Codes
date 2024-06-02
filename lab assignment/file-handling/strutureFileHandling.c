#include <stdio.h>
#include <string.h>
struct car{
    char name[50];
    int model;
    int year;
};
typedef struct car Car;
int main(){
    FILE *p=fopen("source.txt","w+");
   /* Car c,d;
    strcpy(c.name,"toyota");
    c.model=2019;
    c.year=2024;
    fwrite(&c,sizeof(Car),1,p);
    rewind(p);
    fread(&d,sizeof(Car),1,p);
    printf("%s %d %d",d.name,d.model,d.year);
    fclose(p);*/
    Car s[5],c[5];
    for(int i=0;i<2;i++){
        printf("enter car name");
        scanf("%s",s[i].name);
        printf("enter model");
        scanf("%d",&s[i].model);
        printf("enter year");
        scanf("%d",&s[i].year);
    }
    fwrite(s,sizeof(Car),2,p);
    rewind(p);
    fread(c,sizeof(Car),5,p);
    for(int i=0;i<2;i++){
        printf("%s\n",c[i].name);
        printf("model %d\n",c[i].model);
        printf("%d\n",c[i].year);

    }
    
}
