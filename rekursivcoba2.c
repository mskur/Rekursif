#include <stdio.h>

int total(int x, int n){
    if(n==0){
        return 1;
    }
    else{
        return x*total(x, n-1);
    }
}

int main(){
    int nilai, pangkat;
    printf("Masukkan nilai utama    : ");
    scanf("%d", &nilai);
    printf("Masukkan nilai pangkat  : ");
    scanf("%d", &pangkat);
    printf("Nilai dari %d pangkat %d = %d",nilai, pangkat, total(nilai, pangkat));
    getchar();

    return 0;
}