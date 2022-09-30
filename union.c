#include<stdio.h>
        int main()
{
    int a[100],b[100],c[100];
    int i,j,k;
    printf("Enter the size of array A");
    scanf("%d",&i);
    printf("Enter the size of array B");
    scanf("%d",&j);
    printf("Enter the elements in array A");
    for(int s=0;s<i;s++)
    {
        scanf("%d",&a[s]);
    } printf("Enter the elements in array B");

    for(int t=0;t<j;t++)
    {
        scanf("%d",&b[t]);
    }


    int z=0;
    for(int x=0;x<i;x++)
    {
        for(int y=0;y<i-x-1;y++)
        {
            if(a[y]>a[y+1])
            {
                z=a[y+1];
                a[y+1]=a[y];
                a[y]=z;
            }

        }
    }
    int w=0;
    for(int x=0;x<j;x++)
    {
        for(int y=0;y<j-x-1;y++)
        {
            if(b[y]>b[y+1])
            {
                w=b[y+1];
                b[y+1]=b[y];
                b[y]=w;
            }
        }
            }

        int m=0,n=0;
        while(m<i&&n<j)
        {if(a[m]<b[n])
        {


            c[k]=a[m];
            k++;
            m++;
        }
        else if(b[n]<a[m])
        {
            c[k]=b[n];
            k++;
            n++;

        }
        else
        {
            c[k]=a[m];
            k++;m++;n++;

        }
        }
        for(int d=0;d<k;d++)
        {

            if(c[d]!=c[d+1])
            {
                printf("%d",c[d]);
            }
        }
        return 0;
        }














