import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        BigInteger n = in.nextBigInteger();
        in.close();

        if(n.isProbablePrime(1)) System.out.println("prime");
        else                     System.out.println("not prime");
    }
}


