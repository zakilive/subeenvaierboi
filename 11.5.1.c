#include<stdio.h>
int main()
{
    int sum,row;
    int number[5][5]={{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};
    for(row=0;row<5;row++)
    {
    sum+=number[row];
    printf("Sum of row %d: %d",row,sum);
    printf("\n");
    }


    return 0;
}
