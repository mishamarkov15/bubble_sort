// Объявляем массив
let array = [8, 4, 6, 9, 2, 7, 1];

// Сортируем
for (let j = 0; j < array.length; ++j) {
    for (let i = 0; i < array.length - 1 - j; ++i) {
        if (array[i] > array[i + 1]) {
            [array[i], array[i + 1]] = [array[i + 1], array[i]];
        }
    }
}

// Выводим результат
console.log(array.join(' '));
