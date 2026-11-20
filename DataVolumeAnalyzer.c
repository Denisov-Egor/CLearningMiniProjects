#include <stdio.h>

int main(void)
{
  double file_size_mb;
  int copy_count;
  double total_size_mb;

  printf("=== АНАЛИЗАТОР ОБЪЁМА ДАННЫХ ===\n\n");

  printf("Введите размер одного файла (MB): ");
  if (scanf("%lf", &file_size_mb) != 1)
  {
    printf("Ошибка: некорректный размер файла.\n");
    return 1;
  }

  if (file_size_mb <= 0)
  {
    printf("Ошибка: размер файла должен быть больше нуля.\n");
    return 1;
  }

  printf("Введите количество копий: ");

  if (scanf("%d", &copy_count) != 1)
  {
    printf("Ошибка: некорректное количество копий.\n");
    return 1;
  }

  if (copy_count <= 0)
  {
    printf("Ошибка: количество копий должно быть больше нуля.\n");
    return 1;
  }

  total_size_mb = file_size_mb * copy_count;

  printf("\n=== ОТЧЁТ ===\n\n");

  printf("Общий объём: %.3f MB\n", total_size_mb);
  printf("Общий объём: %.3f GB\n", total_size_mb / 1000.0);
  printf("Общий объём: %.3f TB\n", total_size_mb / 1000000.0);
}