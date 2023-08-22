package org.example;

public class Main {
    public static void main(String[] args) {
        
        // Объявляем массив
        int[] array = {8, 4, 6, 9, 2, 7, 1};

        // Сортируем
        for (int j = 0; j < array.length; ++j) {
            for (int i = 0; i < array.length - 1 - j; ++i) {
                if (array[i] > array[i + 1]) {
                    int tmp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = tmp;
                }
            }
        }

        // Выводим результат
        for (int i = 0; i < array.length; ++i) {
            System.out.print(array[i] + " ");
        }
    }
}
