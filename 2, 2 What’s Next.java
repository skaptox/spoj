import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    long a, b, c;
    Scanner reader = new Scanner(System.in);
    while(true) {
      a = reader.nextLong();
      b = reader.nextLong();
      c = reader.nextLong();
      if (a == 0 && b == 0 && c == 0) {
        break;
      }
      next(a,b,c);
    }
  }
  static void next(long a, long b, long c) {
    long r, d;
    d = b - a;
    if (a + d == b && b == c - d)
      System.out.format("AP %d\n", c + d);
    else
      System.out.format("GP %d\n", c * (b/a));
  }
}