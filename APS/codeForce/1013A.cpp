#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> first, second;

int main(){
  int n;
  scanf("%d\n",&n);
  for(int i = 0; i < n ; i++){
    int tmp;
    scanf("%d",&tmp);
    first.push_back(tmp);
  }
  for(int i = 0; i < n ; i++){
    int tmp;
    scanf("%d",&tmp);
    second.push_back(tmp);
  }
  sort(first.begin(),first.end());
  sort(second.begin(),second.end());
  for(int i = 0 ; i < n ; i++){
    if(second[i] > first[i]){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
}
