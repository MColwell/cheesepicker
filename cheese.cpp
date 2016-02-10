#include<iostream>
int list(int answers[]) {
	string cheeselist[q];
	cheeselist[0] = "Abbaye de Belloc"
	if (answers[0] != 2 && answers[0] != 0) { // firm or semi-firm
		cheeselist[0] = "";
	}
	if (answers[1] != 2 && answers[1] != 0) { //sheep
		cheeselist[0] = "";
	}
	if (answers[2] != 1 && answers[1] != 0) { //creamy/mild
		cheeselist[0] = "";
	}
	if (answers[3] != 2 && answers[1] != 0) { //not bleu
		cheeselist[0] = "";
	}
	if (answers[4] == 4 || answers[4] != 0) { // spicy
		cheeselist[0] = "";
	}
	if (answers[4] == 5 || answers[4] != 0) { // thai
		cheeselist[0] = "";
	}
	if (answers[4] == 6 || answers[4] != 0) { // chinese
		cheeselist[0] = "";
	}
	if (answers[4] == 9 || answers[4] != 0) { // pub
		cheeselist[0] = "";
	}
	return 0;
}
int main() {
	int answers[9];
	for (int counter = 8; counter >= 0; counter--) {
		answers[counter] = 0;
	} 
	std::cout << "This program will help you pick an appropriate cheese. For multiple cheeses, wait until cheesepicker 2.0 comes out." << std::endl;
	std::cout << "This program is structured as a series of multiple choice questions. Type in the appropriate number and hit enter to submit your answer. Select the best answer for you, or enter 0 if you are unable to decide." << std::endl;
	std::cout << "Do you want a soft cheese or a hard cheese? 1 = soft, 2 = hard or semi-hard, 3 = semi-firm." << std::endl;
	std::cin >> answers[0];
	std::cout << "What kind of milk do you want the cheese to be made from?" << std::endl;
	std::cout << "1 = cow, 2 = sheep, 3 = goat, 4 = other" << std::endl;
	std::cin >> answers[1];
	std::cout << "Do you want a cheese with nutty, tangy flavors or creamy, mild flavors? 1 = nutty/tangy, 2 = creamy/mild." << std::endl;
	std::cin >> answers[2];
	std::cout << "Do you want a bleu cheese? 1 = yes, 2 = no." << std::endl;
	std::cin >> answers[3];
	std::cout << "Do you want cheese with non-dairy elements (e.g. mushrooms, bits of fig) in it?" << std::endl;
	std::cout << "1 = yes, 2 = no, 3 = yes but no mushrooms, 4 = yes but no fruit" << std::endl;
	std::cin >> answers[4];
	bool sentinel;
	std::cout << "Are you pairing the cheese? 1 = yes, 0 = no." << std::endl;
	std::cin >> sentinel;
	if (sentinel) {
		std::cout << "1 = Italian, 2 = Southern, 3 = Mexican or tex-mex, 4 = Spicy, 5 = Thai, 6 = Chinese, 7 = German, 8 = Scandanavian, 9 = Pub food, 10 = Poultry, 11 = Fish, 12 = Dessert" << std::endl;
		std::cin >> answers[5];
	}
	std::cout << "Do you want a raw cheese? 1 = yes, 2 = no." << std::endl;
	std::cin >> answers[6];
	std::cout << "Do you want imported or domestic? 1 = imported, 2 = domestic" << std::endl;
	std::cin >> answers[7];
	std::cout << "Do you want the cheese type to be something most people have heard of? 1 = yes, 2 = no." << std::endl;
	std::cin >> answers[8];
	list(answers);
	return 0;
}
