#include <stdio.h>
struct joiningYear{
    int d;
    int m;
    int y;
};
struct student{
    int rollNumber;
    char name[100];
    char department[100];
    char course[100];
    struct joiningYear j; 
    
};


int rollNumberDetails(struct student s[],int roll,int n){
    for(int i=0;i<n;i++){
        if(s[i].rollNumber==roll)
        {
        printf("%d\n",s[i].rollNumber);
        puts(s[i].name);
        puts(s[i].course);
        puts(s[i].department);
        printf("\n");
        }
    }
}
int yearDetails(struct student s[],int n,int year){
    for(int i=0;i<n;i++){
        if(s[i].j.y==year)
       {
        printf("%d\n",s[i].rollNumber);
        puts(s[i].name);
        puts(s[i].course);
        puts(s[i].department);
        printf("\n");

       }

    }
}

int main(){
    int n;
    printf("enter students number");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        printf("enter roll number:");
        scanf("%d ",&s[i].rollNumber);
       // printf("\n");
        printf("enter name:");
        fgets(s[i].name,50,stdin);

        printf("enter course:");
        scanf("%s",s[i].course);

        printf("enter department");
        scanf("%s",s[i].department);

        printf("joining date in d m yyyy:");
        scanf("%d%d%d",&s[i].j.d,&s[i].j.m,&s[i].j.y);
    }
    int year;
    printf("input year to print details");
    scanf("%d",&year);
    yearDetails(s,n,year);

    int roll;
    printf("enter roll number of student to be found");
    scanf("%d",&roll);
    rollNumberDetails(s,roll,n);
}