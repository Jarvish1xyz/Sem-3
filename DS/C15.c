#include<stdio.h>
#include<math.h>

int main() {
    for(int n=1; n<=1000; n++) {
        int t=n,k=n,c=0,ans=0;

        while(t>0) {
            c++;
            t/=10;
        }
        while(k>0) {
            ans+=pow(k%10, c);
            k/=10;
        }
        if(ans==n) {
            printf("%d ", ans);
        }
    }
}