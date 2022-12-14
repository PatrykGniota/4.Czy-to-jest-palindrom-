#include <iostream>
#include<cctype>
using namespace std;

//isalpha() czy jest alfanumeryczny
//isspace() czy jest spacją;


int main() {
  
  //Deklaracja zmiennych
  bool isPalindrom = true;
  string s = "kajak "; //Notka: dodać spacje po ostatnim wyrazie

  while(s.size()){
    int space = s.find(' ');
    string word = s.substr(0,space);
    cout << word + ' ';
    for(int i = 0, k = word.size() - 1; i  <= k; i++, k--){
      if(word[i] != word[k]){
        isPalindrom = false;
        break;
      }
    }
    if(isPalindrom){
      cout << "Palindrom\n";
    }
    else{
      cout << "Not Palindrom\n";
    }
    s.erase(0,space + 1);
  }
  
}
