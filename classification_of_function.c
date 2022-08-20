
//1.No Arguement without return type:
#include<stdio.h>
  void divide(void); //function decleration
  void main()
  {
    divide();//function calling
  }
  void divide(void) // called function
  {                 //funtion definition
    int x=8099,y=59,z=0;
    z = x/y;
    printf("divide= %d",z);
  }

  //2.No Arguement with return function: