#include <iostream>
#include <fstream>
#include "ONP.h"
#include "Files.h"
#include "Helper_functions.h"

using namespace std;

int main(int argc, const char * argv[])
{
    string str;
    int numOfDataSet;
    ifstream file;
    open_to_read(file);
    file >> numOfDataSet;
    getline(file, str);
    while (numOfDataSet != 0)
    {
        getline(file, str);
        switch (Switch(str))
        {
            case 0:
                cout << "ONP: ";
                str = clean_string(str);
                INF2ONP(str);
                break;
            case 1:
                cout << "INF: ";
                str = clean_string(str);
                ONP2INF(str);
                break;
        }
            numOfDataSet--;
    }
    file.close();
    return 0;
}
