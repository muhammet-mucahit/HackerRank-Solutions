import java.util.*;

class Solution {

    private static Map<String, Integer> telephoneBook = new HashMap<>();

    public static void main(String []argh) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();

        for (int i = 0; i < n; i++) {
            String name = input.nextLine();
            int phone = input.nextInt();
            telephoneBook.put(name, phone);



        while(input.hasNext()) {
            String s = input.nextLine();
            if (telephoneBook.get(s) != null) {
                System.out.println(s + "=" + telephoneBook.get(s));
            } else {
                System.out.println("Not found");

