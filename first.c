//Program to see if a number is prime
#include <stdio.h>
#include <conio.h>
int main()
{
   int n,i,c=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      if(n%2==0)
      c++;
   }
   if(c==2)
   printf("%d is a prime number");
   else
   printf("%d is not a prime number");
   return 0;
}   
