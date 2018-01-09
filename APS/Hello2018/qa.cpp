#include <cstdio>

using namespace std;

int main(){
  int n,m; scanf("%d\n",&n); scanf("%d\n",&m);
  if(n >= 32){
    printf("%d\n",m);
  }
  else{
    int cap = (1 << n) -1;
    m &= cap;
    printf("%d\n",m);
  }

  return 0;
}
