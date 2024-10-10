//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {

        int j = 1;
        while (j < n - i)
        {
            cout << " ";
            j++;
        }

        int k = i;
        while (k > 1)
        {
            cout << (i-k)+1;
            k--;
        }

        while (k <= i)
        {
            cout << (i-k)+1;
            k++;
        }
        cout << endl;
    }
}