#include <cstdio>

using namespace std;

int main(){
        int x; scanf("%d\n",&x);
        int hh, mm; scanf("%d %d\n",&hh,&mm);
        int ans = 0;
        while( hh%10 != 7 && mm%10 != 7 ){
                if(mm - x < 0) {
                  mm = mm + 60 - x;
                  hh -= 1;
                  if(hh < 0) hh += 24;
                }
                else{
                  mm -= x;
                }
                ans++;
        }

        printf("%d\n",ans);
        return 0;
}
