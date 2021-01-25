#include "Files.h"

using namespace std;

void open_to_read(ifstream& file)
{
    string name;
    while (1)
    {
        cout << "Enter name of the file to read" << endl;
        cin >> name;
        file.open(name);
        if(file.is_open())
            break;
        else
            cout << "File is not open. Try again" << endl;
    }
}

void open_to_write(ofstream& file)
{
    string name;
    while (1)
    {
        cout << "Enter name of the file to write" << endl;
        cin >> name;
        file.open(name);
        if(file.is_open())
            break;
        else
            cout << "File is not open. Try again" << endl;
    }
}

void fill_array_from_file(int *& array, int size, ifstream& file)
{
    for (int i = 0; i < size; i++)
    {
        file >> array[i];
    }
}

void write_array_to_file(int * array, int size, ofstream& file)
{
    for (int i = 0; i < size; i++)
        file << array[i] << " ";
}
