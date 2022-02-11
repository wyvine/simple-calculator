/*
Simple Calculator
by Ivyne Wambui
Feb 2022
MIT licence
C89 Compiler

*/


#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
int main()
{
    int num1,num2,sum,diff,product;
    float quotient;
    printf("Simple Calculator!\n");
    // capture Inputs
    printf ("Enter two Values: ");
    scanf ("%d%d",&num1,num2);
    //Computation
    sum = num1+num2;
    diff = num1-num2;
    product = num1*num2;
    quotient = (float)num1/num2;
    //output
    printf("%d+%d=%d\n",num1,num2,sum);
    printf("%d-%d=%d\n",num1,num2,diff);
    printf("%d*%d=%d\n",num1,num2,product);
    printf("%d/%d=%d\n",num1,num2,quotient);
    return 0;
}
