/*
Input-6
Output- # 1 * #  2  * # 3 * # 4 * # 5 * # 6 * 
*/
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

     for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Pattern(iFrequency);

    return 0;
}
