#include <iostream>
#include <string>
using namespace std;

int main(){
string names[5];
    int ages[5];
    string key;

    string tempName;
    int tempAge;


    for(int i = 0; i < 5; i++)
    {
        cout << "Enter name: ";
        cin >> names[i];

        cout << "Enter age: ";
        cin >> ages[i];
    }


    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4 - i; j++)
        {
            if(names[j] > names[j + 1])
            {

                tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;


                tempAge = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = tempAge;
            }
        }
    }


    cout << "Enter name to search: ";
    cin >> key;

    int low = 0;
    int high = 4;


    for(int i = 0; low <= high; i++)
    {
        int mid = (low + high) / 2;

        if(names[mid] == key)
        {
            cout << names[mid]
                 << " was found and is aged "
                 << ages[mid];

            return 0;
        }

        else if(key < names[mid])
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }

    cout << "Name not found";

    return 0;
}


