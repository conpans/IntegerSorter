#include "std_lib_facilities.h"
int main()
{
	int a, b, c;

	// Prompt user for input
	cout << "Enter three integer values separated by spaces: ";
	cin >> a >> b >> c;

	//store the integers in a vector for easy sorting
	vector<int> numbers = { a, b, c };

	// Sort the vector in ascending order
	sort(numbers.begin(), numbers.end());

	// Output the sorted integers
	cout << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << "\n";
}