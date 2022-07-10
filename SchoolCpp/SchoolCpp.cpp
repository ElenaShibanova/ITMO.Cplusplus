// Практика 12; практика 13, контрольное задание
#include <iostream>
#include <vector>
#include <windows.h>
#include "human.h"
#include "student.h"
#include "teacher.h"

void ShowInfo(const human* hum) {
	std::cout << hum->get_info() << std::endl;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// Оценкистудента
	std::vector<int> scores;
	// Добавление оценок студента в вектор
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	student* stud = new student("Петров", "Иван", "Алексеевич", scores);
	ShowInfo(stud);
	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	ShowInfo(tch);
	return 0;
}
