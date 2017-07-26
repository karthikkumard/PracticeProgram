/* LEFT GREATEST NUMBER
 given an array find previous maximum element from current position
if there is no max element exist then print -1

input:
6
5 3 2 4 8 6


output:
-1 5 3 5 -1 8
*/

program:


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,n,max,j;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    max=a[i];
    for(j=i-1;j>=0;j--)
    {
        if(max<a[j])
        {
            max=a[j];
            printf("%d ",max);
            break;
        }
    }
    if(i==0||max==a[i])
    {
        printf("-1 ");
    }
}

}
