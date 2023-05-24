#pragma once

#include <iostream>

class DynamicArray {
private:
    int* data;
    int size;

public:
    // Конструкторы
    DynamicArray() {
        size = 0;
        data = new int[10];
    }

    DynamicArray(int size) {
        this->size = size;
        data = new int[size];
    }

    DynamicArray(int size, int* arr) {
        this->size = size;
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = arr[i];
        }
    }

    DynamicArray(const DynamicArray& other) {
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }

    // Деструктор
    ~DynamicArray() {
        delete[] data;
    }

    // Методы доступа к элементам массива
    // возвращает ссылку на элемент массива, который можно изменять (для arr[0] = 3)
    int& operator[](int index) {
        return data[index];
    }

    // возвращает константную ссылку => можно только просматривать, присваивать int val = arr[0]
    const int& operator[](int index) const {
        return data[index];
    }

    // Методы изменения размера массива
    void resize(int newSize) {
        int* newData = new int[newSize];
        int minSize = (newSize > size) ? size : newSize;
        for (int i = 0; i < minSize; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        size = newSize;
        data = newData;
    }

    DynamicArray& operator=(const DynamicArray& other) = delete;

    // Метод сохранения значения в ячейку
    void setValue(int index, int value) {
        data[index] = value;
    }

    // Метод получения элемента
    int getValue(int index) const {
        return data[index];
    }

    // Метод получения размера массива
    int getSize() const {
        return size;
    }
};