#include <iostream>
// eger std library define etmezsek

int main()
{

	int x = 2, y = 3, z = -4;

	x = y + 2;
	z = x - 3;
	// x = 5 , y = 3 , z = 2 ;
	std::cout << "x ---> " << x << "\ty ---> " << y << "\tz ---> " << z << std::endl;

	z -= x - 5;
	y += z - 7;
	// x = 5 , y = -2 , z = 2 ;
	std::cout << "x ---> " << x << "\ty ---> " << y << "\tz ---> " << z << std::endl;

	// x = 6 , y = -2 , z = 2
	std::cout << "x ---> " << ++x << "\ty ---> " << y-- << "\tz ---> " << z++ << std::endl;

	// x = 6 , y = -3 , z = 3
	std::cout << "x ---> " << x++ << "\ty ---> " << --y << "\tz ---> " << ++z << std::endl;

	int a, b, c;
	std::cout << "\n\n\nEnter extra integer number => ";
	std::cin >> a >> b >> c;

	std::cout << "\nCalculate the a x b + c x 2 + 1 : " << a++ * b + c * 2 + 1 << std::endl
		<< "After add one to 'a' number." << std::endl << std::endl;
	std::cout << "Before add one to 'a' number." << std::endl
		<< "Calculate the a x (b+c) x 2 + 1 : " << ++a * (b + c) * 2 + 1 << std::endl << std::endl;
	std::cout << "Calculate the a x b - c x 2 - z : " << a-- * b - c * 2 - 1 << std::endl
		<< "After minus one to 'a' number." << std::endl << std::endl;
	std::cout << "Before minus one to 'a' number." << std::endl
		<< "Calculate the (a x b) - c x (2 - 1) : " << (--a * b) - c * (2 - 1) << std::endl;
}
