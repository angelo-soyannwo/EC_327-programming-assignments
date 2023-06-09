#include <iostream>
#include <cstdlib>
#include <time.h>

int blackjack_loop(int current_blackjack_score);
int blackjack(int card_1, int card_2);
int blackjack(int card_1, char card_2);
int blackjack(char card_1, int card_2);
int blackjack(char card_1, char card_2);
int blackjack(char card_1);
int blackjack(int card_1);


int running_total = 0;

int main() {
	srand(time(0));
	int card1 = rand() %10 + 2;
	int card2 = rand() %10 + 2;

	int a = blackjack(card1, card2);
	return 0;
}

int blackjack_loop(int current_blackjack_score) {

	char value;
	running_total = current_blackjack_score;
	if (running_total == 21){
	std::cout<<std::endl<<"Total:  "<<running_total<< std::endl<<"WON BLACKJACK"<<std::endl;
		return 21;
	}
	std::cout<<std::endl<<"Total:  "<<running_total<< std::endl <<"Draw again(y/n): ";
	std::cin>>value;
	if (value == 'y'){
		while (value == 'y'){
			running_total = running_total + (rand() % 10) + 2;
			std::cout<<"Total:  "<<running_total<< std::endl;
			if (running_total > 21) {
				std::cout<<"FAILED BLACKJACK"<<std::endl;
				return -1;
			}

			else if (running_total == 21){
				std::cout<<"WON BLACKJACK"<<std::endl;
				return 21;
			}

			else if (running_total < 21) {
				std::cout<<"Draw again(y/n): ";
				std::cin>>value;
				if (value == 'n') {
					std::cout<<"Total: "<< running_total<<std::endl;
					std::cout<<"You quit blackjack"<<std::endl;
				}
			}	
		}
	}
	else {
		std::cout<<"Total: "<< running_total<<std::endl;
		std::cout<<"You quit blackjack"<<std::endl;
	}
	return running_total;
}


int blackjack(int card_1, int card_2) {

	char value;
	std::cout<<"Welcome to EC327 Blackjack";
	if ((card_1 < 2) || (card_1 > 10)){
		std::cout<<std::endl<<"ERROR OCCURED"<<std::endl;
		return -1;
	}
	else if ((card_2 < 2) || (card_2 > 10)) {
		std::cout<<"ERROR OCCURED"<<std::endl;
			return -1;
	}
	
	running_total = running_total + card_1 + card_2;

	return blackjack_loop(running_total);

}


int blackjack(int card_1, char card_2) {

	char value;
	std::cout<<"Welcome to EC327 Blackjack";
	if ((card_1 < 2) || (card_1 > 10)){
		std::cout<<std::endl<<"ERROR OCCURED"<<std::endl;
		return -1;
	}
		running_total = running_total + card_1;
	
	switch(card_2){
		case 'A':
			running_total = running_total + 11;
			break;
		case 'K':
			running_total = running_total + 10;
			break;
		case 'Q':
			running_total = running_total + 10;
			break;
		case 'J':
			running_total = running_total + 10;
			break;
		default:
			std::cout<<"ERROR OCCURED"<<std::endl;
			return -1;

	}

	return blackjack_loop(running_total);
}


int blackjack(char card_1, int card_2) {

	char value;
	std::cout<<"Welcome to EC327 Blackjack";
	running_total = running_total + card_2;

	switch(card_1){
		case 'A':
			running_total = running_total + 11;
			break;
		case 'K':
			running_total = running_total + 10;
			break;
		case 'Q':
			running_total = running_total + 10;
			break;
		case 'J':
			running_total = running_total + 10;
			break;
		default:
			std::cout<<"ERROR OCCURED"<<std::endl;
			return -1;
	}

	return blackjack_loop(running_total);	
}

int blackjack(char card_1, char card_2) {

	char value;
	std::cout<<"Welcome to EC327 Blackjack";

	switch(card_1){
		case 'A':
			running_total = running_total + 11;
			break;
		case 'K':
			running_total = running_total + 10;
			break;
		case 'Q':
			running_total = running_total + 10;
			break;
		case 'J':
			running_total = running_total + 10;
			break;
		default:
			std::cout<<"ERROR OCCURED"<<std::endl;
			return -1;
	}
	switch(card_2){
		case 'A':
			running_total = running_total + 11;
			break;
		case 'K':
			running_total = running_total + 10;
			break;
		case 'Q':
			running_total = running_total + 10;
			break;
		case 'J':
			running_total = running_total + 10;
			break;
		default:
			std::cout<<"ERROR OCCURED"<<std::endl;
			return -1;
	}
	return blackjack_loop(running_total);
}


int blackjack(int card_1) {

	char value;
	std::cout<<"Welcome to EC327 Blackjack";
	if ((card_1 < 2) || (card_1 > 10)){
		std::cout<<std::endl<<"ERROR OCCURED"<<std::endl;
		return -1;
	}
	running_total = running_total + card_1;

	return blackjack_loop(running_total);
}


int blackjack(char card_1) {

	char value;
	std::cout<<"Welcome to EC327 Blackjack";
	switch(card_1){
		case 'A':
			running_total = running_total + 11;
			break;
		case 'K':
			running_total = running_total + 10;
			break;
		case 'Q':
			running_total = running_total + 10;
			break;
		case 'J':
			running_total = running_total + 10;
			break;
		default:
			std::cout<<"ERROR OCCURED"<<std::endl;
			return -1;
	}

	return blackjack_loop(running_total);
}

