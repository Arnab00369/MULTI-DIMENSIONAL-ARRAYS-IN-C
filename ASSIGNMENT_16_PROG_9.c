#include <stdio.h>
void main()
{
    int r,c,a[100][100],c1=0,d=0;
    printf("Enter the no. of Rows = ");
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
        for(int j=0;j<c;j++)
    {
        if(a[i][j]==0)
            c1++;
        else
            d++;
    }
    }
    if(c1>d)
        printf("The Given Matrix is Sparse Matrix");
    else
        printf("The Given Matrix is not a Sparse Matrix");
    getch();
}
