import java.util.*;

class tmp
{
	public static void main(String[] args)
	{
		//Scanner sc=new Scanner(System.in);
		//syatem.in is a standard input stream
		//system.out is a standard output stream
		//int a=sc.nextInt();
		//float b=sc.nextFloat();
		//double d=sc.nextDouble();
		//byte bt=sc.nextByte();
		//String s=sc.nextLine();
		//boolean bb=sc.nextBoolean();
		//long l=sc.nextLong();
		//short s=sc.nextLong();
		//datatype arrayname[]=new datatype[size];
	    //int a[]=new int[n];
		//for(int i=0;i<n;++i)
		//		{
		//			a[i]=sc.nextInt();
		//		}

		/* code here */

		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		int rev=0;

		while(n!=0)
		{
			int r=n%10;
			rev=rev*10+r;
			n=n/10;
		}
		System.out.println(rev);
	}
}
