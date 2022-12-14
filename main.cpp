#include <iostream>
#include<cctype>
using namespace std;

//isalpha() czy jest alfanumeryczny
//isspace() czy jest spacją;


int main() {
  
  //Deklaracja zmiennych
  
  string s = "Ala ma kota, a kot ma Ale "; //Notka: dodać spacje po ostatnim wyrazie

  while(s.size()){
    int space = s.find(' ');
    string word = s.substr(0,space);
    cout << word <<endl; // isPalindro,
    s.erase(0,space + 1);
  }
  
}
