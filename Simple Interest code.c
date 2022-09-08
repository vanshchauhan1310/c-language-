#include<stdio.h>
int main()
{

int p,n,r,si;

printf("Enter Principle Value\n");
scanf("%d",&p);
 
 printf("Enter Time Period\n");
scanf("%d",&n);

printf("Enter Rate Of Interest\n");
scanf("%d",&r);

si=p*n*r/100;
printf("Simple Interest Would Be %d",si);

return 0;
}