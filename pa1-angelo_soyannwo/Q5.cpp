
#include <iostream>

char normalize_input(char letter);
char encrypt_letter(char letter);

int main() {

	char letter;
	std::cout<<"Enter a letter: ";
	std::cin>>letter;
	std::cout<<"Crypto: ";
	char a = encrypt_letter(letter);
	std::cout<<a<<std::endl;
}


char normalize_input(char letter){
	int val = (int) letter;
	if ((val>64) && (val<91)){
		return letter;
	}

	else if ((val>96) && (val<123)){
		char result = (char) (val-32);
		return result;
	}
	else {
		std::cout<<"YOU DID NOT ENTER A LETTER"<<std::endl;
		return '\0';
	}
	return '\0';
}

char encrypt_letter(char letter){

	int value = (int) normalize_input(letter);

	char encryption;	 // encrypted letter offset by 1

	encryption = ((value -64) % 26) + 65;
	
	return encryption;
}
