#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct Item {
        string name;
        int price;
        int quantity;
        int discount;
    };

    Item products[10] = {
        {"Товар_А", 127, 5, 23},
        {"Товар_Б", 543, 5, 45},
        {"Товар_В", 691, 35, 127},
        {"Товар_Г", 912, 91, 533},
        {"Товар_Д", 546, 18, 23},
        {"Товар_Е", 486, 54, 223},
        {"Товар_Ж", 189, 66, 88},
        {"Товар_З", 463, 39, 901},
        {"Товар_И", 238, 25, 167},
        {"Товар_К", 786, 2, 3}
    };

    std::cout << "Входящие данные:\n";
    for(int i=0; i<size(products); i++)
    std::cout << products[i].name << " " << products[i].price << " " << products[i].quantity << " " << products[i].discount << "\n";

    std::cout << "Вычисление:\n";

    for (int i = 0; i < size(products); i++) {
        Item product = products[i];
        int remain = product.discount % product.quantity;
        int div = product.discount / product.quantity;
        if (remain != 0) {
            std::cout << product.name << " " << product.price << " " << product.quantity - remain << " " << div << "\n";
            std::cout << product.name << " " << product.price << " " << remain << " " << div + 1 << "\n";
        }
        else {
            std::cout << product.name << " " << product.price << " " << product.quantity << " " << product.discount << "\n";
        }
    }
    std::cout << "Для выхода нажмите любую клавишу.";
    _getch();
    return 0;
} 
