#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

pair<bool, double> CalcMedian(vector<double> samples) {
    // проверяем, пуст ли вектор
    if (samples.empty()) {
        return { false, 0 };
    }

    // сортируем вектор
    sort(samples.begin(), samples.end());

    // определяем размер вектора
    size_t size = samples.size();

    // если количество элементов нечётное
    if (size % 2 == 1) {
        // Медиана — средний элемент
        return { true, samples[size / 2] };
    }
    else {
        // если количество элементов чётное
        double median = (samples[size / 2 - 1] + samples[size / 2]) / 2.0;
        return { true, median };
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int size;
    cin >> size;
    vector<double> samples;
    for (int i = 0; i < size; ++i) {
        double sample;
        cin >> sample;
        samples.push_back(sample);
    }

    pair<bool, double> result = CalcMedian(samples);
    if (result.first) {
        cout << "Результат: " << result.second << endl;
    }
    else {
        cout << "Empty vector"s << endl;
    }
}