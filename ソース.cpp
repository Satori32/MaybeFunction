#include <iostream>
#include <random>

template<class T=double>
T Maybe() {

	std::uniform_real_distribution<T> u(0, 1.0);
	std::random_device rd;

	return u(rd);
}

int main() {

	double D = Maybe();
	return 0;
}