#include <bits/stdc++.h>

using namespace std;

int main(){
  int N = 7;
  N --;
  vector<int> a = {0,1,2,3,4,6,7,8,9};

  while(N){
    int k = a.size();
    for(int i = 0 ; i < k ; i++){
      int z = a[i] % 10;
      int temp = a[i];
      if (z == 0){
	a[i] = a[i] * 10 + 4;
	a.push_back(temp * 10 + 6);
      }
      if (z == 1){
	a[i] = a[i] * 10 + 8;
	a.push_back(temp * 10 + 6);
      }
      if (z == 2){
	a[i] = a[i] * 10 + 7;
	a.push_back(temp * 10 + 9);
      }
      if (z == 3){
	a[i] = a[i] * 10 + 4;
	a.push_back(temp * 10 + 8);
      }
      if (z == 4){
	a[i] = a[i] * 10 + 3;
	a.push_back(temp * 10 + 9);
		a.push_back(temp * 10 + 0);
      }
      if (z == 6){
	a[i] = a[i] * 10 + 1;
	a.push_back(temp * 10 + 7);
		a.push_back(temp * 10 + 0);
      }
      if (z == 7){
	a[i] = a[i] * 10 + 2;
	a.push_back(temp * 10 + 6);
      }
      if (z == 8){
	a[i] = a[i] * 10 + 1;
	a.push_back(temp * 10 + 3);
      }
       if (z == 9){
	a[i] = a[i] * 10 + 4;
	a.push_back(temp * 10 + 2);
      }
                 
    }
    N--;
  }
  sort(a.begin(),a.end());
  int kk = 0;
  for(int i = 0 ; i < a.size(); i++){
    cout << a[i] << endl;
    if(a[i] % 10 == 4) kk ++;
    if(a[i] % 10 == 6) kk ++;
  }
  cout << a.size() << endl;
  cout << kk << endl;
}
