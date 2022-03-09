#include <iostream>
#include <string>

using namespace std;

int main(){
  string a;
  int jumlah;

  cout << "Tuliskan kata: ";
  getline(cin, a);

  jumlah = a.length();

  cout << "Jumlah karakter	: " << jumlah << endl;
}
