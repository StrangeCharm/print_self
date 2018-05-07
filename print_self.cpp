#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string program;
  ifstream fin("print_self.cpp");
  while (getline(fin, program))
    cout << program << endl;
   
  return 0;
}
