int main(){
    int i,j,k;
    int a[5]={4,5,1,2,6};
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<=5;j++)
        {
            if(a[i]>a[j])
            { int t=a[i];
              a[i]=a[j];
              a[j]=t;
            }

        }
    }
    for(i=0;i<=4;i++)
    {
      printf("%d",a[i]);
    }
}