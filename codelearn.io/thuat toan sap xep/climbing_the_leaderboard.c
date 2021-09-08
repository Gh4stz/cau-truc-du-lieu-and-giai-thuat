#include<stdio.h>

int* climbingLeaderboard(int ranked_count, int* ranked, int player_count, int* player, int* result_count) {
    *result_count = player_count;
    int arr[player_count];
    int i,j;
    int k = 1;
    int a[ranked_count];
    a[0] = ranked[0];
    for(i = 1;i < ranked_count;i++){
        if(ranked[i] != ranked[i-1]){
            a[k] = ranked[i-1];
        }
    }
    return a;
}
int main(){
    int i;
    int ranked_count = 7;
    int ranked[7] = {100, 100, 50, 40, 40, 20, 10};
    int played_count = 4;
    int played[4] = {5, 25, 50, 120};
    int result_count;
    int a[7] = climbingLeaderboard(ranked_count, ranked, played_count, played, &result_count);
    for(i = 0;i < 5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
