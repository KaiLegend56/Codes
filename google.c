#include <stdio.h>
void add(int a,int b){
  printf("additionn %d \n",a+b);

}
void sub(int a,int b){
  printf("subitionn %d \n",a-b);
  
}
void mul(int a,int b){
  printf("multi %d \n",a*b);
  
}
int main(){
  int t;
  printf("ennter 0 add,1 sub,2 mul");
    scanf("%d",&t);
  
  int a=5,b=2;
  int (*ptr[3])(int,int)={add,sub,mul};
  (*ptr[t])(a,b);

  
}