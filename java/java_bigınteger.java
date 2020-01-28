import java.math.BigInteger;
import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        BigInteger first = new BigInteger(input.nextLine());
        BigInteger second = new BigInteger(input.nextLine());

        System.out.println(first.add(second));
        System.out.println(first.multiply(second));
    }
}

