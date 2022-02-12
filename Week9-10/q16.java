import java.util.*;

class StairSteps{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the stair number : ");

        int n = sc.nextInt();
        ArrayList<String> list = stairs(n);
        System.out.println(list);
    }
    public static ArrayList<String> stairs(int n){

        if(n==0){
            ArrayList<String> baselist = new ArrayList<>();
            baselist.add("");
            return baselist;
        } else if(n < 0){
            return new ArrayList<>();
        }

        ArrayList<String> res1 = stairs(n-1);
        ArrayList<String> res2 = stairs(n-2);
        ArrayList<String> res3 = stairs(n-3);

        ArrayList<String> mylist = new ArrayList<>();
        for(String val : res1){
            mylist.add(1+val);
        }
        for(String val : res2){
            mylist.add(2+val);
        }
        for(String val : res3){
            mylist.add(3+val);
        }
        return mylist;
    }

}