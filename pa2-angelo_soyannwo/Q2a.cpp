#include <iostream>


int gcd(int m, int n){

	int result;
	if(m%n == 0){
		result = n;
	}
	else{
		result = gcd(n, m%n);
	}

	return result;
}

int main() {

	int m, n;

	std::cout<<"Enter m: ";
	std::cin>>m;
	std::cout<<"Enter n: ";
	std::cin>>n;
	std::cout<<"GCD is: "<< gcd(m, n)<<std::endl;


}
