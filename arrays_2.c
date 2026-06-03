#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


struct talaba{
    char ism[100];
    int yosh;
    int stp;
    int baho[5];

};

typedef struct {
    char  turi[50];
    char  uchish_sanasi[50];
    char uchish_shaxri[50];
    char qonish_shaxri[50];
    float uchish_soati;
} AEROPORT;





int main (){

    // 1.

// int n;
// printf("nechta talaba kiritasiz: ");
// scanf("%d", &n);
// struct talaba arr[n];
// for(int i=0;i<n;i++){
//     printf("%d talaba ismini kiriting: ", i+1);
//     scanf("%s", arr[i].ism);
//     printf("%d talaba yoshini kiriting: ", i+1 );
//     scanf("%d", &arr[i].yosh);
//     printf("%d talabani stipendiyasini kiriting; ", i+1);
//     scanf("%d", &arr[i].stp);
//      printf("baholarni kiriting ");
//     for(int x=0;x<5;x++){
//         scanf("%d", &arr[i].baho[x]);
//     }
// }
// for(int i=0;i<n;i++){
//     int sum=0;
//     int avg=0;
//     for(int x=0;x<5;x++){
//         sum+=arr[i].baho[x];
//     }
//     avg=sum/5;
//     if(avg==4){
//         printf("ism %s  yosh %d  stipendiya %d\n", arr[i].ism, arr[i].yosh, arr[i].stp);
//         puts("baholari");
//         for(int x=0;x<5;x++){
//             printf("%d\n", arr[i].baho[x]);
//         }
//     }
// }

// AEROPORT    reys[5]={{"boing", "12.02.2026", "Toshkent", "Istanbul", 5 },
//                      {"Airbus", "26.06.2026", "Toshkent", "USA", 12 },
//                      {"boing", "02.07.2026", "Toshkent", "Spain", 9 },
//                      {"Airbus", "12.09.2026", "Toshkent", "Japan", 6 },
//                      {"boing", "31.10.2026", "Toshkent", "Istanbul", 5 }
//                      };

// for(int i=0;i<5;i++){
//     if(atoi(reys[i].uchish_sanasi+3)>5 && atoi(reys[i].uchish_sanasi+3)<9){
//         printf("samalyot turi  %s, uchish sanasi %s,  uchish shaxri %s, qo'nish shaxri %s, uchish soati %d\n ", reys[i].turi, reys[i].uchish_sanasi, reys[i].uchish_shaxri, reys[i].qonish_shaxri, reys[i].uchish_soati );
//     }
// }


// 3.

// AEROPORT    reys[5]={{"boing", "12.02.2026", "Istanbul", "Toshkent", 2.5 },
// {"Airbus", "26.06.2026", "Toshkent", "USA", 12.0 },
// {"boing", "02.07.2026", "Toshkent", "Spain", 9.5 },
// {"Airbus", "12.09.2026", "Japan", "Toshkent", 6.4 },
// {"boing", "31.10.2026", "Toshkent", "Istanbul", 5.2 }
// };
// for(int i=0;i<5;i++){
//  if(reys[i].uchish_soati>=2 && reys[i].uchish_soati<=3 && strcmp(reys[i].qonish_shaxri, "Toshkent")==0){
// printf("samalyot turi  %s, uchish sanasi %s,  uchish shaxri %s, qo'nish shaxri %s, uchish soati %g\n ", reys[i].turi, reys[i].uchish_sanasi, reys[i].uchish_shaxri, reys[i].qonish_shaxri, reys[i].uchish_soati );
// }
        }








