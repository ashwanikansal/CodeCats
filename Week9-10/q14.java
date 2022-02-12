import java.util.*;

class Subsequence{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        ArrayList<String> list = subsequence(str);
        System.out.println(list);
    }
    public static ArrayList<String> subsequence(String str){
        if(str.length()==0){
            ArrayList<String> flist = new ArrayList<>();
            flist.add("");
            return flist;
        }
        char ch = str.charAt(0);
        String res = str.substring(1);
        ArrayList<String> list = subsequence(res);
        ArrayList<String> finallist = new ArrayList<>();
        for(String c : list){
            finallist.add(ch+c);
            finallist.add(""+c);
        }
        return finallist;
    }

}