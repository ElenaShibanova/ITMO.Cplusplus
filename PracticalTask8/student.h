#pragma once
#include <string>
using namespace std;

class Student
{
public:
	// ����������� ������ Student
	Student(string, string);
	// ������ ������ � �������� � ����
	void save();
	// ���������� ������ Student
	~Student();
	// ��������� ����� ��������
	void set_name(string);
	// ��������� ����� ��������
	string get_name();
	// ��������� ������� ��������
	void set_last_name(string);
	// ��������� ������� ��������
	string get_last_name();
	// ��������� ������������� ������
	void set_scores(int[]);
	// ��������� �������� �����
	void set_average_score(double);
	// ��������� �������� �����
	double get_average_score();

	class ExScore //����� ����������
	{
	public:
		string origin; //��� ����� �������
		int iValue; //��� �������� ���������� ��������
		ExScore(string, int);
		
	};
private:
	// ������������� ������
	int scores[5];
	// ������� ����
	double average_score;
	// ���
	string name;
	// �������
	string last_name;
};

