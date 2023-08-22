#include <stdio.h>

int main() {
    // Объявляем массив
    const int size = 7;
    int array[] = {8, 4, 6, 9, 2, 7, 1};

    // Сортируем
    for (int j = 0; j < size; ++j) {
        for (int i = 0; i < size - 1 - j; ++i) {
            if (array[i] > array[i + 1]) {
                int tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
            }
        }
    }

    // Выводим результат
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
}
