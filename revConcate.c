#include <stdio.h>
#include <string.h>

int main() {
    // inisialisasi variabel
    char str1[100];
    char str2[100];
    char str3[100];
    char concatenatedStr[300];  // Array untuk menyimpan hasil penggabungan

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Enter the third string: ");
    scanf("%s", str3);

    // Concatenate Strings
    strcpy(concatenatedStr, str1);  // Salin str1 ke concatenatedStr
    strcat(concatenatedStr, " "); // Tambahkan spasi di akhir concatenatedStr
    strcat(concatenatedStr, str2); // Tambahkan str2 ke akhir concatenatedStr

    strcat(concatenatedStr, " "); // Tambahkan spasi di akhir concatenatedStr
  
    strcat(concatenatedStr, str3);

    // Display Concatenated String
    printf("The concatenated string is: %s\n", concatenatedStr);

    // Calculate and Display Lengths
    int length_str1 = strlen(str1);
    int length_str2 = strlen(str2);
    int length_str3 = strlen(str3);
    int length_concatenatedStr = strlen(concatenatedStr);

 

    // Reverse the Concatenated String
    int length = length_concatenatedStr;
    int i, j;
    // Buat array untuk menyimpan karakter-karakter pada concatenatedStr
    for (i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters at positions i and j
      // 
        char temp = concatenatedStr[i]; // Simpan karakter pada posisi i pada temp
      
        concatenatedStr[i] = concatenatedStr[j]; // Ganti karakter pada posisi i dengan karakter pada posisi j
        concatenatedStr[j] = temp; // Ganti karakter pada posisi j dengan karakter yang telah disimpan
      
    }

    // Display Reversed String
    printf("Reversed string: %s\n", concatenatedStr);
   printf("Length of str1: %d\n", length_str1);
    printf("Length of str2: %d\n", length_str2);
    printf("Length of str3: %d\n", length_str3);
    printf("Length of concatenatedStr: %d\n", length_concatenatedStr);

    return 0;
}

