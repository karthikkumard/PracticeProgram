/*
i/p:
3

o/p:
1 4 6
2 5
3

*/
import java.util.*;
public class pattern
{
public static void main(String arg[])
{
	Scanner s=new Scanner(System.in);
	int n,k=1,i,j,t;
	n=s.nextInt();
	t=n;
//System.out.println("hi");
	for(i=0;i<n;i++)
	{	//System.out.println("hi");
		for(j=0;j<n-i;j++)
		{	
			System.out.print(k+" ");
			k=k+t;
			t--;
		}
			k=i+2;
			t=n;
		System.out.println();
	}

}
}
