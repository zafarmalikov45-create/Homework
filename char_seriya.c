#include <stdio.h>
#include "ctype.h"
#include "string.h"
int main (){
// char matn[200];
// int count=0;


// printf("MATN KIRITING:");
// scanf("%[^\n]", matn);


// for (int x=1; matn[x]; x++){
//     if (matn[x] == ' '){
//         count++;
//     }
// }

// printf("SOZLAR SONI: %d", count);



// char matn[200];
// int count=0;
// printf("MATNI KIRITING: ");
// scanf("%[^\n]", matn);

// for (int x=0;  matn[x]; x++){
//     if (isalpha(matn[x]) && (x==0 || matn[x-1]== ' ')){
//         count++;
//     }
// }

// printf("%d - ta katta harf bilan boshlangan soz bor", count);



// char matn [200];
// int count =0;



// while (1){
//     scanf("%s", matn);
//     if (strcmp(matn, "stop")==0)
//     break;

//     if (count%5 ==0){
//    matn[0]=toupper(matn[0]);
//     }

//  printf("%s", matn);
// count++;

//  if(count % 5 == 0) {
//  printf(".\n");
// } else {
//  printf(" ");
//  }
//  }

// if(count % 5 != 0)
//  printf(".\n");



// char parol[200];

// while(1){
//     int katta=0, kichik =0, raqam=0, belgi=0, uzunlik=0;
//      printf("PAROLNI KIRITING: ");
//     scanf( "%s", parol);


//       for (int i = 0; parol[i] != '\0'; i++) {
//        char h = parol[i];
//        uzunlik++;

//      if (h >= 'A' && h <= 'Z') katta = 1;
//      else if (h >= 'a' && h <= 'z') kichik = 1;
//      else if (h >= '0' && h <= '9') raqam++;
//      else if (h == '.' || h == '!' || h == '&' || h == '?') belgi = 1;
//         }

//      if (uzunlik >= 8 && katta && kichik && raqam >= 2 && belgi) {
//      printf("STRONG\n");
//      break;
//     }

//      printf("STRONG EMAS\n");

//      if (uzunlik < 8) printf("Uzunligi kamida 8 bo'lsin\n");
//      if (!katta) printf("Kamida 1 ta katta harf kerak\n");
//      if (!kichik) printf("Kamida 1 ta kichik harf kerak\n");
//      if (raqam < 2) printf("Kamida 2 ta raqam kerak\n");
//      if (!belgi) printf("Kamida 1 ta belgi (. ! & ?) kerak\n");
// }



// char gap[1000];
// puts("Gap kiriting...");
// scanf("%[^\n]",gap);
// if(islower(gap[0])){
//         gap[0]=toupper(gap[0]);
//     }
// strcat(gap, ".");
// printf("%s",gap);



// char matn[100];
// int c=1;
// puts("Matn kiriting...");
// scanf("%[^\n]", matn);
// for(int i=0; matn[i]; i++){
//     c=1;
//     for(int x=1+i; matn[x]; x++){
//         if(matn[i]==matn[x]){
//             c++;    
//         }
//     }
//     printf("'%c' -> %d ta ", matn[i], c);
//     puts(" ");
// }



// char matn[100];
// puts("Matn kiriting...");
// scanf("%[^\n]", matn);
// int count=0;
// for(int i=0; matn[i]; i++){
//     if(isalpha(matn[i]) || isdigit(matn[i]) || isspace(matn[i])){

//     }else{
//         count++;
//     }
// }
// printf("Spets belgilar soni %d ta", count);



// char gap[1000];
// puts("Gap kiriting...");
// scanf("%[^\n]", gap);
// for(int i=0; gap[i]; i++){
//     if(isspace(gap[i])){
//         puts(" ");
//     }else{
//         printf("%c",gap[i]);
//     } 
// }



char satr[1000];
puts("Satr kiriting....");
scanf("%[^\n]", satr);
for(int i=0; satr[i]; i++){
    if(satr[i]=='o'){
        printf("o'");
    }else{
        printf("%c", satr[i]);
    }
}





 }
 



