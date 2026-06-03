#include <stdio.h>

int main (){
    // int son= 20;
    // int *ptr= &son;


    // printf("%d - qiymat\n ", son );
    // printf("%p- manzil  ",(void*) ptr);


    // int son=20;
    // int *ptr = &son;


    // printf("%d- qiymat", *ptr);



    // int son = 30;
    // int *ptr = &son;
    // *ptr=50;

    // printf("%d- yangi qimat ", son);



    // int son =100;
    // int *ptr= &son;
    // int *ptr2=&son ;

    // printf("%d-ptr1 qiymati\n", *ptr);
    // printf("%d-ptr2 qiymati", *ptr2);

    // int son=8;
    // int *ptr= &son;
    // *ptr= 2*son;

    // printf("YANGI QIMAT- %d", *ptr);

    
    // int a=10, b=12;
    // int *ptr1= &a;
    // int *ptr2= &b;
    
    // if (ptr1==ptr2){
    //     printf("MANZILAR BIR XIL");
    // }else {
    //     printf("MANZILLAR XAR HIL");
    // }


//     int *ptr= NULL;

//     if (ptr == NULL){
//         printf("POINTER TENG NULLGA");
        
// }else {
//     printf("pointer mazilga ega ");
// }


// int son;
// printf("SONNI KIRQIZING:");
// scanf("%d", &son);


// int *ptr= &son;

// printf("%d - siz kiritgan son ", *ptr);
// }


// int n, m;
// int nol=0, nol_emas=0;
// printf("QATORLAR SONINI KIRITING: ");
// scanf("%d", &n);
// printf("USTUNLAR SONINI KIRITING: ");
// scanf("%d", &m);

// int arr[n][m];

// for (int x=0; x<n; x++){
//     for (int i=0; i<n; i++){
//         scanf("%d", &arr[x][i]);

//     if (arr[x][i]==0){
//         nol++;
//     }else {
//         nol_emas++;
//     }
//     }
// }

// if (nol>nol_emas){
//     printf(" SPACE MATRIX");
// }else {
//     printf("NOT SPARSE MATRIX");
// }





// int n;
// printf("QATORLAR SONINI KIRITING: ");
// scanf("%d", &n);

// int arr[n][n];
// for (int x=0 ; x<n; x++ ){
//     for (int i=0;i<n;i++){
//         scanf("%d", &arr[x][i]);
//     }
// }

// int sum=0;
// for (int x=0; x<n; x++){
//     sum += arr[x][x];
//     sum += arr[x][n-1-x];
// }
// if (n%2!=0){
//     sum -= arr[n/2][n/2];

// }

// printf("YIGINDISI TENG: %d", sum);





 int n, m;
 scanf("%d", &n);
 scanf("%d", &m);

  int arr[n][m];

int max, min;
int max_i = 0, max_j = 0;
int min_i = 0, min_j = 0;

for (int x = 0; x < n; x++) {
 for (int i = 0; i < m; i++) {
scanf("%d", &arr[x][i]);

if (x == 0 && i == 0) {
max = arr[x][i];
min = arr[x][i];
}

if (arr[x][i] > max) {
max = arr[x][i];
max_i = x;
max_j = i;
}
if (arr[x][i] < min) {
min = arr[x][i];
min_i = x;
min_j = i;
 }
}
 }

    int change = arr[max_i][max_j];
    arr[max_i][max_j] = arr[min_i][min_j];
    arr[min_i][min_j] = change;

    for (int x = 0; x < n; x++) {
        for (int i = 0; i < m; i++) {
        printf("%d ", arr[x][i]);
        }
        
    }

    int it_really_dependz = son;

   
}








