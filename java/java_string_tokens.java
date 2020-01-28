import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();

        // if(s.length() == 0){
        //     System.out.println("0");
        // }

        s = s.trim();

        if(s.length() == 0){
            System.out.println("0");




        String regex = "[ _\\@ !,?.']+";
        String[] tokens = s.trim().split(regex);

        System.out.println(tokens.length);
        for (int i = 0; i < tokens.length; i++) {

