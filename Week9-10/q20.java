import java.util.*;

class Encoding{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sc.nextLine();

        encodings(str, "");
    }
    public static void encodings(String str, String cstr){

        if(str.length()==0) {
            System.out.println(cstr);
            return;
        }

        if(str.charAt(0)=='0') return;

        String fstr="", rstr="";

        for(int i=str.length()-1; i>=0; i--){

            if(str.length()-i > 0) {
                fstr = str.substring(0, str.length() - i);  //first string
                rstr = str.substring(str.length() - i);  //remaining string

                int ifstr = Integer.parseInt(fstr);  //fstr--->Integer

                if(ifstr <= 26 && ifstr > 0){
                    encodings(rstr, cstr + (char)(ifstr + 96));
                }
            }
            else{
                encodings("", cstr);
            }

        }

    }

}