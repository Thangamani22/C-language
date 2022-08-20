#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num % 2!=0)
    {
        printf("the number is odd");
    }
    else
      printf("the number is even");
  return(0);
  //printf("%d",type(num));
}