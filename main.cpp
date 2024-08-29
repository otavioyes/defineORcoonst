#include <iostream>

//#define LAST_MONTH 12
/*

Toda vez que eu faço o uso do #define ele gera um temporario onde está cada LAST_MONTH e troca pelo
número 12

Entre o #define e o const em relação a performance, o const deixa o código com uma melhor eficiência pelo fato
de não gerar temporário.
*/

enum class Months  : uint8_t
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    Agost,
    September,
    October,
    November,
    December
};

int main()
{

    Months CurrentMonths = Months::December;

    std::cout << sizeof(Months) << '\n';
    std::cout << "Number: " << static_cast<int>(CurrentMonths) << '\n';


    if (CurrentMonths == Months::January){
        std::cout << "January" << '\n';
    }

    else if (CurrentMonths == Months::February){
        std::cout << "February" << '\n';
    }

    else if (CurrentMonths == Months::March){
        std::cout << "March" << '\n';
    }

    else if (CurrentMonths == Months::April){
        std::cout << "April" << '\n';
    }

    else if (CurrentMonths == Months::May){
        std::cout << "May" << '\n';
    }

    else if (CurrentMonths == Months::June){
        std::cout << "June" << '\n';
    }

    else if (CurrentMonths == Months::July){
        std::cout << "July" << '\n';
    }

    else if (CurrentMonths == Months::Agost){
        std::cout << "Agost" << '\n';
    }

    else if (CurrentMonths == Months::September){
        std::cout << "September" << '\n';
    }

    else if (CurrentMonths == Months::October){
        std::cout << "October" << '\n';
    }

    else if (CurrentMonths == Months::November){
        std::cout << "November" << '\n';
    }

    else if (CurrentMonths == Months::December){
        std::cout << "December" << '\n';
    }

    else {
        std::cout << "Month invalid \n";
    }
}
