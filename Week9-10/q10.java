import java.io.*;
import java.util.*;

class Index{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the size of array : ");
		int n = sc.nextInt();
		int[] arr=new int[n];
		System.out.println("Enter the elements of array : ");
		for(int i=0; i<arr.length; i++)
			arr[i]=sc.nextInt();
		System.out.print("Enter the element to be searched : ");
		int x = sc.nextInt();
		int index = search(arr, x, 0);
		System.out.println("Index is : "+index);
	}
	public static int search(int[] arr, int x, int i){
		if(i==arr.length) 
			return -1;
		if(arr[i]==x)
			return i;
		else{
			int res = search(arr, x, i+1);
			return res;
		}		
	}
}