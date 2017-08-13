/*
Maximum sub array 
Given an array find maximum sum in array
i/p:
given an array

o/p:
limit of maximum sub array sum and maximum sum

i/p:
7
1 4 4 -100 4 4 4


o/p:
5 7 12



*/

program:


import java.util.*;
public class Maxsubarray
{
public static void main(String arg[])
{
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int a[]=new int[n];
int max=0,c=0,b=0,f=0,l=0,t=0,t1=0;
for(int i=0;i<n;i++)
{
	a[i]=sc.nextInt();
}
for(int i=0;i<n;i++)
{
c=c+a[i];
if(a[i]>0)
{
if(b==0)
{
t1=i;
}
b=b+a[i];

}
else
if(b>t)
{
f=t1;
l=i-1;
t=b;
b=0;
}
else
b=0;
}
if(b>t)
{
t=b;
f=t1;
l=n-1;
}
if(c>t)
{
t=c;
f=0;l=n-1;
}
System.out.println((f+1)+" "+(l+1)+" "+t);
}
}
