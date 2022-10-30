import java.util.Scanner;
public class Main {

	public static void main(String[] args)
	{
		
        String s1 = new String("Snowden");
         System.out.println(s1);
	
	    int a = 27;
	    float b = 67f;
	    System.out.format("Value Of a is %d and Value of b is %f", a,b);
	    System.out.println();
	    
	    // %d(for int) and %f(for float) are known as access modifier.
	    
	    Scanner sc = new Scanner(System.in);
	    String s2 = sc.next();  // only first word from string is displayed
	    //s2 = sc.nextLine(); 
	    System.out.println(s2);
	    
	    
	}
	
}

//strings are immutable and cannot be changed
