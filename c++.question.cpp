#include <iostream>
using namespace std;
int main()
{
    int N;
    float price;
    float totalSales = 0;
    int costlyCount = 0;

    cout << "Enter number of medicines sold: ";
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cout << "Enter price of medicine " << i + 1 << ": ";
        cin >> price;

        totalSales += price;

        if(price > 900)
        {
            cout << "Costly Medicine\n";
            costlyCount++;
        }
    }

    cout << "\nTotal Sales = " << totalSales << endl;
    cout << "Number of Costly Medicines = " << costlyCount << endl;

    return 0;
}
