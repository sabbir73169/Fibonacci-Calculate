#include<stdio.h>
#include<conio.h>
void main()
{
    int j,i,a=-1,b=1,c;

    printf("Enter your Range:");
    scanf("%d",&j);
    for (i=1;i<=j;i++)
    {
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
getch();
}
