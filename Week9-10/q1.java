import java.io.*;
import java.util.*;

class Inc{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = sc.nextInt();
		System.out.println("Counting upto "+n+" is : ");
		Increasing(n);
	}
	
	public static void Increasing(int n){
		if(n==0){
			return;
		}
		Increasing(n-1);
		System.out.println(n);
	}
}