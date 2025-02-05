#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
// функция сортировки пузырьком
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // если текущий элемент больше следующего, меняем их местами
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    // исходный массив
    vector<int> array = { 12, 2145, 8, 4016, 4, 2, 1, 1000, 3, 10004, 10, 15, 235, 6 };

    // сортируем пузырьком
    bubbleSort(array);

    // вывод отсортированного массива
    cout << "Изначальный массив: {12, 2145, 8, 4016, 4, 2, 1, 1000, 3, 10004, 10, 15, 235, 6}" << endl;
    cout << "" << endl;
    cout << "Отсортированный массив: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

