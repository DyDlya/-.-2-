#include "Solve.h"

int min_coins(std::vector<int> coins, int target, std::vector<int>& result)
{
    int count = 0;
    result.clear();
    std::sort(coins.begin(), coins.end()); // отсортируем по возростанию

    for (auto coin = coins.rbegin() // перебираем от наибольших
        ;      coin != coins.rend()   // до наименьших
        && target > 0             // если поделили нацело выходим
        ;    ++coin)
    {
        if (target >= (*coin))
        {
            count += target / (*coin);
            target = target % (*coin); // остаток от деления на coin        
            result.push_back(*coin);
        }
    }

    return count;
}