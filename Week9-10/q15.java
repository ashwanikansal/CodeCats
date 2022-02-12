import java.util.*;

class KeyCodes{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter keys pressed : ");
        String str = sc.nextLine();
        ArrayList<String> list = keypress(str);
        System.out.println(list);

    }
    static String[] arr = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz", "23", "13"};

    public static ArrayList<String> keypress(String str){

        if(str.length()==0){
            ArrayList<String> baselist = new ArrayList<>();
            baselist.add("");
            return baselist;
        }

        char first = str.charAt(0);
        String rest = str.substring(1);
        ArrayList<String> list = keypress(rest);

        ArrayList<String> finallist = new ArrayList<>();

        String firststr = arr[Character.getNumericValue(first)];
        for(int i=0; i<firststr.length(); i++){
            char ch = firststr.charAt(i);
            for(String val : list){
                finallist.add(ch+val);
            }
        }
        return finallist;
    }

}