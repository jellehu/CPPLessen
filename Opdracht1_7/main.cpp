// Opdracht 1.7 - Jelle van den Broek
#include <iostream>
using namespace std;

int main()
{
	int aantal = 0;
	cout << "Hoe groot moet het vierkant zijn? ";
	cin >> aantal;
	for(int i = 0; i < aantal; i++){
		for(int i = 0; i < aantal; i++){
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n";
}
