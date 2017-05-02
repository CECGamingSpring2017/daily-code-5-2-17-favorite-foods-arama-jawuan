#include <iostream>
#include <string>
using namespace std;
string food[6];
int main() {

	food[0] = "Pizza";
	food[1] = "Cereal";
	food[2] = "Burger";
	food[3] = "Oreos";
	food[4] = "Steak";
	food[5] = "Spaghetti";
	food[6] = "Chicken Alfredio";
	for (int i = 0; i < 7; i++) {
		cout << food[i] << endl;
	}
}