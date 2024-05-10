#include <stdio.h>

int main(){
    FILE*p=fopen("File.txt","w+");
    FILE *q=fopen("Count.txt","w+");
    char a[100];
    int i;
    while(fgets(a,100,stdin)!=NULL){
       
       fputs(a,p);


    }
    char ch;
    int alphabetCount=0,numCount=0;
    rewind(p);
    while(!feof(p)){
      ch=fgetc(p);
      if(ch>='a'&&ch<='z')
      alphabetCount++;
          
      if(ch>='0'&&ch<='9')    
      numCount++;
      if(ch=='\n'){
      fprintf(q,"%d %d \n",alphabetCount,numCount);
      numCount=0,alphabetCount=0;
      }
}
    }