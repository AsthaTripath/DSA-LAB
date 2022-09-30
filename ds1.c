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
}
