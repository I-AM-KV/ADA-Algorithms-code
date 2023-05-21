import java.util.Scanner;
class AddNumbers
{
 public static void main(String args[])
 {
 int x, y, z;
 System.out.println("Enter two integers to calculate their sum ");
 Scanner in = new Scanner(System.in);
 x = in.nextInt();
 y = in.nextInt();
 z = x + y;
 System.out.println("Sum of entered integers = "+z);
 }
}
//For Large Number
import java.util.Scanner;
import java.math.BigInteger;
class AddingLargeNumbers {
 public static void main(String[] args) {
 String number1, number2;
 Scanner in = new Scanner(System.in);
 System.out.println("Enter first large number");
 number1 = in.nextLine();
 System.out.println("Enter second large number");
 number2 = in.nextLine();
 BigInteger first = new BigInteger(number1);
 BigInteger second = new BigInteger(number2);
 BigInteger sum;
 sum = first.add(second);
 System.out.println("Result of addition = " + sum);
 }
}