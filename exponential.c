#include<stdio.h>
int main()

{
int n,a[100],k,p;
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
printf("Enter the element to be found \n");
scanf("%d ",&k);
p=expo(a,n,k);
if(p==-1)
{
    printf("The element is not found \n");

}
else
{
    printf("The element is found \n");
}

}
expo(int a[],int n,int k)
{int i=1,start=0,end=0;
while((i<n)&&(k>a[i]))
{
i=i*2;}
if(i<n)
{
    if(a[i]==k){
        return i;
    }
    else{start=i/2;
    end=i;
    for(int j=start;j<=end;j++)
    {
        if(k==a[j])
        {
            return j;
        }
        else{
            return -1;
        }
    }

    }
}
else{
    return -1;
}



}


