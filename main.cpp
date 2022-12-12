#include <iostream>
#include<cctype>
using namespace std;

//isalpha() czy jest alfanumeryczny
//isspace() czy jest spacją;


int main() {
  
  //Deklaracja zmiennych
  
  string s = "Ala ma kota, a kot ma Ale "; //Notka: dodać spacje po ostatnim wyrazie
  string temp = "";
  string word = "";
  bool isPalindrom = true;
  
  //Zamiana na Wielkie litery
  
  for(int i = 0; i < s.size(); i++){
    s[i] = toupper(s[i]);
  }

  //Usuwanie zbędnych znaków
  
  for(int i = 0; i < s.size(); i++){
    if((s[i] >= 'A' && s[i] <= 'Z') || isspace(s[i])){
      temp += s[i];      
    }
  }

  //Dzielenie na słowa i sprawdzanie palindromowości
  
  for(int j = 0; j < temp.size(); j++){
    if(not isspace(temp[j])){
    word += temp[j];
    }
    else{
    for(int i = 0, k = word.size()-1; i <= k ; i++,k--)
    {
      if(word[i] == word[k]){
        isPalindrom = true;
      }
      else{
        isPalindrom = false;
        break;
      }
    }
    cout << word + ' ';
    if(isPalindrom){
      cout << "Palindrom\n";
      word = "";
    }
    else{
      cout << "Not Palindrom\n";
      word = "";
    }
    }
  }
}
