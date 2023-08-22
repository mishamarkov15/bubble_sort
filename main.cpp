#include <iostream>

int main() {
    // Объявляем массив
    const int size = 7;
    int array[size] = {8, 4, 6, 9, 2, 7, 1};

    // Сортируем
    for (int j = 0; j < size; ++j) {
        for (int i = 0; i < size - 1 - j; ++i) {
            if (array[i] > array[i + 1]) {
                std::swap(array[i], array[i + 1]);
            }
        }
    }

    // Выводим результат
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << ' ';
    }
    return 0;
}
