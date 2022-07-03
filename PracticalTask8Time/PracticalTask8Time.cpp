﻿#include <iostream> 
#include <windows.h>
#include <string>

//Практика 8, контрольное задание 1
class Time {
public:
    Time(){
        SetAll(0, 0, 0);
    }

    Time(int hours, int minutes, int seconds){       

        SetAll(hours, minutes, seconds);
    }

    void SetAll(int hours, int minutes, int seconds) {
        if (hours < 0 or minutes < 0 or seconds < 0)
            throw ExNegativeNumber("Ошибка инициализации объекта Time. Введено отрицательное число.");
        this->hours = hours + (minutes + seconds / 60) / 60;
        this->minutes = (minutes + seconds / 60) % 60;;
        this->seconds = seconds % 60;;

    }
        
    std::string ShowTime() const {
        std::string timeString;
        timeString.append(std::to_string(hours / 10));
        timeString.append(std::to_string(hours % 10));
        timeString.append(":");
        timeString.append(std::to_string(minutes / 10));
        timeString.append(std::to_string(minutes % 10));
        timeString.append(":");
        timeString.append(std::to_string(seconds / 10));
        timeString.append(std::to_string(seconds % 10));

        //std::cout << hours / 10 << hours % 10 << ':' << minutes / 10 << minutes % 10 << ':' << seconds / 10 << seconds % 10 << std::endl;
        return timeString;
    }

    int TimeToSeconds() const{
        return hours * 3600 + minutes * 60 + seconds;
    }

    Time PlusTime(const Time &time) const{
        Time summTime;
        int addInSeconds = TimeToSeconds() + time.TimeToSeconds();
        summTime.hours = addInSeconds / 3600;
        summTime.minutes = (addInSeconds % 3600) / 60;
        summTime.seconds = addInSeconds % 60;
        return summTime;
    }
    class ExNegativeNumber {
    public:
        std::string nameObject;
        ExNegativeNumber(std::string nameObj) : nameObject(nameObj) {}
    };
private:
    int hours;
    int minutes;
    int seconds;
};
class ExNotNumber {
public:
    ExNotNumber() : message("Введён символ, не являющийся целым числом.") { }
    void printMessage() const { std::cout << message << std::endl; }
private:
    std::string message;
};


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int h, m, s;
    try {
        if (!(std::cin >> h >> m >> s))
            throw ExNotNumber();
        Time time1(h, m, s);
        Time time2(-1, 67, 5);
        Time sumTime;
        sumTime = time1.PlusTime(time2);
        std::cout << time1.ShowTime() << std::endl;
        std::cout << time2.ShowTime() << std::endl;
        std::cout << sumTime.ShowTime() << std::endl;
    }
    catch (Time::ExNegativeNumber &ex){
        std::cout << ex.nameObject;
    }
    catch (ExNotNumber& ex)
    {
        ex.printMessage();
    }
    
}

