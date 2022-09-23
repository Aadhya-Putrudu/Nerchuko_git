#include<stdio.h>

int main()
{
    printf("Program to print n terms of fibonacci : \n");
    printf("Enter the number : ");
    int Num;
    scanf("%d",&Num);
    int First=0, Second=1,Third=0;
    printf("%d \n%d \n",First,Second);
    for (int i = 2; i <= Num; i++)
    {
        Third=First+Second;
        printf("%d\n",Third);
        First=Second;
        Second=Third;
    }
    return 0;   
}