#include<stdio.h>
int  main ( )   
{ int i,j;
for (i=3;i>0;i--)
{
    for (j=i;j<=i&&j>0; j--)
    {
printf("%d,",j);
    }  
printf("\n");
}
}