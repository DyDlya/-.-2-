#include "Solve.h"

int min_coins(std::vector<int> coins, int target, std::vector<int>& result)
{
    int count = 0;
    result.clear();
    std::sort(coins.begin(), coins.end()); // ����������� �� �����������

    for (auto coin = coins.rbegin() // ���������� �� ����������
        ;      coin != coins.rend()   // �� ����������
        && target > 0             // ���� �������� ������ �������
        ;    ++coin)
    {
        if (target >= (*coin))
        {
            count += target / (*coin);
            target = target % (*coin); // ������� �� ������� �� coin        
            result.push_back(*coin);
        }
    }

    return count;
}