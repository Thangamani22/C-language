#include<stdio.h>

//call by reference:
// void fun(int*,int*);
// void main()
// {
//     int x=5,y=6;
//     fun(&x,&y);
//     printf("\nInside main(calling function)\n");
//     printf("x=%d y=%d",x,y);
// }
// void fun(int *x ,int *y){
    
//     // printf("Enter the number : ");
//     // scanf("%d %d",&x,&y);  
//     *x=8;
//     *y=9;
//     printf("\nInside fun(called function)\n");
//     printf("x=%d y=%d",*x,*y);
// }

void fun(int,int);
void main()
{
    int x=5,y=6;
    fun(x,y);
    printf("\nInside main(calling function)\n");
    printf("x=%d y=%d",x,y);
}
void fun(int x ,int y){
    
    // printf("Enter the number : ");
    // scanf("%d %d",&x,&y);  
    x=8;
    y=9;
    printf("\nInside fun(called function)\n");
    printf("x=%d y=%d",x,y);
}
