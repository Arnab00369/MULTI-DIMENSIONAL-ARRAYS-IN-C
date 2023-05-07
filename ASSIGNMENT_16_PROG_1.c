#include <stdio.h>
void main()
{
    int a[3][3],b[3][3];
    printf("Enter the elements of the First Array ::\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
    {
        printf("A[%d][%d] = ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    }
    printf("Enter the elements of the Second Array ::\n");
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
    {
        printf("A[%d][%d] = ",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    }
    printf("\nFirst Array in Matrix Format ::\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
    }
        printf("\n");
    }
    printf("\nSecond Array in Matrix Format ::\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
    {
        printf("%d\t",b[i][j]);
    }
        printf("\n");
    }
    printf("\nOUTPUT ::\nAddition of Two given Matrices are ::\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    getch();
}
