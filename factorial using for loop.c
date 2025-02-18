# include <stdio.h>
int main()
{
int i,num,fact=1;
printf("enter a number:");
scanf("%d",&num);
   if(num<1)
   {
       printf("\nEnter a positive number");
   }

  for(i=1;i<=num;i++){
   fact = fact*i;
    }
  printf("%d",fact);
return 0;
}
