#include <iostream>
using namespace std;

int main() {

  string word = "kajak";
  bool isPalindrom = true;

  for(int i = 0; i < word.size() / 2 ; i++){
    if(word[i] == word[word.size() -(i+1)]){
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
