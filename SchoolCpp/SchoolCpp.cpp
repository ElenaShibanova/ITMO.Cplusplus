#include <iostream>
#include <vector>
#include <windows.h>
#include "human.h"
#include "student.h"
#include "teacher.h"

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
	std::cout << stud->get_info() << std::endl;

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	std::cout << tch->get_info() << std::endl;

	return 0;
}
