#include <iostream>

int main() {

	int choice;
	float value, result;

	std::cout << "Celsius to Fahrenheit (enter 0)" << std::endl << "Celsius to Kelvin (enter 1)" <<std::endl; 
	std::cout << "Fahrenheit to Celsius (enter 2)" <<std::endl <<"Fahrenheit to Kelvin (enter 3)" << std::endl; 
	std::cout << "Kelvin to Celsius (enter 4)" << std::endl << "Kelvin to Fahrenheit (enter 5)" << std::endl << "conversion type: ";
	std::cin>> choice;

	while((value > 5) || (value < 0)) {
		std::cout<< "you did not enter a valid option please enter a new number." << std::endl << "conversion type: ";
		std::cin>> choice;
	} 

	switch(choice) {
		case 0:
			std::cout << "Enter the amount in Celsisus: ";
			std::cin>>value;
			result = (value * 1.8) + 32;
			std::cout<< value << " Celsius is " << result << " Farenheit" <<std::endl;
			break;

		case 1:
			std::cout << "Enter the amount in Celsisus: ";
			std::cin>>value;
			result = value + 273.15;
			std::cout<< value << " Celsius is " << result << " Kelvin" <<std::endl;
			break;

		case 2:
			std::cout << "Enter the amount in Farenheit: ";
			std::cin>>value;
			result = (value - 32) * 5/9;
			std::cout<< value << " Farenheit is " << result << " Celsius" <<std::endl;
			break;

		case 3:
			std::cout << "Enter the amount in Farenheit: ";
			std::cin>>value;
			result = ((value - 32) * 5/9) + 273.15;
			std::cout<< value << " Farenheit is " << result << " Kelvin" <<std::endl;
			break;

		case 4:
			std::cout << "Enter the amount in Kelvin: ";
			std::cin>>value;
			result = value - 273.15;
			std::cout<< value << " Kelvin is " << result << " Celsius" <<std::endl;
			break;

		case 5:
			std::cout << "Enter the amount in Kelvin: ";
			std::cin>>value;
			result = ((value-273.15) * 1.8) + 32;
			std::cout<< value << " Kelvin is " << result << " Farenheit" <<std::endl;
			break;

	//	default :
	//		;
}

	return 0;
}
