#include <iostream>
using namespace std;

int main() {

  int n = 1221;
  string word = to_string(n);
  bool isPalindrom = true;

  for(int i = 0, k = word.size()-1; i < k ; i++,k--){
    if(word[i] == word[k]){
      isPalindrom = true;
    }
    else{
      isPalindrom = false;
      break;
    }
  }
  
  if(isPalindrom){
    cout << "To jest palindrom" << '\n';
  }
  else{
    cout << "To nie jest palindrom" << '\n';
  }
}
