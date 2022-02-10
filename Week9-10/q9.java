import java.io.*;
import java.util.*;

class MaxOfArray{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter size of array : ");
		int n = sc.nextInt();
		int[] arr = new int[n];
		System.out.println("Enter elements of array : ");
		for(int i=0; i<arr.length; i++)
			arr[i]=sc.nextInt();
		System.out.println("Maximum element of array is : "+max(arr, 0));
	}
	public static int max(int[] arr, int i){
		if(i == arr.length-1) 
			return arr[i];
		int max = max(arr, i+1);
		if(arr[i]> max) 
			return arr[i];
		else
			return max;
	}
}