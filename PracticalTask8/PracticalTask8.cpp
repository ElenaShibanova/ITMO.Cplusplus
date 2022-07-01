﻿#include <iostream>
#include <string>
#include "student.h"
using namespace std;

int main()
{   
    string name;
    string last_name;
    int scores[5];

    // Ввод имени с клавиатуры
    cout << "Name: ";
    getline(cin, name);
    // Ввод фамилии
    cout << "Last name: ";
    getline(cin, last_name);

    //Student student01;
    Student* student02 = new Student(name, last_name);
    
    // Сумма всех оценок
    int sum = 0;
    // Ввод промежуточных оценок
    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        // суммирование
        sum += scores[i];
    }

    //// Сохранение имени и фамилии в объект класса Student
    //student01.set_name(name);
    //student01.set_last_name(last_name);
    //// Сохранение промежуточных оценок в объект класса Student
    //student01.set_scores(scores);

    //double average_score = sum / 5.0;
    //// Сохранение среднего балла в объект класса Student
    //student01.set_average_score(average_score);

    //cout << "Average ball for " << student01.get_name() << " "
    //    << student01.get_last_name() << " is "
    //    << student01.get_average_score() << endl;

    // Сохраняем промежуточные оценки в объект класса Student
    student02->set_scores(scores);
    // Считаем средний балл
    double average_score = sum / 5.0;
    // Сохраняем средний балл в объект класса Student
    student02->set_average_score(average_score);
    // Выводим данные по студенту
    cout << "Average ball for " << student02->get_name() << " "
        << student02->get_last_name() << " is "
        << student02->get_average_score() << endl;
    delete student02;
    return 0;
}