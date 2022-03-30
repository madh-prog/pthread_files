#include<stdio.h>
void main()
{
int no,i,temp=0;
printf("Enter the number : ");
scanf("%d",&no);
for(i=2;i<=no/2;++i)
{
if(no%i==0)
{
temp=1;
break;
}
}
if(no==0 || no==1)
{
printf("%d is neither prime nor composite",no);
}
else
{
if(temp==0)
   printf("%d is a prime number",no);
else
   printf("%d is not a prime number",no);
}
}
