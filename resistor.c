#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
  char warna1[10], warna2[10], warna3[10], warna4[10];
  int digit1, digit2, digit3, pita;
  float multiplier, resistansi;
  // Menanyakan jumlah pita resistor
  printf("Masukkan jumlah pita resistor (2, 3, 4, atau 5): ");
  scanf("%d", &pita);

  if (pita < 2 || pita > 5)
  {
    printf("Jumlah pita tidak valid!\n");
    return 1;
  }

  // Input untuk pita pertama
  printf("Masukkan warna pita pertama: ");
  scanf("%s", warna1);

  // Input untuk pita kedua
  printf("Masukkan warna pita kedua: ");
  scanf("%s", warna2);

  // Konversi warna pita pertama
  if (strcmp(warna1, "hitam") == 0)
    digit1 = 0;
  else if (strcmp(warna1, "coklat") == 0)
    digit1 = 1;
  else if (strcmp(warna1, "merah") == 0)
    digit1 = 2;
  else if (strcmp(warna1, "jingga") == 0)
    digit1 = 3;
  else if (strcmp(warna1, "kuning") == 0)
    digit1 = 4;
  else if (strcmp(warna1, "hijau") == 0)
    digit1 = 5;
  else if (strcmp(warna1, "biru") == 0)
    digit1 = 6;
  else if (strcmp(warna1, "ungu") == 0)
    digit1 = 7;
  else if (strcmp(warna1, "abu-abu") == 0)
    digit1 = 8;
  else if (strcmp(warna1, "putih") == 0)
    digit1 = 9;
  else
  {
    printf("Warna tidak valid!\n");
    return 1;
  }

  if (strcmp(warna2, "hitam") == 0)
    digit2 = 0;
  else if (strcmp(warna2, "coklat") == 0)
    digit2 = 1;
  else if (strcmp(warna2, "merah") == 0)
    digit2 = 2;
  else if (strcmp(warna2, "jingga") == 0)
    digit2 = 3;
  else if (strcmp(warna2, "kuning") == 0)
    digit2 = 4;
  else if (strcmp(warna2, "hijau") == 0)
    digit2 = 5;
  else if (strcmp(warna2, "biru") == 0)
    digit2 = 6;
  else if (strcmp(warna2, "ungu") == 0)
    digit2 = 7;
  else if (strcmp(warna2, "abu-abu") == 0)
    digit2 = 8;
  else if (strcmp(warna2, "putih") == 0)
    digit2 = 9;
  else
  {
    printf("Warna tidak valid!\n");
    return 1;
  }

  if (pita == 2)
  {
    resistansi = digit1 * 10 + digit2;
    printf("Nilai resistansi: %.2f ohm\n", resistansi);
    return 0;
  }

  printf("Masukkan warna pita ketiga: ");
  scanf("%s", warna3);

  if (strcmp(warna3, "hitam") == 0)
    multiplier = 1.0;
  else if (strcmp(warna3, "coklat") == 0)
    multiplier = 10.0;
  else if (strcmp(warna3, "merah") == 0)
    multiplier = 100.0;
  else if (strcmp(warna3, "jingga") == 0)
    multiplier = 1000.0;
  else if (strcmp(warna3, "kuning") == 0)
    multiplier = 10000.0;
  else if (strcmp(warna3, "hijau") == 0)
    multiplier = 100000.0;
  else if (strcmp(warna3, "biru") == 0)
    multiplier = 1000000.0;
  else if (strcmp(warna3, "emas") == 0)
    multiplier = 0.1;
  else if (strcmp(warna3, "perak") == 0)
    multiplier = 0.01;
  else
  {
    printf("Warna tidak valid!\n");
    return 1;
  }

  resistansi = (digit1 * 10 + digit2) * multiplier;

  printf("Nilai resistansi: %.2f ohm\n", resistansi);
  getch();
  return 0;
}
