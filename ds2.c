#include<stdio.h>
int main()
{
int n,a[100] ,p,temp,k=0;
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
printf("Enter the element to be inserted in a 1d array \n");
scanf("%d",&p);
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
}printf("The sorted array is \n");
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);

}
for(int i=0;i<n+1;i++)
{
    if(p<a[k])
    {a[k]=p;

    k++;

    }
}
printf("The array after insertion of elements are \n");
for(int i=0;i<n+1;i++)
{
printf("%d ",a[i]);
}


}

