// Find the heaviest person.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string person[3] = { "Ryuu", "Veni", "Darijan" };//declaring an array of string
	//int age[3] = { 23, 25, 16 };//declaring an array of int
	float weight[] = { 45.0, 30.0, 25.5 };
	/*char gender[3] = { 'M' , 'F', 'M' };*/
	cout << "The heaviest person in the list is: "<< heaviest(weight, 3)<< endl;
}
	float heaviest(float weightArray[], int arraySize) {
	int i;
	float heavy = 0;
	for (i = 0; i < arraySize; i++) {
		cout << "Weight of person " << i << " is " << weightArray[i] << endl;
	}
	for (i = 0; i < arraySize; i++) {
		if (weightArray[i] > heavy) {
			heavy = weightArray[i];
		}
	}

	return heavy;
}








