#include<stdio.h>

int main()
{
    char Str[100];
    fgets(Str,100,stdin);
    printf("%s%s",Str,Str);
    //printf("%s",Str);
    int Count=0;
    for (int i = 0; Str[i]!='\0'; i++)
    {
        printf("%C\n",Str[i]);
        printf("value of i : %d\n",i);
        Count++;
        printf("value of c : %d\n",Count);
    }
    printf("%d",Count);
    return 0;
}