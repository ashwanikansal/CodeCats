import java.io.*;
import java.util.*;

class Power{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number");
		int n = sc.nextInt();
		System.out.println("Enter power");
		int p = sc.nextInt();
		System.out.println(n+" raise to the power "+p+" is : "+Pow(n,p));
	}
	public static int Pow(int n, int p){
		int res;
		if(p==0)
			return 1;
		//---------basic approach------------
		//res = n*Pow(n, p-1);
		//return res;

		//---------better appropach---------
		int halfp = Pow(n,p/2);
		if(n%2==0)
			res = halfp*halfp;
		else
			res = halfp*halfp*n;
		return res;
	}
}