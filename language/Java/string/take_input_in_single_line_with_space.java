import java.util.Scanner; 
public class TwoString 
 { 
public static void main(String[] args)  
{ 
	Scanner sc = new Scanner(System.in); 
	 
	String[] input = new String[2];  
	String a, b;  
	System.out.print("Please enter two Strings: ");  
	input = sc.nextLine().split(" "); 
	a= input[0]; 
	b= input[1]; 
	System.out.println("You input: " + a + " and " + b); 
	 
	} 
} 
