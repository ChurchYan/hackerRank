#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a,int b){
    if (a>b){
        return a;
    } else{
        return b;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int n1 = n-1;
    int n2 = 2*n-2;
    for (int x = 0; x <= n2; ++x) {
        for (int y = 0; y <= n2; ++y) {
            int absx = abs(x-n1);
            int absy = abs(y-n1);
            printf("%d  ",1+max(absx,absy));
        }
        printf("\n");
    }
    return 0;
}
