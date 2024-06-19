
// Problem ID: 1002
// Title: Area of a Circle
// Link: https://judge.beecrowd.com/en/problems/view/1002

/*
 * Description:
 * The formula to calculate the area of a circumference is defined as A = π . R^2. Considering to this problem that π = 3.14159:
 * Calculate the area using the formula given in the problem description.
 *
 * Input:
 * The input contains a value of floating point (double precision), that is the variable R.
 */



import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    double a;
    a = sc.nextDouble();
    double b = 3.14159;
    double x = b*(a*a);
    System.out.printf("A=%.4f%n", x);
  }
}
