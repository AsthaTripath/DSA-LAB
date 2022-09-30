#include<stdio.h>

    void main()
    {
int m,n,p,q;
int a[10][10],b[10][10],c[10][10];
    
    printf("Enter the size of the matrix1 ");
    scanf("%d%d" ,&m,&n);
    
    printf("Enter the size of the matrix2");
    scanf("%d%d",&p,&q);
printf("Enter the elements  in the matrix");
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
        printf("%d\t",a[i][j]);

    }

}

printf("Enter the elements in the array 2");
for(int y=0;y<p;y++)
{
for(int z=0;z<q;z++)
{
    scanf("%d",&b[y][z]);
    printf("%d\t",b[y][z]);
}

}

if((m==p)&&(n==q))
{
for(int e=0;e<m;e++)
{
    for(int f=0;f<n;f++)
    {
        c[e][f]=a[e][f]+b[e][f];
        printf("the addition of matrix is ");
        printf("%d\t" ,c[e][f]);

        


    }
    printf("\n");
    }
}
}