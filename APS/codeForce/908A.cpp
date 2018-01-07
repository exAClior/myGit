#include <cstdio>
#include <string>
#include <iostream>
#include <cctype>
using namespace std;

int main(){
  string s;
  cin >> s;
  int res = 0;
  string vowls = "aeiou";
  for(int i = 0; i < s.length();i++){
    if(isalpha(s[i])){
      if(vowls.find(s[i]) != string::npos){
	res++;
      }
    }
    else{
      if((s[i]- '0')%2 == 1){
	res++;
      }
    }
  }
  cout << res << endl;


  return 0;
}
