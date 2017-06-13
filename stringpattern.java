/*
i/p:
cry



o/p
**r
*ry
ryc

*/
import java.util.*;
public class stringpattern
{
public static void main(String arg[])
{
	Scanner s=new Scanner(System.in);
	String a=s.nextLine();
	int l=a.length();
	int c=l;
	//System.out.println(l);
	int mid=(l/2);
	int temp=mid;
	char ar[]=a.toCharArray();
	for(int i=0;i<l;i++)
		{
			for(int j=0;j<l;j++)
			{

				if(j>=c-1-i)
				{
					System.out.print(ar[temp]);
				temp++;
				if(temp==l)
					{
						temp=0;
						}
				}
				else
				System.out.print("*");
			}
			temp=mid;
		System.out.println();	
		}
}
}
