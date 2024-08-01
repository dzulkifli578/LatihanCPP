#include <iostream>
#include <string>

bool apakahTahunKabisat(int tahun);
bool periksaBulan(int bulan);
bool periksaHari(int tanggal, int bulan, int tahun);

int main()
{
    int tanggal, bulan, tahun;
    std::string bulanan[13] = {"", "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

    std::cin >> tanggal >> bulan >> tahun;
    periksaHari(tanggal, bulan, tahun) ? std::cout << tanggal << " " << bulanan[bulan] << " " << tahun << std::endl : std::cout << "TIDAK TERSEDIA" << std::endl;

    return 0;
}

bool apakahTahunKabisat(int tahun)
{
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
        return true;

    return false;
}

bool periksaBulan(int bulan)
{
    if (bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12)
        return true;

    return false;
}

bool periksaHari(int tanggal, int bulan, int tahun)
{
    if (apakahTahunKabisat(tahun) && bulan == 2 && tanggal > 29)
        return false;
    else if (!apakahTahunKabisat(tahun) && bulan == 2 && tanggal > 28)
        return false;
    else if (periksaBulan(bulan) && tanggal > 31)
        return false;
    else if (!periksaBulan(bulan) && tanggal > 30)
        return false;
    else
        return true;
}