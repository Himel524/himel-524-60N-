#include<stdio.h>
int main()
{
    float a[20];
    int sum=0,i,n;
    printf("Insert number of course:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the GPA of course %d:",i);
        scanf("%f",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
    } printf("sum is %d",sum);
        printf("\nAverage GPA is:%2f",sum/(float)n);
}
