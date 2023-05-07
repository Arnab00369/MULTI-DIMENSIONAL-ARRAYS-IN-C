#include <stdio.h>
void main()
{
    int r,c,a[100][100],s=0;
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
    printf("\nSum of the Left Diagonal elements of the Array = ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
    {
        if(i==j)
        s+=a[i][j];
    }
    }
    printf("%d",s);
    getch();
    }
    else
    {
        printf("ERROR!!!! No. of Rows and Columns are not Equal");
        exit(0);
    }
}
