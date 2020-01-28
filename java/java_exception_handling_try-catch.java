import java.util.InputMismatchException;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        try {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            System.out.println(x / y);
        } catch (InputMismatchException e){

            System.out.println("java.util.InputMismatchException");


        catch (Exception e){
            System.out.println(e);
        }
    }
}

