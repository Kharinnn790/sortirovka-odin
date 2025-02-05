#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int count;
    cin >> count;

    // вектор пар, где первый элемент — возраст, второй — имя
    vector<pair<int, string>> people;

    for (int i = 0; i < count; ++i) {
        string name;
        int age;
        cin >> name >> age;
        people.push_back({ age, name });
    }

    // сортировка в порядке убывания. для этого используем лямбда-функцию, которая сравнивает первые элементы пар (●'◡'●)
    sort(people.begin(), people.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
        return a.first > b.first;
        });

    // вывод имен в порядке убывания возраста
    for (const auto& person : people) {
        cout << person.second << endl;
    }

    return 0;
}

