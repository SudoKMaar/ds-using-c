#include<stdio.h>
void insert(int a[],int);
int main()
{
int a[5],i;
printf("Enter elements: ");
for(i=0;i<5;i++)
{
    scanf("%d", &a[i]);
}
insert(a,5);
printf("After sortng: ");
for(i=0;i<5;i++)
{
    printf("\n%d",a[i]);
}
return 0;
}
void insert(int a[],int n)
{
    int temp,i,j;
    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && temp<=a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}