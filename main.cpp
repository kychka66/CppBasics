

#include <iostream>

using namespace std;


int main()
{
    int number;
    cout << " enter months" << " >  ";
    cin >> number;
    if (number < 1)
    {
        cout << "Error 404";
        if (number > 12)
        {
            cout << "Error 404";
        }
        return 1; // or exit;
    } else if (number == 1)
    {
        cout << "January" << " - ";
        if (number == 1)
            cout << "Winter";
    } else if (number == 2)
    {
        cout << "February" " - ";
        if (number == 2)
            cout << "Winter";
    } else if (number == 3)
    {
        cout << "March" " - ";
        if (number == 3)
            cout << " Spring ";
    } else if (number == 4)
    {
        cout << "April" " - ";
        if (number == 4)
            cout << " Spring ";
    } else if (number == 5)
    {
        cout << " May " " - ";
        if (number == 5)
            cout << " Spring ";
    } else if (number == 6)
    {
        cout << " June " " - ";
        if (number == 6)
            cout << " Summer ";
    } else if (number == 7)
    {
        cout << " July " " - ";
        if (number == 7)
            cout << " Summer ";
    } else if (number == 8)
    {
        cout << " August " " - ";
        if (number == 8)
            cout << " Summer ";
    } else if (number == 9)
    {
        cout << " September " " - ";
        if (number == 9)
            cout << " Autumn ";
    } else if (number == 10)
    {
        cout << " October " " - ";
        if (number == 10)
            cout << " Autumn ";
    } else if (number == 11)
    {
        cout << " November " " - ";
        if (number == 11)
            cout << " Autumn ";
    } else if (number == 12)
    {
        cout << " December12 " " - ";
        if (number == 12)
            cout << " Autumn ";
    }
    return 0;
}





