/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int T = sc.nextInt();
	    for(int i = 0;i<T;i++)
	    {
	        int N = sc.nextInt();
	        int B = sc.nextInt();
	        int N1[] = new int[N];
	        double sum = 0;
	        for(int j = 0;j<N;j++)
	        {
	            N1[j] = sc.nextInt();
	        }

	        for(int ii=0;ii<N;++ii)
	        {
	        	System.out.print(N1[ii]);
	        	System.out.print(" ");
	        }
	   }
	}
}
