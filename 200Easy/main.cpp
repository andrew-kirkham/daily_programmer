#include <stdio.h>
#include <set>
#include <iostream>
#include <cstdint>
#include <ctime>

const uint64_t primes[] = { 2, 3, 5, 7, 11, 13, 15, 17};

int main(int argc, char **argv)
{
	std::clock_t start;
	double duration;
	start = std::clock();

	std::set<uint64_t> numbers = {1};

	for (int i = 0; i < 10000; i++) {
		/*for (std::set<uint64_t>::iterator i= numbers.begin(); i!= numbers.end(); i++){
			std::cout << *i << "\n";
		}*/
		std::cout << "popping: " << *numbers.begin() << "\n";
		int smallest = *numbers.begin();
		numbers.erase(numbers.begin());
		for (const uint64_t& p : primes) {
			numbers.insert(smallest * p);
		}
	}
	std::cout << "smallest number" << *numbers.begin() << "\n";
	duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

	std::cout << duration << '\n';
	return 0;
}
