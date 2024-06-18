#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "*********** Welcome to Number Guessing Game *************" << endl;
    int num, count = 0;
    int ans;
    for (int i = 0; i <= 1; i++)
    {
        num = rand() % 1000;
    }
    cout << "Enter A number between 0 to 1000: ";
    while (ans != num)
    {
        cin >> ans;
        count++;
        if (ans > num)
            cout << "enter a small number: ";
        else if (ans < num)
            cout << "enter a large number: ";
        else
            break;
    }
    cout << "Congratulations you have guessed a number in " << count << " times! Successfully";

    return 0;
}