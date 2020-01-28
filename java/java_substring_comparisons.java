import java.util.*;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";

        List<String> list = new ArrayList<>();

        for (int i = 0; i <= s.length() - k; i++) {
            list.add(s.substring(i, i + k));
        }

        Collections.sort(list);




        return smallest + "\n" + largest;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();

