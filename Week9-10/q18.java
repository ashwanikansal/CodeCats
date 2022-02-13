import java.util.*;

class AllMazePaths{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number : ");
        int n = sc.nextInt();
        System.out.println("Enter second number : ");
        int m = sc.nextInt();
        ArrayList<String> list = allMazePaths(n,m,1,1);
        System.out.println(list);
    }
    public static ArrayList<String> allMazePaths(int fr, int fc, int r, int c){

        if(r == fr && c == fc){
            ArrayList<String> bpath = new ArrayList<>();
            bpath.add("");
            return bpath;
        }

        ArrayList<String> paths = new ArrayList<>();

        for(int i=1; i<=fr-r; i++){
            ArrayList<String> rpaths = allMazePaths(fr, fc, r+i, c);
            for(String path : rpaths){
                paths.add("v"+i+path);
            }
        }
        for(int i=1; i<=fc-c; i++){
            ArrayList<String> cpaths = allMazePaths(fr, fc, r, c+i);
            for(String path : cpaths){
                paths.add("h"+i+path);
            }
        }
        for(int i=1; i<=fr-r && i<=fc-c; i++){
            ArrayList<String> dpaths = allMazePaths(fr, fc, r+i, c+i);
            for(String path : dpaths){
                paths.add("d"+i+path);
            }
        }

        return paths;
    }

}