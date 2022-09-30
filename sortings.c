#include<stdio.h>
int main()
{
int n,a[100];
printf("Enter the range of the array \n");
scanf("%d",&n);
printf("Enter the elements in the array\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
printf("The elements in the array are\n");
for(int i=0;i<n;i++)
{
    printf("%d  ",a[i]);
}
insertion( a,n);

}
void insertion(int a[],int n)
{int temp=0;
    for(int i=1;i<n;i++)
    {temp =a[i];
    int j=i-1;
    while((a[j]>temp)&&(j>=0))
    {
        a[j+1]=a[j];
        j--;
    }a[j+1]=temp;

    }printf("The insertion sorted arRay are \n");
    for(int p=0;p<n;p++)
    {
        printf("%d ",a[p]);
    }
}

