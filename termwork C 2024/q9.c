#include<stdio.h>


struct pickupDate{
    int day;
    int month;
    int year;
};

struct dropDate{
    int day;
    int month;
    int year;
};   

struct car{
    int carId;
    char model[50];
    int rentPerDay;
    struct pickupDate p;
    struct dropDate d;
};

int monthDayCalculate(int m){
    
      int monthDays[12] 
    = { 31, 28, 31, 30, 31, 30,  
       31, 31, 30, 31, 30, 31 }; 
    
    return monthDays[m-1];
    }
int yearCalculate(int y)    {
    if (y % 400 == 0) 
      return 366;
   else if (y % 100 == 0) 
      return 365;
   else if (y % 4 == 0) 
      return 366;
   else
      return 365;
}


 

int main(){
    int n;
    struct pickupDate p;
    struct dropDate d;
    printf("enter no. of cars");
    scanf("%d",&n);
    struct car c[n];

    for(int i=0;i<n;i++)
    {
        printf("enter carId:");
        scanf("%d",&c[i].carId);

        printf("enter car model:");
        scanf("%s",c[i].model);

        printf("enter rent per day");
        scanf("%d",&c[i].rentPerDay);
    }
    int matchingCarId;
    printf("enter car id you rented:");
    scanf("%d",&matchingCarId);
    for(int i=0;i<n;i++)
    if(matchingCarId==c[i].carId)
     {
        int matchingRent=c[i].rentPerDay;
        printf("enter pickup date");
        scanf("%d%d%d",&p.day,&p.month,&p.year);
       
         printf("enter drop date");
        scanf("%d%d%d",&d.day,&d.month,&d.year);

        printf("%d\n",monthDayCalculate(p.month));
        int totalRentalDays=(d.day+monthDayCalculate(d.month)+yearCalculate(d.year))-(p.day+monthDayCalculate(p.month)+yearCalculate(p.year));
        int totalRent=totalRentalDays*matchingRent;
        printf("total rent will be:%d",totalRent);
     }
     

     }