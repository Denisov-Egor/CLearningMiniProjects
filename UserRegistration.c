#include <stdio.h>

int main(void)
{
  char name;
  int age;
  double height;
  double weight;

  printf("========== РЕГИСТРАЦИЯ ПОЛЬЗОВАТЕЛЯ ==========\n");

  printf("Введите имя: ");

  if (scanf(" %c", &name) != 1)
  {
    printf("Ошибка ввода.\n");
    return 1;
  }

  printf("Введите возраст: ");
  if (scanf("%d", &age) != 1)
  {
    printf("Ошибка ввода.\n");
    return 1;
  }
  
  printf("Введите рост (см): ");

  if (scanf("%lf", &height) != 1)
  {
    printf("Ошибка ввода.\n");
    return 1;
  }
  
  printf("Введите вес (кг): ");

  if (scanf("%lf", &weight) != 1)
  {
    printf("Ошибка ввода.\n");
    return 1;
  }
  printf("\n========== ДАННЫЕ ПОЛЬЗОВАТЕЛЯ ==========\n");

  printf("%-15s %c\n", "Имя:", name);
  printf("%-15s %d лет\n", "Возраст:", age);
  printf("%-15s %.2f см\n", "Рост:", height);
  printf("%-15s %.2f кг\n", "Вес:", weight);

  printf("=========================================\n");
  printf("Статус: регистрация завершена успешно.\n");
}