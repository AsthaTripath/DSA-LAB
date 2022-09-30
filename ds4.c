#include<stdio.h>
int main()
{
int n,a[100],pos=0,t=0;
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
for(int i=0;i<n-1;i++)
{pos=i;
    for(int j=i+1;j<n;j++)
    {
        if(a[pos]>a[j])
        
        {
            t=a[pos];
        a[pos]=a[j];
        a[j]=t;

        }
    }
}  printf("the sorted elements using selection sort are \n");
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}

}



