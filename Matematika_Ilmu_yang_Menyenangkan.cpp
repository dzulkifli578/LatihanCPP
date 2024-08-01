#include <iostream>

bool apakahBilanganPrima(int N);

int main()
{
    int N;
    std::cin >> N;

    (apakahBilanganPrima(N) && N < 13) ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
    return 0;
}

bool apakahBilanganPrima(int N)
{
    if (N <= 1) return false;

    for (int i = 2; i * i <= N ; i++)
        if (N % i == 0) return false;

    return true;
}