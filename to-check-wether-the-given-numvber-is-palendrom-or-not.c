#include<stdio.h>
#include<conio.h>
int main()
{
int rev=0,temp,i,n,d;
printf("enter the number");
scanf("%d",&n);
temp=n;
while (n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
if (rev==temp)
{
printf("The given number is palandrom");
}
else
{
    printf("The given number is not palandrom");
}

}