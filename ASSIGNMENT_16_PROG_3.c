#include <stdio.h>
void main()
{
    int r,c,a[100][100];
    printf("Enter the no. of Rows = ");
    scanf("%d",&r);
    printf("Enter the no. of Columns = ");
    scanf("%d",&c);
    if(r==c)
    {
        printf("Enter the elements of the Array ::\n");
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
    printf("\nTranpose of the Array in Matrix Format ::\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
    {
        printf("%d\t",a[j][i]);
    }
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
