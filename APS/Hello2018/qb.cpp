#include <cstdio>
#include <cstring>
using namespace std;

int edge[1005];
bool isLeaf[1005];
int canDo[1005];
int main(){
  int n; scanf("%d\n",&n);
  memset(edge,0,sizeof(edge));
  memset(isLeaf,1,sizeof(isLeaf));
  for(int i = 1; i <=n ; i++){
    canDo[i] = 3;
  }
 

  isLeaf[1] = false;
  for(int i = 2 ; i <= n; i++){
    scanf("%d\n",&edge[i]);
    isLeaf[edge[i]] = false;
  }
  for(int i = 1; i <= n; i++){
    if(isLeaf[i]){
      canDo[i]=0;
      canDo[edge[i]]--;
    }
  }
  for(int i = 1; i <=n; i++){
    if(canDo[i] > 0){
      printf("No\n");
      return 0;
    }

  }
  printf("Yes\n");

  return 0;
}
