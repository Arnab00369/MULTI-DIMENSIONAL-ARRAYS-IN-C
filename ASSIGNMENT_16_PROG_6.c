#include <stdio.h>
void main()
{
    int r,c,a[100][100],s=0,t=0,j;
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
    printf("\n\nSum of the Row elements of the Array in Matrix Format ::\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
    {
        s+=a[i][j];
    }
         printf("\nSum of Row %d elements = %d",i+1,s);
         s=0;
    }

    printf("\n\nSum of the Column elements of the Array in Matrix Format ::\n");
    for(int i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
    {
        t+=a[j][i];
    }
        printf("\nSum of Column %d elements = %d",i+1,t);
        t=0;
    }
    getch();
}

