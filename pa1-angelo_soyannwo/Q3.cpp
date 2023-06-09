#include <iostream>
#include <math.h>

int highest_power_of_three(int num);
int number_associated_with_highest_power(int num, int highest_power);
void decompose(int * num_81s, int * num_27s, int * num_9s, int * num_3s, int * num_1s, int value);

int main() {

	//read in numbers
	int num_1, num_2;
	std::cout<<"Enter two numbers between 0-100: ";
	std::cin>>num_1 >>num_2;

	//ternary values
	int num_81s=0; int num_27s=0; int num_9s=0; int num_3s=0, num_1s=0;
	int two_num_81s=0; int two_num_27s=0; int two_num_9s=0; int two_num_3s=0, two_num_1s=0;

	//pointers for updates
	int *val_81s = &num_81s;
	int *val_27s = &num_27s;
	int *val_9s = &num_9s; 
	int *val_3s = &num_3s; 
	int *val_1s = &num_1s;

	decompose(val_81s, val_27s, val_9s, val_3s, val_1s, num_1);

	// pointer reassignment
	val_81s = &two_num_81s;
	val_27s = &two_num_27s;
	val_9s = &two_num_9s; 
	val_3s = &two_num_3s; 
	val_1s = &two_num_1s;

	decompose(val_81s, val_27s, val_9s, val_3s, val_1s, num_2);

	int vals[5] = {two_num_81s-num_81s, two_num_27s-num_27s, two_num_9s-num_9s, two_num_3s-num_3s, two_num_1s-num_1s};

	//hamming distance calculation
	int hamming_distance = 0;
	for (int i=0; i<5; i++){
		if (vals[i] !=0 ) {
			hamming_distance += 1;
		}
	}
	
	std::cout<<"Hamming distance between " << num_1 << " and " << num_2 << " when numbers are in ternary format is: " << hamming_distance <<std::endl;


return 0;
}



int highest_power_of_three(int num){
//returns the highest power of three which is less than num
	if (num == 1 || num == 2) {
		return 0;
	}

	int n = 0;
	while(num>=(pow(3, (n+1)))){
		n = n+1;
	}
	return n;

}

int number_associated_with_highest_power(int num, int highest_power){
// finds the multiplier a of 3^n
	if(num == 1 || num == 2){
		return num;
	}
	int n = 1;
	while( num>(pow(3, (highest_power)) * (n+1)) ){
		n = n+1;
	}
	return n;
}

void update(int n, int num_n, int * num_81s, int * num_27s, int * num_9s, int * num_3s, int * num_1s) {
//updates the ternary values of a number during decomposition
	switch(n){
		case 0:
			*num_81s += 0; *num_27s += 0; *num_9s += 0; *num_3s += 0; *num_1s += num_n;
			break;
		case 1:
			*num_81s += 0; *num_27s += 0; *num_9s += 0; *num_3s += num_n; *num_1s += 0;
			break;
		case 2:
			*num_81s += 0; *num_27s += 0; *num_9s += num_n; *num_3s += 0; *num_1s += 0;
			break;
		case 3:
			*num_81s += 0; *num_27s += num_n; *num_9s += 0; *num_3s += 0; *num_1s += 0;
			break;
		case 4:
			*num_81s += num_n; *num_27s += 0; *num_9s += 0; *num_3s += 0; *num_1s += 0;
			break;
	}
}

void decompose(int * num_81s, int * num_27s, int * num_9s, int * num_3s, int * num_1s, int value) {

// decomposes a number to ternary value
	int n, num_n;
	if (value != 0){
		while(value>0){
			n = highest_power_of_three(value);
			num_n = number_associated_with_highest_power(value, n);
			update(n, num_n, num_81s, num_27s, num_9s, num_3s, num_1s);
			value = value - pow(3, n)*num_n;
			
		}
	}
	else{
		*num_81s = 0; *num_27s = 0; *num_9s = 0; *num_3s = 0; *num_1s = 0;
		return;
	}
}
