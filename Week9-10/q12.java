import java.io.*;
import java.util.*;

class LinearSearch{
	public static int linsearch(int []arr, int x, int i){
		if(i==arr.length) return -1;
		if(arr[i]==x) return i;
		else return linsearch(arr, x, i+1);
	}
		
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter size of array");
		int n = sc.nextInt();

		int[] arr = new int[n];

		System.out.println("Enter elements of array");
		for(int i=0; i<n; i++) arr[i]=sc.nextInt();

		System.out.println("Enter element to be searched");
		int x = sc.nextInt();

		int res = linsearch(arr, x,0);
		if(res == -1) System.out.println("Element not found!");
		else System.out.println("Element found at : "+res);
		
	}	
}
		
		