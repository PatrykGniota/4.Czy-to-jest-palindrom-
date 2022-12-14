#include <iostream>
#include<cctype>
using namespace std;

//isalpha() czy jest alfanumeryczny
//isspace() czy jest spacją;


int main() {
  
  //Deklaracja zmiennych
  
  string s = "Kobyla ma maly bok "; //Notka: dodać spacje po ostatnim wyrazie
  string temp = "";
  bool isPalindrom = true;

  //Usuwanie zbędnych znaków
  
  for(int i = 0; i < s.size(); i++){
    s[i] = toupper(s[i]);
    if(s[i] >= 'A' && s[i] <= 'Z'){
      temp += s[i];      
    }
  }

  //Dzielenie na słowa i sprawdzanie palindromowości
  
    for(int i = 0, k = temp.size()-1; i <= k ; i++,k--){
      if(temp[i] != temp[k]){
        isPalindrom = false;
      }
    }
    cout << temp + ' ';
    if(isPalindrom){
      cout << "Palindrom\n";
    }
    else{
      cout << "Not Palindrom\n";
    }
}
