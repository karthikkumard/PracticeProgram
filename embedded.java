/*
i/p:
123red


o/p:
1
2
3

Explaination:
seperating number from string


*/
import java.util.*;
public class embedded
{
	public static void main(String arg[])
	{
		Scanner s=new Scanner(System.in);
		String n;
		n=s.nextLine();
		char a[]=n.toCharArray();
		int l=n.length(); 
		for(int i=0;i<l;i++)
		{
			if(a[i]>47&&a[i]<58)
			{
			System.out.println(a[i]);
			}
		}
	}

}
