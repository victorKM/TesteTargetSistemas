#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  char temp;
  
  cout << "Digite uma string:";
  cin >> str;

  for (int i = 0; i < int(str.size()/2); i++) {
    temp = str[str.size() - (i+1)];
    str[str.size() - (i+1)] = str[i];
    str[i] = temp;
  }

  cout << str;
}