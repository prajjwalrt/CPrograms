#include<stdio.h>
int main()
{ 
for(int i=1;i<=12;i=i+2)
{
printf("\n");
for(int j=0;j<=i;j++)
{
if(j==0 || j%2==0)
printf("0");
else
printf("1");
}
}
	return 0;
	
}
