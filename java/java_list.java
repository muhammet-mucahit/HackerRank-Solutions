import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int sizeOfArray = input.nextInt();

        List<Integer> array = new ArrayList<>();

        for (int i = 0; i < sizeOfArray; i++)
            array.add(input.nextInt());

        int sizeOfTransactions = input.nextInt();


            input.nextLine();
            String transaction = input.nextLine();
            if (transaction.equals("Insert")) {
                int index = input.nextInt();
                int item = input.nextInt();
                array.add(index, item);
            } else if (transaction.equals("Delete")){

