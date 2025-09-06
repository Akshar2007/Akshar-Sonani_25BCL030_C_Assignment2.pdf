#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
if (a>b)
{
printf("%d is large",a);
}
else if(b>a)
{
printf("%d is large",b);
}
if (a<b)
{
    printf ("%d is small",a);
}
else if (b<a)   
{
    printf ("%d is small",b);
}
return 0;

}
