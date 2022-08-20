#include<stdio.h>
void main()
{
    char a[30] = {"Hello_Thangamani"};
    char *p = a;
    printf("%c\n",*p);
    printf("address of p is %d\n",p);
    printf("%c\n",*(p++  +1));
    printf("address of the p is %d\n",p);
    printf("%c\n",*((p-- +5)-1)+3);
    printf("Address of the p %d\n",p);
    printf("%c\n",*(++p +10)-32);
    printf("Addres of the p %d",p);

}