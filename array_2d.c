#include <stdio.h>
#include <ctype.h>

int main(){
// char ism[50], familiya[50];
// char ism_familiya[200];


// printf("ISMINGIZNI KIRITING: ");
// scanf("%s", ism);



// printf("Famliyangizni kiriting: ");
// scanf("%s", familiya);



// printf("Natija: %s %s", ism, familiya);



// char  satr[100];
// printf("MATNI KIRITING: ");
// scanf("%[^\n]", satr);

// int raqam_count=0, harf_count=0;


// for (int x=0; satr[x]; x++){
//     if (isdigit(satr[x])){
//         raqam_count++;
//     }else if (isalpha(satr[x]) ){
//         harf_count++;
//     }
// }

// printf("RAQAMLAR SONI - %d\n", raqam_count);
// printf("HARFLAR SONI - %d\n", harf_count);



// for(int i=0; satr[i]; i++){
//     if (isdigit(satr[i])) {
//             printf("%c - raqam\n", satr[i]);
//         } 
//         else if (isalpha(satr[i])) {
//             printf("%c - harf\n", satr[i]);
//         }
//     }



// char matn[200];
// char kichik[200];
// char katta[200];



// printf("MATNI KIRITING: ");
// scanf("%[^\n]", matn);

// int katta_count=0, kichik_count=0;

// for(int x=0; matn[x]!= '\0'; x++){
//     kichik[x]= tolower(matn[x]);
//     kichik_count++;
// }
// kichik[kichik_count] = '\0';

// for (int i=0; matn[i]!= '\0'; i++){
//   katta[i]=toupper(matn[i]);
//     katta_count++;
    
// }

// katta[katta_count] = '\0';


//     printf("Satrni kiriting: %s\n", matn);
//     printf("Kichik harf: %s\n", kichik);
//     printf("Katta harf: %s\n", katta);
//     printf("Kichik harflar uzunligi: %d\n", kichik_count);
//     printf("Katta harflar uzunligi: %d\n", katta_count);




// char satr1[100], satr2[100];


// printf("BIRINCHI MATNI KIRITING: ");
// scanf("%[^\n]", satr1);
// printf("IKKINCHI MATNI KIRITING: ");
// scanf(" %[^\n]", satr2);


// int teng=1;

// for (int x=0; satr1[x] != '\0'|| satr2[x] !='\0'; x++){
//     if (satr1[x]!=satr2[x]){
//         teng=0;
//         break;

//     }
    
// }

// if (teng==1){
//     printf("Birlashtirilgan natija:" );
//      for(int i=0; satr1[i] != '\0'; i++)
//     printf("%c", satr1[i]);
//      printf(" ");

//   for(int i = 0; satr2[i] != '\0'; i++)
//  printf("%c", satr2[i]);
//  printf("\n");
// }else {
//     printf("BITLISHTIRILISHNI AMALGA OSHIRISH MUMKUN EMAS\n");
// }



// int satr1_count=0, satr2_count=0;
// int boshliq=0;


// for (int x=0; satr1[x] !='\0'; x++){
// satr1_count++;
//  if(satr1[x] == ' ')
//   boshliq++;
// }

// for(int i = 0; satr2[i] != '\0'; i++) {
// satr2_count++;
//  if(satr2[i] == ' ')
// boshliq++;
// }


// printf("BIRINCHI MATNI UZUNLIGI: %d\n",satr1_count);
// printf("IKKINCHI MATNI UZUNLIGI: %d\n",satr2_count);
// printf("PROBELNI MATNI UZUNLIGI: %d\n", boshliq);



char satr[100];
int i, j, count;


printf("SATRNI KIRITING: ");
scanf("%[^\n]", satr);


for(i = 0; satr[i] != '\0'; i++) {
count = 1;
        
for(j = 0; j < i; j++) {
if(satr[i] == satr[j])
break;
 }

 if(j != i)
  continue;

for(j = i + 1; satr[j] != '\0'; j++) {
 if(satr[i] == satr[j])
 count++;
 }

if(satr[i] == ' ')
 printf("Bo'shliq - %d marta\n", count);
else
 printf("%c - %d marta\n", satr[i], count);
}


}




