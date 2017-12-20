import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner reader = new Scanner(System.in);
    int n = reader.nextInt();
    for (int i = 0; i < n; ++i) {
      long x = reader.nextLong();
      long y = reader.nextLong();
      steps(x, y);
    }
  }
  static void steps(long x, long y) {

    if (y == x || y == x - 2) {
      if (x % 2 == 0)
        System.out.println(x + y);
      else
        System.out.println(x + y - 1);
    } else {
      System.out.println("No Number");
    }
  }
}