#include <stdio.h>
int main(){

//     int son;
//     printf("SON KIRITING:");
//     scanf("%d", &son);

//     for (int x=1; x<=son; x++){
//     if (x%2!=0){
//         printf("%d\n", x);
//     }
//     }




// int son;
// printf("SONNI KIRITING:");
// scanf("%d", &son);

// for (int i=son; i>=1; i--){
//     printf("%d\n", i);
// }


// int son;
// printf("SONNI KIRITING: ");
// scanf("%d", &son);

// for (int x=1; x<=son; x++)
// if(x%3==0){
//     printf("%d\n", x);
// }



//  int n, sum = 0;

//  printf("SONNI KIRITING: ");
//  scanf("%d", &n);

// for (int x = 1; x <= n; x++) {
// if (x % 2 != 0) {
//  sum += x;
// }
// }
// printf("%d", sum);


// int a, son2;

// printf ("NECHTA SON KIRITASIZ: ");
// scanf("%d", &a);

// for(int x=1; x<=a; x++ ){
//     printf("KIRITING:");
//     scanf("%d", &son2);


// if (son2>0){
//     printf("%d", &son2);
// }
 


// }

// return 0;

//  int N, son, sum;
//  printf(" NECHTA SON KIRITASIZ: ");
//  scanf ("%d", &N);


// for(int x=N; x>=1; x--){
//     scanf("%d  ", &son);
    
    
//     if(son>0){
//         printf("MUSBAT ANIQLANDI: %d", son);
//     }
// }



// float n, yigindi=0, o;
// puts("Nechta son kiritasiz:  ");
// scanf("%f", &n);
// for(int x=n; x>=1; x--){
//     scanf("%f", &o);
//     yigindi+=o;
// }
// printf("Orta arifmetik: %g ", yigindi/n);



// 

// int son,count=1;
// printf("RAQAM BERING:");
// scanf("%d", &son);

// for (int x=1; x<=son; x++){
//     count*=x;

// }

// printf("%d", count);



// int son, n;
// int toq=0, juft=0, nol=0;


// printf("NECHTA SON KIRITASIZ:");
// scanf("%d", &son);

// for(int x = son; x>=1; x--){
//     scanf("%d", &n);
//     if (n==0){
//         nol++;
//     }else if (n%2==0){
//         juft++;
//     }else {
//         toq++;
//     }

    

// }
// printf("juft sonlar %d\n", juft);
//     printf("toq sonlar %d\n", toq);
//     printf("nol sonlar %d\n", nol);


int price,n;
    int max, min;
    int sum = 0;

    printf("NECHTA SON KIRITASIZ: ");
    scanf("%d", &n);
    printf("BIRINCHI NARXNI KIRITING: ");
    scanf("%d", &price);
    max = min = price;
    sum += price;

   
    for (int i = 1; i < n; i++) {
    scanf("%d", &price);

    if (price > max) {
    max = price;
    }
    if (price < min) {
    min = price;
    }

    sum += price;
    }

    printf("Eng yuqori buyurtma: %d\n", max);
    printf("Eng past buyurtma: %d\n", min);
    printf("O'rtacha buyurtma: %d\n", sum / 5);





}


 


   











 



    

    










