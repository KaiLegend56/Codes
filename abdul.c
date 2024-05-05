#include <stdio.h>
#include <string.h>
int main () {
    //printf("AbdulHakeem");
   // printf("HelloWorld\n");
    //printf("%d",2+3)
       /*int x,y;
      
       printf("enter x");
       scanf("%d",&x);
       printf("enter y");
       scanf("%d",&y);
        int sum;
       sum=x+y;
       printf("the sum of x+y is %d",sum);*/
       /*int l,b;
       int sum;
       
       printf("enter l");*/
      /* scanf("%d",&l);
       printf("enter b");
       scanf("%d",&b);
       sum=l+b;
       printf("the perimeter of a rectangle is %d",sum);*/
      // printf("THE DREAM >");
       //printf(" One,s upon a time, a family visited a haunted house near a beach. The family enjoyed their first day of vacation fantastically but the first night was the real scene");
    FILE *p;
     p=fopen("lol.txt","w");
     char str[50];
     printf("ENTER STRING");
     gets(str);
     int a=10;
     char d='A';
     fprintf(p,"%d %s %c",a,str,d);
     fclose(p);




}