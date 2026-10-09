#include <iostream>

using namespace std;

/* Task 3 
int Partition(int arr[], int p, int q) {
	int x = arr[q];
	int i = p - 1;

	for (int j = p; j < q; ++j) {
		if (arr[j] <= x) {
			i++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	int temp = arr[i + 1];
	arr[i + 1] = arr[q];
	arr[q] = temp;

	return i + 1;
}

*/

int main()
{
	/* Task 1 

	int arr[5] = { 5, 0, 8, -9, 4 };
	int size = 5;

	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size - 1; j += 2) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

		for (int j = 1; j < size - 1; j += 2) {

			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}

	*/

	/* Task 2 

	int grades[10];
	int number;

	for (int i = 0; i < 10; ++i) {
		cout << "Enter grade " << i + 1 << ": ";
		cin >> grades[i];
	}

	cout << "1. Show grades\n";
	cout << "2. Retake exam\n";
	cout << "3. Check scholarship\n";
	cout << "0. Exit\n";

	cout << "Enter your choose: \n";
	cin >> number;

	switch (number) {
		case 1:
			for (int i = 0; i < 10; i++) {
				cout << grades[i] << " ";
			}
			cout << "\n";
			break;

		case 2:
			int index, grade;

			cout << "Enter grade number (1-10): \n";
			cin >> index;

			cout << "Enter new grade: ";
			cin >> grade;

			if (index >= 1 && index <= 10) {
				grades[index - 1] = grade;
				cout << "Grade changed. \n";

				for (int i = 0; i < 10; i++) {
					cout << grades[i] << " ";
				}
				cout << "\n";
			}

			else {
				cout << "Wrong grade number. \n";
			}

			break;

		case 3: {
			int sum = 0;

			for (int i = 0; i < 10; i++) {
				sum += grades[i];
			}

			double average = sum / 10.0;

			cout << "Average grade: " << average << "\n";

			if (average >= 10.7) {
				cout << "Scholarship awarded. \n";
			}
			else {
				cout << "No scholarship. \n";
			}

		}
		
			break;

		case 0:
			cout << "Exit. \n";
			break;

		default:
			cout << "Incorrect number. \n";
	
	}
	*/

	/* Task 3 
	

	int arr[5] = { 9, 3, 8, 11, -6 };
	int size = 5;

	int index = Partition(arr, 0, size - 1);

	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}

	cout << "\n";
	cout << "Index: " << index;

	return 0;

	*/


	/* Task 4 */

int arr[9] = { 3, 8, 0, 6, 12, 7, 1, -3, 0 };

int size = 9;
int sum = 0;

for (int i = 0; i < size; i++) {
	sum += arr[i];
}
int n;

	if (sum > 0) {
		n = size * 2 / 3;
	}
	else {
		n = size / 3;
	}
for (int i = 0; i < n - 1; ++i) {
	for (int j = 0; j < n - 1 - i; ++j) {
		if (arr[j] > arr[j + 1]) {
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}
}

for (int i = n, j = size - 1; i < j; i++, j--) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

for (int i = 0; i < size; i++) {
	cout << arr[i] << " ";
}


return 0;
}
