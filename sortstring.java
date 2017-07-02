/*Sort N Strings - Descending Order

N strings are passed as input. The program must sort them in the descending order.

Input Format:
The first line contains the value of N.
Next N lines contain the value of N string values.

Output Format:
N lines containing the N string values sorted in descending order.

Boundary Conditions:
2 <= N <= 15
Length of a string is between 2 and 100.

Example Input/Output 1:
Input:
6
Apple
banana
Boy
Zoo
Hat
heckle

Output:
heckle
banana
Zoo
Hat
Boy
Apple
*/



program:

import java.util.*;
import java.io.*;
public class sortstring {

    public static void main(String[] args)throws Exception {
		int n;
		BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
		n=Integer.parseInt(b.readLine());
    String[] a=new String[n];
    for(int i=0;i<n;i++)
    {
        a[i]=b.readLine();
    }
    Arrays.sort(a);
    for(int i=n-1;i>=0;i--)
    {
        System.out.println(a[i]);
    }
	}
}


