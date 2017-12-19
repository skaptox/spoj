//http://www.spoj.com/problems/JULKA/

import java.util.Scanner;
import java.math.BigInteger;

class Main {
  public static void main(String[] args) {
    Scanner reader = new Scanner(System.in);
    for (int i = 0; i < 10 ; ++i) {
      BigInteger apples = new BigInteger(reader.next());
      BigInteger diff = new BigInteger(reader.next());
      func(apples, diff);
    }
  }
  static void func(BigInteger apples, BigInteger diff) {
    BigInteger one = apples.divide(new BigInteger("2"));
    BigInteger two = one;

    if (apples.mod(new BigInteger("2")).equals(BigInteger.ONE)) {
      one = one.add(BigInteger.ONE);
    }

    one = one.add(diff.divide(new BigInteger("2")));
    two = two.subtract(diff.divide(new BigInteger("2")));

    System.out.println(one + " " + two);

  }
}