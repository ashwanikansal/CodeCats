import java.util.*;

class Allindex{
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
        int[] index = searchAllIndex(arr, x, 0,0);
        for(int i=0; i<index.length; i++)
        	System.out.println("Index is : "+index[i]);
    }
    public static int[] searchAllIndex(int[] arr, int x, int i, int size){
        if(i == arr.length)
            return new int[size];
        if(arr[i]==x){
            int[] iarr = searchAllIndex(arr, x, i+1 , size+1);
            iarr[size]=i;
            return iarr;
        }else{
            int[] iarr = searchAllIndex(arr, x, i+1 , size);
            return iarr;
        }
    }
}