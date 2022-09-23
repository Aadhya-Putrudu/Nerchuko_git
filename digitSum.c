#include<stdio.h>

void digitSum(int Num);

int main()
{
    int Num;
    printf("enter a number : ");
    scanf("%d",&Num);
    digitSum(Num);
    return 0;
}

void digitSum(int Num)
{
    if (Num<0)
    {
        Num=Num*-1;
        printf("%d\n",Num);
    }
    
    int Sum=0;
    for (int i = 0; Num>0; i++)
    {
        Sum=Sum+(Num%10);
        Num=Num/10;
    }
    printf("the sum of the digits : %d ",Sum);
}