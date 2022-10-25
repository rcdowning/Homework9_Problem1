#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  const int N_ROWS = 5;
  const int N_COLS = 5;
  double gradeMatrix[N_ROWS][N_COLS];
  int sum;

  // user input of matrix values
  cout << "Enter the value of the matrix: " << endl;
  for(int r = 0; r < N_ROWS; r++){  
    for (int c = 0; c < N_COLS; c++){
      cin >> gradeMatrix[r][c];
    }
    cout << endl;
  }

  // print to check if matrix is correct
  cout << "The values of the matrix are: " << endl; 
  for (int r = 0; r < N_ROWS; r++) {
    for (int c = 0; c < N_COLS; c++)
      cout << setw(6) << gradeMatrix[r][c] << " ";

    cout << endl;
  }

  // calculate average of first 4 grades

  // need outer for loop to loop through rows

  // for loop to add columns 
    for (int i = 0; i < N_COLS; i++){
      index 0 + index 1 + index 2...
  
        = sum
  
        finalGrade_1 = sum/4 
  
        index 5 = finalGrade_1
    }

  
}