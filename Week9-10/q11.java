import java.io.*;
import java.util.*;

class BinarySearch{
	public static int binsearch(int []arr, int x, int l, int h){
		if(l>h) return -1;

		int mid = (l+h)/2;
		if(arr[mid] == x) return mid;
		else if(arr[mid] < x){
			return binsearch(arr, x, mid+1, h);
		}
		else{
			return binsearch(arr, x, l, mid-1);
		}
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

		int res = binsearch(arr, x, 0, arr.length-1);
		if(res == -1) System.out.println("Element not found!");
		else System.out.println("Element found at : "+res);
		
	}	
}
		
		