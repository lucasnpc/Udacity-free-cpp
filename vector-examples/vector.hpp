#include <iostream>
#include <vector>

using namespace std;

  void printVector(vector<int> vIn);
  void assignFunction(vector<int> vInts, int in);
  void pushBackFunction(vector<int> vInts, int in);
  void emplaceFunction(vector<int> vInts, int loc, int in);
  
 void printVector(vector<int> vIn)
 {
     vector<int>::iterator it;
     for(it = vIn.begin(); it != vIn.end(); ++it)
       cout << *it << endl;
 }
 
  void assignFunction(vector<int> vInts, int in)
  {
      cout<<"\nassigning "<<in<<" and printing the vector\n";
      vInts.assign(1, in);
      printVector(vInts);
  }
  void pushBackFunction(vector<int> vInts, int in)
  {
      cout<<"\npush back "<<in<<" and printing the vector\n";
      vInts.push_back(in);
      