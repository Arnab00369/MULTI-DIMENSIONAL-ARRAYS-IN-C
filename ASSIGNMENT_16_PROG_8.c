#include <stdio.h>
void main()
{
    int r,c,a[100][100],b[100][100],k=0;char ch[100]=" ";
    printf("Enter the no. of Rows = ");
    scanf("%d",&r);
    printf("Enter the no. of Columns = ");
    scanf("%d",&c);
     if(r==c)
    {
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

    printf("\nThe Upper Triangular Matrix of the given Array ::\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
    {
        if(j>=i)
        {

            b[i][j]=a[i][j];
        }
    }
    }
    for(int i=0;i<r;i++)
    {
        for(int k=0;k<i;k++)
            printf("\t");
        for(int j=i;j<c;j++)
            printf("%d\t",b[i][j]);
            printf("\n");
    }
    getch();
    }
    else
    {
        printf("ERROR!!!! No. of Rows and Columns are not Equal");
        exit(0);
    }
}


