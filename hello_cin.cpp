/// @file <hello_cin.cpp>
/// @brief <allows you to type a single-word message and display it in the terminal.>
/// @author <Connor Zermeno>



#include <iostream>
#include <string>
using namespace std;
int main(){
  string strMessage;
  cout << "Please type a single word message" << endl;
  cin >> strMessage;
  cout << "Message: " << strMessage << endl;
  return 0;
}