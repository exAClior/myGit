#include <cstdio>

using namespace std;

int mh[100005];
int reg[100005];
int killTime[100005];
int main(){
  int n,m; scanf("%d %d\n", &n, &m);
  int bounty, inc, dam; scanf("%d %d %d\n", &bounty, &inc, &dam);
  int ans = 0;int killNum = 0;
  int sh;
  for(int i = 0; i < n; i++){
    scanf("%d %d %d", &mh[i], &sh, &reg[i]);
    if(mh[i] > dam){
     
    }
    else{
      printf("-1\n");
      return 0;
    }
    
  }
  int health, whichEnm, t;
  for(int i = 0; i < m; i++){
    scanf("%d %d %d",&t, &whichEnm, &health);
    whichEnm--;

  }
  

  return 0;
}
