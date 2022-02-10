import java.io.*;
import java.util.*;

class PrintArray{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter size of array : ");
		int n = sc.nextInt();
		int[] arr = new int[n];
		System.out.println("Enter elements of array : ");
		for(int i=0; i<arr.length; i++)
			arr[i]=sc.nextInt();
		System.out.println("Elements of array are : ");
		display(arr, arr.length-1);	
		
	}
	public static void display(int[] arr, int i){
		if(i<0) return;
		display(arr, i-1);
		System.out.println(arr[i]);
	}
}