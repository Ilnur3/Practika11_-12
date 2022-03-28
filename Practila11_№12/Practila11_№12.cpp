#include <iostream>
#include <Windows.h>
#include <string>
#include <list>
#include <iterator>

using namespace std;

//сорртировка по убыванию
bool compare(const string& first, const string& second)
{
    return (first.length() > second.length());
}

//добавление элемента к списку
void addElem(list <string>& myList) {
    string answer;
    string product;
    do {
        cout << "Хотите добавить что-то к списку покупок? (-/+) ";
        cin >> answer;
        if (answer == "+") {
            cout << "Что хотите добавить: ";
            cin >> product;
            myList.push_back(product);
        }

        else if (answer == "-") break;
        else cout << " Введите + или - " << endl;

    } while (answer == "+");
}

//вывод на экран 
void print(list <string>& myList) {
    for (auto it = myList.begin(); it != myList.end(); it++) {
        cout << *it << "  ";
    }
}


int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    list <string> myList;
    myList = { "телефизор", "холодильник", "чайник", "стул" };
    myList.sort(compare);

    addElem(myList);
    myList.sort(compare);
    cout << " Список состоит из : ";
    print(myList);

    return 0;
}

