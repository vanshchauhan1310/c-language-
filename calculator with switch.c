#include<stdio.h>
int main()
{
    int a,b,d,e,f,g;
    char c;
printf("Enter first value\n");
scanf("%d",&a);

printf("Enter second value\n");
scanf("%d", &b);

printf("Enter the condition\n");
scanf(" %c", &c);


switch(c)
{
    case '+':
    printf("%d",a+b);
break;

case '-':
printf("%d",a-b);
break;

case '*':
printf("%d",a*b);
break;


case '/':
printf("%d",a/b);
break;

default:
printf("input a valid operation");
}
return 0;

}