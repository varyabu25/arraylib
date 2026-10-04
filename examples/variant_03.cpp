#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int revenue[] = {
        12500, 9800, 14300, 11700, 15600,
        13200, 8900, 16400, 15100, 12800
    };
    const std::size_t n = sizeof(revenue) / sizeof(revenue[0]);

    std::cout << "Продажи магазина (Вариант 3)\n";
    std::cout << "Количество дней: " << n << "\n\n";

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Общая выручка:            " << arr_sum(revenue, n) << "\n";
    std::cout << "Средняя дневная выручка:  " << arr_average(revenue, n) << "\n";
    std::cout << "Лучший день:              " << arr_max(revenue, n) << "\n";
    std::cout << "Худший день:              " << arr_min(revenue, n) << "\n";
    std::cout << "Медианная выручка:        " << arr_median(revenue, n) << "\n";

    return 0;
}