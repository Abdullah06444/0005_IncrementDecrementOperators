package Beginner;

import java.util.Scanner;

public class Java0005_IncrementDecrementOperators {

    public static void main(String[] args) {

        int x = 2, y = 3, z = -4;

        x = y + 2;
        z = x - 3;
        // x = 5 , y = 3 , z = 2
        System.out.println("x ---> " + x + "\ty ---> " + y + "\tz ---> " + z);

        z -= x - 5;
        y += z - 7;
        // x = 5 , y = -2 , z = 2 ;
        System.out.println("x ---> " + x + "\ty ---> " + y + "\tz ---> " + z);

        // x = 6 , y = -2 , z = 2
        System.out.println("x ---> " + ++x + "\ty ---> " + y-- + "\tz ---> " + z++);

        // x = 6 , y = -3 , z = 3
        System.out.println("x ---> " + x++ + "\ty ---> " + --y + "\tz ---> " + ++z);

        System.out.print("\n\n\nEnter extra integer number => ");
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();

        System.out.println("\nCalculate the a x b + c x 2 + 1 : " + (a++ * b + c * 2 + 1)
                + "\nAfter add one to 'a' number.\n");
        System.out.println("Before add one to 'a' number.\n"
                + "Calculate the a x (b+c) x 2 + 1 : " + (++a * (b + c) * 2 + 1) + "\n");
        System.out.println("Calculate the a x b - c x 2 - z : " + (a-- * b - c * 2 - 1)
                + "\nAfter minus one to 'a' number.\n");
        System.out.println("Before minus one to 'a' number.\n"
                + "Calculate the (a x b) - c x (2 - 1) : " + ((--a * b) - c * (2 - 1)) + "\n");
    }
}
