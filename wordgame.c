/*

Input Format:
The first line will contain N.
Next N lines will contain N words.
(N+2)nd line will contain C.
(N+3)rd line will contain W.

Output Format:
The first line will contain the Cth word as per the game rules described above.

Boundary Conditions:
2 <= N <= 26

Example Input/Output 1:
Input:
6
egg
tiger
rampage
goat
wrist
mirror
3
egg

Output:
tiger

Explanation:
The words in the game sequence are egg, goat, tiger, rampage, egg  and so on. So the 3rd word tiger is printed as the output.

*/
#include<stdio.h>
int main()
{
    char str[100][100],a[1000],d;
    int n,i,e,len,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    scanf("%d",&e);
    scanf("%s",a);
    len=strlen(a);
    d=a[len-1];
    for(i=0;i<e-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(d==str[j][0])
            {
                break;
            }
        }
        len=strlen(str[j]);
        d=str[j][len-1];
    }
   
      printf("%s",str[j]);
      return 0;
    }
