#include <iostream>
#include <vector>
using namespace std;

void search(const vector<int> &list, int number)
{
    int position = -1;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i] == number)
        {
            position = i;
            break;
        }
    }
    if (position != -1)
    {
        cout << "found element " << number << " at index " << position << endl;
    }
    else
    {
        cout << "Element " << number << " not found!" << endl;
    }
}

int main()
{
    int size, number;

    vector<int> list(size);
    cin >> size;
    cin >> number;

    for (int i = 0; i < size; i++)
        cin >> list[i];

    search(list, number);

    return 0;
}