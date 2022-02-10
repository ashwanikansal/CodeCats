import java.io.*;
import java.util.*;

class Dec{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = sc.nextInt();
		System.out.println("Reverse counting upto "+n+" is : ");
		Decreasing(n);
	}
	
	public static void Decreasing(int n){
		if(n==0){
			return;
		}
		System.out.println(n);
		Decreasing(n-1);
	}
}