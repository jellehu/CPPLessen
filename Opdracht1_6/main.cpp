// Opdracht 1.6 - Jelle van den Broek
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input = "";
    cout << "Geef een string om te vertalen: ";
    getline(cin, input);
    cout << "1337-speak:\n";
	
	for(int letter = 0; letter < input.size(); letter++) {
		if(input[letter] == 'e'){
			cout << '3';
		}
		else if(input[letter] == 'l'){
			cout << '1';
		}
		else if(input[letter] == 't'){
			cout << '7';
		}
		else if(input[letter] == 'o'){
			cout << '0';
		}
		else{
			cout << char(input[letter] - 32);
		}
    }
		cout << "\n";
}