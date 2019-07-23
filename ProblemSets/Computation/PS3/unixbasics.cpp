// asks for a name input, and prints out a little diddy

#include <iostream>

int main()
{
  using namespace std;
  cout << "Please enter your name!";
  string x = "";
  cin >> x; // read in name;
  cout << "Hello, " << x << ", how are you?" << endl;
  return 0;
}
