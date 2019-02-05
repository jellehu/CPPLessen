// Opdracht 1.5 - Jelle van den Broek
#include <iostream>
using namespace std;

int main()
{
	char input = ' '; 
	cout << "Geef een character: ";
	cin >> input;
	cout << input << " + 32 = " << input + 32 << "\n";
	cout << input << " + 32 = " << char(input + 32) << "\n";
}
