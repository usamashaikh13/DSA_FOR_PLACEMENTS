

#include <iostream>
using namespace std;


void matrix(int A[3][3])
{

	int N = 3;

	for (int col = 0; col < N; col++) {

		int startcol = col, startrow = 0;

		while (startcol >= 0 && startrow < N) {
			cout << A[startrow][startcol] << " ";

			startcol--;

			startrow++;
		}
		cout << "\n";
	}

	for (int row = 1; row < N; row++) {
		int startrow = row, startcol = N - 1;

		while (startrow < N && startcol >= 0) {
			cout << A[startrow][startcol] << " ";

			startcol--;

			startrow++;
		}
		cout << endl;
	}
}

int main()
{

	
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

	matrix(arr);

	return 0;
}
