import java.util.*;

class MazePath{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number : ");
        int n = sc.nextInt();
        System.out.println("Enter second number : ");
        int m = sc.nextInt();
        ArrayList<String> list = mazePaths(n,m,0,0);
        System.out.println(list);
    }
    public static ArrayList<String> mazePaths(int n, int m, int r, int c){

        if(r == n-1 && c == m-1){
            ArrayList<String> bres = new ArrayList<>();
            bres.add("");
            return bres;
        }

        ArrayList<String> p1 = new ArrayList<>();
        ArrayList<String> p2 = new ArrayList<>();

        if(r < n-1)
            p1 = mazePaths(n, m, r+1, c);
        if(c < m-1)
            p2 = mazePaths(n, m, r, c+1);

        ArrayList<String> finalpaths = new ArrayList<>();

        for(String val: p1){
            finalpaths.add("v"+val);
        }
        for(String val: p2){
            finalpaths.add("h"+val);
        }

        return finalpaths;

    }

}