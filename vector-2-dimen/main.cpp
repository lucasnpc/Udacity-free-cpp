#include <iostream>
#include <vector>
using std::cout;
using std::vector;
using std::endl;

void printBoard(int v){
    cout << v;
}

int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  vector<vector<int>>::iterator row;
  vector<int>::iterator col;
  for(row = board.begin(); row != board.end(); ++row){
    for(col = row->begin(); col != row->end(); ++col){
      printBoard(*col);
    }
    cout << endl;
  }
  
  return 0;
}