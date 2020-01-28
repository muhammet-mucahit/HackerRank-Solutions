import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        String B = "";

        for (int i = A.length() - 1; i >= 0; i--) {
            B += A.charAt(i);
        }

        System.out.println(A.equals(B) ? "Yes" : "No");




