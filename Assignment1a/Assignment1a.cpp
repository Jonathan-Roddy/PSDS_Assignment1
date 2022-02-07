#include <iostream>
#include "Assignment1a.h"
#include <vector>

using namespace std;

// Recurrsion Metthod
void sortArray(int a[], int s, int c) {
	
	// Iniatilise variables
	int firstIndex = 0 , lastIndex = 0, temp = 0;

	// [0] [1] [2] [3] [4] [5]
	// size is set at 6 so s-1 gives last index or array
	
	//setting lastIndex = size of arry -1
	lastIndex = s-1;

	// updating firstIndex to account for iterations using the counter variable
	firstIndex = firstIndex + c;
	lastIndex = lastIndex - c;

	// Calculate temp multiplation
	temp = a[firstIndex] * a[lastIndex];


	// Re write array with temp using the orginal array
	// replace array values
	for (int i = 0; i < s; i++){
		if (i == firstIndex) 
			a[i] = temp;
		else if (i == lastIndex)
			a[i] = temp;
	}


	// Print Array to screen
	for (int i = 0; i < s; i++) {
		cout << a[i] << ", ";
	}

	cout << "\n";

}


// Driver Code
int main()
{
	// Hardcoding array 
	int myArray[] = {5,4,8,3,6,2};

	// Hardcoding Array Size and setting a counter
	int size = 6, counter = 0;

	cout << "Orginal Array : \n";
	// Print Orginal Array to screen
	for (int i = 0; i < size; i++) {
		cout << myArray[i] << ", ";
	}
	cout << "\n\n";

	cout << "Updated Array : \n";
	for (int i = 0; i < size; i++) {
		// Call recursion method
		sortArray(myArray, size, counter);
		counter++;

		// if counter is equal to 3, exit program
		if (counter == size / 2)
			return 0;
	}

    return 0;
}
