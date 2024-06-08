#include <stdio.h>
#include <string.h>
int main(){
   FILE *p=fopen("source.txt","w+");
   char a[100],b[50];
   while(fgets(a,100,stdin)!=NULL){
   fputs(a,p);}
   rewind(p);
   printf("enter word to find");
   scanf("%s",b);
   int wordPos;
   while(!feof(p)){
    wordPos=ftell(p);
    fscanf(p,"%s",a);
    printf("%s\n",a);
    if(strcmp(b,a)==0){
        printf("found");
        break;
         }
    
        }
        printf("%d",wordPos);
   fseek(p,wordPos+1,0);
   while(1){
    char ch=getc(p);
    fseek(p,-2,1);
    if(ch=='\n'){
        fgets(a,100,p);
        puts(a);
        break;
    }
    
   }
}
