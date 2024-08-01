#include <iostream>

void perhitunganBerulang(int mulai, int n);

int main()
{
    int n;

    std::cin >> n;

    perhitunganBerulang(1, n);
    std::cout << std::endl;
    perhitunganBerulang(2, n);

    return 0;
}

void perhitunganBerulang(int mulai, int n)
{
    for (int i = mulai; i <= n; i += 2)
        std::cout << i << " ";
}