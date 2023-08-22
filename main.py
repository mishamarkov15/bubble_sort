def main():
    # Объявляем список
    array = [8, 4, 6, 9, 2, 7, 1]

    # Сортируем
    for j in range(len(array)):
        for i in range(len(array) - 1 - j):
            if array[i] > array[i + 1]:
                array[i], array[i + 1] = array[i + 1], array[i]

    # Выводим результат
    print(*array)


if __name__ == '__main__':
    main()
