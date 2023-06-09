
#include <iostream>


int* ReverseMultiply(int *array, int size) {

	int* result = new int[(2*size) + 1];
	int running_product = 1;

	for (int i=0; i<size; i++) {
		//first half of the array
		*(result + i) = *(array+i);

		running_product = running_product * (*(array+(i)) * *(array+(i)));	

		//second half of the array which is the reverse of the initial array
		*(result + size + i) = *(array+(size-1-i));
	}

	*(result + 2*size) = running_product;
	return result;
}

int* ReverseAdd(int *array, int size) {

	int* result = new int[(2*size - 1)];
	int running_sum = 0;

	for (int i=0; i<size; i++) {

		//first half of the array
		*(result + i) = *(array+i);

		running_sum = running_sum + *(array+i);

		//second half of the list which has the sum of two elements in reverse order
		*(result + size + i) = *(array+(size-i-1)) + *(array+(size-i-2));
	}

	//*(result + 2*size) = *(array+0) + *(array+1);
	return result;
}

void printArray(int * array, int size){

	for(int i=0; i<size; i++){
		std::cout<<*(array+ i)<< " ";
	}
}

int main() {

	int size;
	std::cout<<"Please enter the number of elements within your array: ";
	std::cin>>size;

	int* user_array = new int[size];

	std::cout<<std::endl;
	for(int i=0; i<size; i++){
		std::cout<<"Entry "<<i<<" is: ";
		std::cin>>*(user_array+i);
		std::cout<<std::endl;
	}
	
	int* new_array1 = ReverseMultiply(user_array, size);	
	int* new_array2 = ReverseAdd(user_array, size);

	std::cout<<"*****"<<std::endl;
	std::cout<<"Original array is: ";
	printArray(user_array, size);
	std::cout<<" and the address of the zero element is: "<<&(*user_array)<<std::endl;

	std::cout<<"One array is: ";
	printArray(new_array1, 2*size + 1);
	std::cout<<" and the address of the zero element is: "<<&(*new_array1)<<std::endl;

	std::cout<<"Two array is: ";
	printArray(new_array2, 2*size - 1);
	std::cout<<" and the address of the zero element is: "<<&(*new_array2)<<std::endl;

	delete []user_array;
	delete []new_array1;
	delete []new_array2;

	return 0;
}
