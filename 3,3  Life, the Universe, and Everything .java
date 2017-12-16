// http://www.spoj.com/problems/TEST/

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner reader = new Scanner(System.in);
    int i;
    while ((i = reader.nextInt()) != 42) {
      System.out.println(i);
    }
  }
}