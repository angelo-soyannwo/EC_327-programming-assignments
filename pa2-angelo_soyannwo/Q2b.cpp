#include <iostream>


float series(int n){

        float result, out;
        
        if(n == 1) {
                result = (float) ( (float) (2*n)/ (float) (3*n + 2));
        }
        else{
                result = (float) ( (float) (2*n)/ (float) (3*n + 2)) + series(n-1);
        }
        out += result;
        return out;
}


int main() {

	int m, n;

	std::cout<<"Enter n: ";
	std::cin>>n;
	std::cout<<"Series is: "<< series(n)<<std::endl;


}
