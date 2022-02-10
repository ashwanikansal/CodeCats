import java.io.*;
import java.util.*;

class Incdec{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = sc.nextInt();
		System.out.println("Reverse counting upto "+n+" is : ");
		IncDec(n);
	}
	
	public static void IncDec(int n){
		if(n==0){
			return;
		}
		System.out.println(n);
		IncDec(n-1);
		System.out.println(n);
	}
}