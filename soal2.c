/*
Soal Pilihan - Soal 2
Nama    : Thoriq Al Maududi
NIM     : 13224054
*/

#include <stdio.h>
/*Deklarasi Variabel*/
int T;
int n;
int langkah;
/*Deklarasi Fungsi*/
int hitung(int n, int langkah){  
    if(n==1) return langkah;
    if(n%2 == 0){
        n = n/2;
    }
    else{
        n = 3*n + 1;
    }
    return hitung(n, langkah + 1);
}

/*Main*/
int main(){
    scanf("%d", &T);
    for(int i = 0; i < T ; i++){
        scanf("%d", &n);
        printf("LANGKAH %d\n", hitung(n, 0));
    }
}
