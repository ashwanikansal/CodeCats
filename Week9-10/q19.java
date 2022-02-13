import java.util.*;

class Permutations{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sc.nextLine();

        allPermutations(str, "");
    }
    public static void allPermutations(String str, String cstr){

        if(str.length()==0)
            System.out.println(cstr);

        for(int i=0; i<str.length(); i++){
            char ch = str.charAt(i);
            allPermutations(str.substring(0, i)+str.substring(i+1), cstr+ch);
        }

    }

}