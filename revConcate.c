#include <stdio.h>
#include <string.h>

int main()
{
  // inisialisasi variabel
  char str1[100];
  char str2[100];
  char str3[100];
  char concatenatedStr[300]; // Array untuk menyimpan hasil penggabungan

  printf("kalimat 1 = ");
  scanf("%s", str1);

  printf("kalimat 2 = ");
  scanf("%s", str2);
  
  printf("kalimat 3 = ");
  scanf("%s", str3);

  // Concatenate Strings
  strcpy(concatenatedStr, str1);
  strcat(concatenatedStr, " ");
  strcat(concatenatedStr, str2);

  strcat(concatenatedStr, " ");

  strcat(concatenatedStr, str3);

  // Display Concatenated String
  printf("Gabungan 3 buah inputan kalimat =  %s\n", concatenatedStr);

  // Calculate and Display Lengths
  int length_str1 = strlen(str1);
  int length_str2 = strlen(str2);
  int length_str3 = strlen(str3);
  int length_concatenatedStr = strlen(concatenatedStr);

  // Reverse the Concatenated String
  int length = length_concatenatedStr;
  int i, j;
  for (i = 0, j = length - 1; i < j; i++, j--)
  {
    // Swap characters at positions i and j
    char temp = concatenatedStr[i];
    // Ganti karakter pada posisi i dengan karakter pada posisi j

    concatenatedStr[i] = concatenatedStr[j];
    // Ganti karakter pada posisi j dengan karakter yang telah disimpan

    concatenatedStr[j] = temp;
  }

  // Display Reversed String
  printf("Hasil membalik kalimat gabungan = %s\n", concatenatedStr);
  printf("Jumlah Huruf kalimat pertama = %d\n", length_str1);
  printf("Jumlah Huruf kalimat kedua = %d\n", length_str2);
  printf("Jumlah Huruf kalimat ketiga = %d\n", length_str3);
  printf("Total Jumlah huruf = %d\n", length_concatenatedStr);

  return 0;
}
