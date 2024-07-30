#include <stdio.h>
#include <stdlib.h>

int main() {

	//bubble sort
	//Asending
	int array[10] = {5,9,7,19,6,15,51,98,22,36};

	for (int i = 0; i < 10; ++i) {
		for (int j = 0,temp = 0; j < 10; ++j) {

			if (array[i] < array[j]) {

				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}

	}
	for (int i = 0; i < 10; ++i) {
			printf("%d ",array[i]);

	}
	//decending
	int array[10] = {5,9,7,19,6,15,51,98,22,36};

	for (int i = 0; i < 10; ++i) {
		for (int j = 0,temp = 0; j < 10; ++j) {

			if (array[i] > array[j]) {

				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}

	}
	for (int i = 0; i < 10; ++i) {
			printf("%d ",array[i]);

	}

	/* selection sort
	 repeat (numOfElements - 1) times

	 set the first unsorted element as the minimum

	 for each of the unsorted elements

	 if element < currentMinimum

	 set element as new minimum

	 swap minimum with first unsorted position

	 */
	int array[10] = { 4, 9, 7, 19, 6, 15, 51, 98, 22, 36 };

	for (int i = 0; i < 10; ++i) {
		int minindex = i;//assumes i in min value
		for (int j = i + 1; j < 10; ++j) { //finds actual min value by comparision
			if (array[j] < array[minindex]) {
				minindex = j;//if finds min notes index
			}
		}
		if (minindex != i) {//swaps index values if they are not same
			int temp = array[i];
			array[i] = array[minindex];
			array[minindex] = temp;
		}
	}
	for (int i = 0; i < 10; ++i) {
		printf("%d\n", array[i]);
	}



	return 0;
}

