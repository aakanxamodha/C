/*Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

1. Declare 4 variables: two of type int and two of type float.
2. Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
3. Use the + and - operator to perform the following operations:
  --> Print the sum and difference of two int variable on a new line.
  --> Print the sum and difference of two float variable rounded to one decimal place on a new line.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
    float fnum1, fnum2;
    
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &fnum1, &fnum2);
    
    int intResultAdd = num1 + num2;
    int intResultSubs = num1 - num2;
    
    float fResultAdd = fnum1 + fnum2;
    float fResultSubs = fnum1 - fnum2;
    
    printf("%d %d\n", intResultAdd, intResultSubs);
    printf("%.1f %.1f\n", fResultAdd, fResultSubs);
    return 0;
}
