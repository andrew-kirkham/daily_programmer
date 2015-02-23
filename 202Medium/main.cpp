#include <stdio.h>
#include <iostream>

//algorithm via https://en.wikipedia.org/wiki/Computus#Meeus_Julian_algorithm
int main(int argc, char **argv) {
	int year;
	std::cout << "Easter Calculator\nEnter the year to calculate\n";
	std::cin >> year;

	int a = year % 4;
	int b = year % 7;
	int c = year % 19;
	int d = (19*c + 15) % 30;
	int e = (2*a + 4*b - d + 34) % 7;
	int month = (d + e + 114) / 31;
	int day = (d + e + 114) % 31 + 1;
	printf("month: %d, day %d\n", n, p);
	return 0;
}
