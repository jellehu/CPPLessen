#include <iostream>
using namespace std;

int main()
{
    char letter = 'a';
    for(int i = 0; i < 36; i++) {
	cout << char(letter + i) << ", ";
    }
}