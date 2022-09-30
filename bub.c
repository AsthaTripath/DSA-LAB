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
    printf("%d \n ",a[i]);
}bublesort(a,n);
}
void bublesort(int a[],int n) 
    
   { int temp=0;
    printf("BUBBLE SORTED ELEMENTS are \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {if(a[j]>a[j+1])
          { temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
for(int i=0;i<n;i++)
{
    printf("%d \n",a[i]);
}
}