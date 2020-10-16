import java.util.Scanner;

class Test
{
public static void main(String args[])
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;
    Scanner op=new Scanner(System.in); 
    System.out.print("Enter 1st no: ");
    num1=op.nextInt();
    System.out.print("Enter 2nd no:");
    num2=op.nextInt();

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;

    System.out.println("SUM = "+sum);
    System.out.println("DIFF = "+sub);
    System.out.println("PRODUCT = "+mult);
    System.out.println("QUOTIENT = "+div);
    System.out.println("MODULUS = "+mod);
    }
}
