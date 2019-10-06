//
//  main.cpp
//  Lab1
//
//  Created by Андрей Носов on 24.02.2018.
//  Copyright © 2018 Андрей Носов. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n, lastEl;
    
    // Размер массива
    std::cout << "Input size of array: ";
    std::cin >> n;
    
    // Заполнение массива
    int A[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Input A[" << i+1 << "]: ";
        std::cin >> A[i];
    }
    
    // Чтение массива
    std::cout << "\nEntered array:\n";
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << ' ';
    }
    
    // максимальный элемент в массиве
    lastEl = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > lastEl) {
            lastEl = A[i];
        }
    }
    
    // полный массив
    int fullA[lastEl];
    for (int i = 0; i < lastEl; i++) {
        fullA[i] = i+1;
    }
    
    // Полный массив
    std::cout << "\nFull Array:\n";
    for (int i = 0; i < lastEl; i++) {
        std::cout << fullA[i] << ' ';
    }
    
    // Находим пустые символы
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < lastEl; j++) {
            if (A[i] == fullA[j]) {
                fullA[j] = 0;
            }
        }
    }
    
    // Ответ массив
    std::cout << "\nAnswer Array:\n";
    for (int i = 0; i < lastEl; i++) {
        if (fullA[i] != 0) {
            std::cout << fullA[i] << ' ';
        }
    }
    
    return 0;
}
