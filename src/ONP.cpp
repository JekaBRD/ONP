#include "ONP.h"

void INF2ONP (string str)
{
    stack <char> stos;
    map <char, int> prioritets = {
        {'(', -1},
        {'=', 0},
        {'<', 1},
        {'>', 1},
        {'+', 2},
        {'-', 2},
        {'*', 3},
        {'/', 3},
        {'%', 3},
        {'^', 4},
        {'~', 5},
    };
    int i = 0, prioritet;
    while (str[i])
    {
        auto it = prioritets.find(str[i]);
        prioritet = it->second;     //zapisujemy pryorytet wejściowego elementu
        if(!stos.empty())
            it = prioritets.find(stos.top());     //robimy wskaźnik do pryotytetu szczytowego elementu stosu, jeśli taki istnieje
        if (is_operator(str[i]))
            cout << str[i];
        else if (str[i] == '(')
            stos.push(str[i]);
        else if (str[i] == ')')
        {
            while(stos.top() != '(')
            {
                cout << stos.top();
                stos.pop();
            }
            stos.pop();
        }
        else if (stos.empty())
            stos.push(str[i]);
        else if (prioritet > it->second)
            stos.push(str[i]);
        else if (prioritet == it->second)
        {
            if(str[i] == '~' || str[i] == '=' || str[i] == '^')
                stos.push(str[i]);
            else
            {
                cout << stos.top();
                stos.pop();
                stos.push(str[i]);
            }
        }
        else if (prioritet < it->second)
        {
            while (prioritet < it->second)
            {
                cout << stos.top();
                stos.pop();
                it = prioritets.find(stos.top());
            }
            stos.push(str[i]);
        }
        i++;
    }
    write_stack(stos);
}

void ONP2INF (string str)
{
    stack <string> stos;
    map <string, int> prioritets = {
        {"=", 0},
        {"<", 1},
        {">", 1},
        {"+", 2},
        {"-", 2},
        {"*", 3},
        {"/", 3},
        {"%", 3},
        {"^", 4},
        {"~", 5},
    };
    string in, in_next, r1, r2;
    int prioritet, prioritet_next, i = 0;
    while (str[i])
    {
        in = str[i];
        auto it = prioritets.find(in);
        prioritet = it->second;
        if (str[i+1])
        {
            auto it2 = prioritets.find(in_next);
            prioritet_next = it2->second;
        }
        if (is_operator(str[i]))
            stos.push(in);
        else if (!str[i+1])
            connection(stos, str[i]);
        else if (str[i] == '~')
        {
            r1 = in + stos.top();
            stos.pop();
            stos.push(r1);
        }
        else if (is_operator(str[i+1]))
            connection(stos, str[i]);
        else if (!is_operator(str[i+1]))
        {
            if (prioritet <= prioritet_next)
            {
                r1 = stos.top();
                stos.pop();
                r2 = stos.top();
                stos.pop();
                r1 = "(" + r2 + in + r1 + ")";
                stos.push(r1);
            }
            else
                connection(stos, str[i]);
        }
        i++;
    }
    
    cout << stos.top() << endl;
}
