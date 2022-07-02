#include <iostream> 
#include <windows.h>
#include <string>

//Практика 8, контрольное задание 1
class Time {
public:
    Time(){
        SetAll(0, 0, 0);
    }

    Time(int hours, int minutes, int seconds){
        int s = seconds % 60;
        int m = (minutes + seconds / 60) % 60;
        int h = hours + (minutes + seconds / 60) / 60;
        SetAll(h, m, s);
    }

    void SetAll(int hours, int minutes, int seconds) {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;

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

private:
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Time time1(3, 80, 67);
    Time time2 (1, 67, 5);
    Time sumTime;
    sumTime = time1.PlusTime(time2);
  
    /*time1.ShowTime(t1);
    time2.ShowTime(t2);    
    sumTime.ShowTime(t3);*/

   std::cout << time1.ShowTime()<<std::endl;
   std::cout << time2.ShowTime() << std::endl;
   std::cout << sumTime.ShowTime() << std::endl;
}

