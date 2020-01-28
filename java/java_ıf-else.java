    import java.io.*;
    import java.util.*;
    import java.text.*;
    import java.math.*;
    import java.util.regex.*;

    public class Solution {

        public static void main(String[] args) {

            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();            
            String ans = "";
            if(n % 2 == 1){
              ans = "Weird";
            }


                    ans = "Not Weird";
                else if(n <= 20 && n>= 6)
                    ans = "Weird";
                else if(n > 20)
                    ans = "Not Weird";
            }
            System.out.println(ans);

