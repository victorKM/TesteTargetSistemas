#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int fibonacci1 = 1;
  int fibonacci2 = 2;
  int temp;
  int flag = 1;
  
  cout << "Digite um numero:";
  cin >> n;

  if (n == 0 || n == 1) {
    flag = 0;
  } else {
    while (n >= fibonacci2) {
      if (n == fibonacci2) {
        flag = 0;
        break;
      }
      temp = fibonacci2;
      fibonacci2 = fibonacci1 + fibonacci2;
      fibonacci1 = temp;
      cout << fibonacci2 << " ";
    }
  }

  if (flag == 0) {
    cout << "\nSeu numero pertence a sequencia.";
  } else {
    cout << "\nSeu numero nao pertence a sequencia.";
  }
}