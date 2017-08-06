/*

Given an odd integer N, print a triangle with * as mentioned in the below examples.

Input Format:
The first line contains N.

Output Format:
N/2 + 1 lines containing the triangle pattern as shown in the example input/output.

Boundary Conditions:
1 <= N <= 999

Example Input/Output 1:
Input:
5

Output:
!!*!!
!***!
*****

Example Input/Output 2:
Input:
9

Output:
!!!!*!!!!
!!!***!!!
!!*****!!
!*******!
*********

*/




program:
#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,n,j,t1,t2;
scanf("%d",&n);
t1=(n/2);
t2=(n/2);
for(i=0;i<(n/2)+1;i++)
{
    for(j=0;j<n;j++)
    {
    if(j>=t1&&j<=t2)
    {
        printf("*");
    }
    else
    printf("!");
    }
    printf("\n");
    t1--;
    t2++;
}
}
