//import java.util.Random;
import java.util.*;
public class saturday {
	static int countCorrectAns = 0;
	
	public static void main (String [] args) {
		Scanner input = new Scanner(System.in);
		

		int t = 0;
		
		System.out.println("How many questions you want ?");
		t = input.nextInt();
		int i;
		for (i = 0; i<t; i++) {
			
			double x = (double) Math.random()*100;
			double y = (double) Math.random()*100;
			System.out.println(" the sum of two numbers is ");
			System.out.println(String.format("%.0f",x) + "+" + String.format("%.0f",y) + " = ");
			
			String m = String.format("%.0f",x);
			String n = String.format("%.0f",y);
			 
			x = Double.parseDouble(m);
			y = Double.parseDouble(n);
			
			double sum = x + y;
			
		double ans = input.nextDouble();
		
			if(sum == ans) {
				countCorrectAns++;	
			}
			//System.out.println(String.format("%.0f", sum));
		}
		System.out.println(countCorrectAns);
		
	}
}
