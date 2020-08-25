using System;

namespace CSharp0005_IncrementDecrementOperators
{
    class CSharp0005_IncrementDecrementOperators
    {
        static void Main(string[] args)
        {

            int x = 2, y = 3, z = -4;
            /* Firstly, x and z value assigned unnecessary number. I fixed this fault as add Console.WriteLine. */
            Console.WriteLine("x ---> " + x + "\ty ---> " + y + "\tz ---> " + z);

            x = y + 2;
            z = x - 3;
            // x = 5 , y = 3 , z = 2
            Console.WriteLine("x ---> " + x + "\ty ---> " + y + "\tz ---> " + z);

            z -= x - 5;
            y += z - 7;
            // x = 5 , y = -2 , z = 2 ;
            Console.WriteLine("x ---> " + x + "\ty ---> " + y + "\tz ---> " + z);

            // x = 6 , y = -2 , z = 2
            Console.WriteLine("x ---> " + ++x + "\ty ---> " + y-- + "\tz ---> " + z++);

            // x = 6 , y = -3 , z = 3
            Console.WriteLine("x ---> " + x++ + "\ty ---> " + --y + "\tz ---> " + ++z);



            Console.Write("\n\n\nEnter extra integer number => ");
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int c = int.Parse(Console.ReadLine());

            Console.WriteLine("\nCalculate the a x b + c x 2 + 1 : " + (a++ * b + c * 2 + 1)
                    + "\nAfter add one to 'a' number.\n");
            Console.WriteLine("Before add one to 'a' number.\n"
                    + "Calculate the a x (b+c) x 2 + 1 : " + (++a * (b + c) * 2 + 1) + "\n");
            Console.WriteLine("Calculate the a x b - c x 2 - z : " + (a-- * b - c * 2 - 1)
                    + "\nAfter minus one to 'a' number.\n");
            Console.WriteLine("Before minus one to 'a' number.\n"
                    + "Calculate the (a x b) - c x (2 - 1) : " + ((--a * b) - c * (2 - 1)) + "\n");
        }
    }
}
