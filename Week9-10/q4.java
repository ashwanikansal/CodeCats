import java.io.*;
import java.util.*;

class Factorial{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = sc.nextInt();
		System.out.println("The factorial of "+n+" is : "+Fact(n));
	}
	public static int Fact(int n){
		if(n==1)
			return 1;
		int fact;
		fact = n*(Fact(n-1));
		return fact;
	}
}