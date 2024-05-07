#include "Posts.h"
#include <iostream>
#include<string>

using namespace std;

bool operator<(const Posts& lhs, const Posts& rhs) {
	return(lhs.getLikes() < rhs.getLikes());

		
	
	
}




template<typename TheType>
void InsertionSort(TheType numbers[], int numbersSize) {
	int i;
	int j;
	TheType temp;     // Temporary variable for swap, temp will be aq class object 

	for (i = 1; i < numbersSize; ++i) {
		j = i;
		// Insert numbers[i] into sorted part
		// stopping once numbers[i] in correct position
		//the below will call the following overloaded comparison operators to execute
		while (j > 0) {
			if (numbers[j] < numbers[j - 1]) {
				// Swap numbers[j] and numbers[j - 1]
				temp = numbers[j];
				numbers[j] = numbers[j - 1];
				numbers[j - 1] = temp;
				
			}
			--j;
		}
	}

}

int main()
{
	//the class attribute that's going to be used to initalize an array of objects is 
	//the likes variable
	Posts object;
	Posts array[10];
	cout << endl;

	for (int i = 0; i < 10; i++) {
		int userLikes;
		cout << "Enter in the like count for class object # " << i << ": ";
		cin >> userLikes;
		object.setLikes(userLikes);
		array[i] = object;
	}
	cout << endl;
	cout << "Below is the output of the unsorted array of classobjects based on likes" << endl;
	
	for (int i = 0; i < 10; i++) {
		cout << "like # for class object " << i << ": ";
		cout << array[i].getLikes() << endl;
	}
	//let's sort the array of class objects using a sort algorithim
	InsertionSort(array, 10);
	cout << endl;
	cout << "Below is the output of the sorted array of class objects based on likes" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "like # for class object " << i << ": ";
		cout << array[i].getLikes() << endl;
	}

}