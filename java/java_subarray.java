import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int sizeOfArray = input.nextInt();
        int[] array = new int[sizeOfArray];

        for (int i = 0; i < sizeOfArray; i++) {
            array[i] = input.nextInt();
        }

        int result = 0;
        for (int i = 0; i < sizeOfArray; i++) {



        System.out.println(result);
    }

    private static int function(int[] array, int level) {

        int counter = 0;

