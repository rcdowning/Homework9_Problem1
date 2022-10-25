#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  const int N_ROWS = 2;
  const int N_COLS = 5;
  double gradeMatrix[N_ROWS][N_COLS];

  // user input of matrix values
  cout << "Enter the value of the matrix: " << endl;
  for(int r = 0; r < N_ROWS; r++){  
    for (int c = 0; c < N_COLS; c++){
      cin >> gradeMatrix[r][c];
      cout << endl;
    }
  }

  // print matrix
  cout << "The values of the matrix are: " << endl; 
  for (int r = 0; r < N_ROWS; r++) {
    for (int c = 0; c < N_COLS; c++)
      cout << setw(6) << gradeMatrix[r][c] << " ";

    cout << endl;
  }
  

}