#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int a[30];
    int kd = 0;
    cout << "¬несите данные о количестве осадков за каждый день марта\n";
    for (int i = 0; i < 30; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            kd++;
    }
    cout << " оличество дней без осадков: " << kd << endl;

    if (kd == 10)
        cout << "¬ерно, что осадков не было 10 дней в мес€ц" << endl;
    else
        cout << "Ќеверно, что осадков не было 10 дней в мес€ц" << endl;

    return 0;
}