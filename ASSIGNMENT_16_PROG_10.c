#include <stdio.h>
void main()
{
    int r,c,a[100][100],c1=0,c2=0,c3=0,j,index;
    printf("Program to Find the Row which contains the maximum number of 1's ::\nEnter the no. of Rows = ");
    scanf("%d",&r);
    printf("Enter the no. of Columns = ");
    scanf("%d",&c);
     for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                printf("A[%d][%d] = ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
    printf("\nArray in Matrix Format ::\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
    {
        printf("%d\t",a[i][j]);
    }
        printf("\n");
    }
     for(int i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        if(a[i][j]==1)
            c1++;

    }
    if(c2<c1)
    {
        c2=c1;
        index=c3;
        c1=0;
        c3++;
    }
    else
    {
        index=c3;
        c1=0;
    }
    }
    printf("The Maximum 1's are present in Row No. %d with Frequency %d",index,c2);
    getch();
}

