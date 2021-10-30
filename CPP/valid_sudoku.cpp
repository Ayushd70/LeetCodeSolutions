// C++ Program to check whether given sudoku
// board is valid or not
#include <bits/stdc++.h>
using namespace std;

// Checks whether there is any duplicate
// in current row or not
bool notInRow(char arr[][9], int row)
{
	// Set to store characters seen so far.
	set<char> st;

	for (int i = 0; i < 9; i++) {

		// If already encountered before, return false
		if (st.find(arr[row][i]) != st.end())
			return false;

		// If it is not an empty cell, insert value
		// at the current cell in the set
		if (arr[row][i] != '.')
			st.insert(arr[row][i]);
	}
	return true;
}

// Checks whether there is any duplicate
// in current column or not.
bool notInCol(char arr[][9], int col)
{
	set<char> st;

	for (int i = 0; i < 9; i++) {

		// If already encountered before, return false
		if (st.find(arr[i][col]) != st.end())
			return false;

		// If it is not an empty cell,
		// insert value at the current cell in the set
		if (arr[i][col] != '.')
			st.insert(arr[i][col]);
	}
	return true;
}

// Checks whether there is any duplicate
// in current 3x3 box or not.
bool notInBox(char arr[][9], int startRow, int startCol)
{
	set<char> st;

	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {
			char curr = arr[row + startRow][col + startCol];

			// If already encountered before, return false
			if (st.find(curr) != st.end())
				return false;

			// If it is not an empty cell,
			// insert value at current cell in set
			if (curr != '.')
				st.insert(curr);
		}
	}
	return true;
}

// Checks whether current row and current column and
// current 3x3 box is valid or not
bool isValid(char arr[][9], int row, int col)
{
	return notInRow(arr, row) && notInCol(arr, col) &&
		notInBox(arr, row - row % 3, col - col % 3);
}

bool isValidConfig(char arr[][9], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			// If current row or current column or
			// current 3x3 box is not valid, return false
			if (!isValid(arr, i, j))
				return false;
		}
	}
	return true;
}

// Drivers code
int main()
{
	char board[9][9] = { { '5', '3', '.', '.', '7', '.', '.', '.', '.' },
						{ '6', '.', '.', '1', '9', '5', '.', '.', '.' },
						{ '.', '9', '8', '.', '.', '.', '.', '6', '.' },
						{ '8', '.', '.', '.', '6', '.', '.', '.', '3' },
						{ '4', '.', '.', '8', '.', '3', '.', '.', '1' },
						{ '7', '.', '.', '.', '2', '.', '.', '.', '6' },
						{ '.', '6', '.', '.', '.', '.', '2', '8', '.' },
						{ '.', '.', '.', '4', '1', '9', '.', '.', '5' },
						{ '.', '.', '.', '.', '8', '.', '.', '7', '9' } };

	cout << (isValidConfig(board, 9) ? "YES\n" : "NO\n");
	return 0;
}

// output- yes
