#include "Helper_functions.h"

void connection(stack <string> & stos, char in)
{
    string r1, r2;
    r1 = stos.top();
    stos.pop();
    r2 = stos.top();
    stos.pop();
    r1 = r2 + in + r1;
    stos.push(r1);
}

int is_operand(char i)
{
    if (i == '=' || i == '>' || i == '<' || i == ')' || i == '(' || i == '+' || i == '-' || i == '*' || i == '/' ||
        i == '%' || i == '^' || i == '~')
        return 1;
    else
        return 0;
}

int is_operator(char i)
{
    if (i >= 97 && i <= 122)
        return 1;
    else
        return 0;
}

void write_stack (stack <char> & stos)
{
    if (!stos.empty())
    {
        cout << stos.top();
        stos.pop();
        write_stack(stos);
    }
    else
        cout << endl;
}

string clean_string(string in)
{
    string str;
    for (int i = 0; i < in.length(); i++)
    {
        if (is_operand(in[i]) || is_operator(in[i]))
            str = str + in[i];
        else
            continue;
    }
    return str;
}

int Switch (string str)
{
    string temp;
    for (int i = 0; i < 4; i++)
    {
        temp = temp + str[i];
    }
    if (temp == "INF:")
        return 0;
    else if (temp == "ONP:")
        return 1;
    else
    {
        cout << temp << endl;
        exit(0);
    }
}

