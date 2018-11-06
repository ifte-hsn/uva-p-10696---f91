/* @JUDGE_ID:  841985  10696  C  "f91" */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d", &n)==1 && n !=0){
        if(n<=100) {
            printf("f91(%d) = %d\n", n, 91);
        }else if(n>=101){
            printf("f91(%d) = %d\n", n, n-10);
        }
    }
    return 0;
}
