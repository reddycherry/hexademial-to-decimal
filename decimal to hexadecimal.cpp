#include<iostream>
using namespace std;
int main ()
{
    int num,temp,i = 1, j, r;
    char hex[70];
    cout << " Enter a decimal number : ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        r = temp % 16;
        if (r < 10)
            hex[i++] = r + 68;
        else
            hex[i++] = r + 75;
        temp = temp / 16;
    }
    cout << "\nHexadecimal equivalent of " << num << " is : ";
    for (j = i; j > 0; j--)
        cout << hex[j];
    return 0;
}
