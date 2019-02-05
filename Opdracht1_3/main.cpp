// 1.  number = 65
// 2.  number = 70
// 3.  number = 73
// 4.  number = 74
// 7.  number = 77
// 8.  number = 78
// 11. number = 81
// 12. number = 84
// 13. number = 87
// 14. number = 90
#include <iostream>
using namespace std;

int main()
{
    int number = 65;
    while(number < 90) {
	if(number < 70) {
	    number = 70;
	    cout << number << "\n";
	} else if(number < 80) {
	    number++;
	    cout << number << "\n";
	}
	number += 3;
	cout << number << "\n";
    }
}
