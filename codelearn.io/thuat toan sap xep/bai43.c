    #include<stdio.h>
    #include<stdlib.h>
    #include<stdbool.h>
    //thuat toan sap xep chon
    bool selectionsort(int *a, int n){
        int indexMin;
        int i, j;
        for(i = n-1;i >= 0;i--){
            indexMin = i;
            for(j = i;j >= 0 ;j--){
                if(a[indexMin] < a[j])
                    indexMin = j;
            }
            if(i != indexMin){
                int temp = a[indexMin];
                a[indexMin] = a[i];
                a[i] = temp;
                return false;
            }
        }
        return true;
    }
    void print(int a[], int n){
        int i;
        for(i = 0;i < n;i++){
            printf("%4d",a[i]);
        }
    }
    int main(){
        int n, i;
        scanf("%d",&n);
        int j = 0;
        int *a = (int*)malloc(n * sizeof(int));
        for(i = 0;i < n;i++){
            scanf("%d",&a[i]);
        }
        printf("%4d:",j);
        print(a,n);
        printf("\n");
        j++;
        while(1){
            if(selectionsort(a,n) == false){
                printf("%4d:",j);
                print(a,n);
                printf("\n");
            }else   break;
            j++;
        }
        return 0;
    }