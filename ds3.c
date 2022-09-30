#include<stdio.h>
int main()
{
int n,a[100],temp=0,p,k=0;
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
printf("Enter the elements to be deleted \n ");
scanf("%d ",&p);
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }

    } 
    }
    printf("The sorted of array is\n");
    for(int j=0;j<n;j++)
    {
        printf("%d ",a[j]);

    }
    for(int i=0;i<n;i++)
    {
        if(a[k]==p)
        {printf("%d \n ",a[++k]);
        }
        else{
            printf("%d \n",a[k]);
        }
    }



}
