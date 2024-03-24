#include <bits/stdc++.h>
#include "headers/all.h"
#include "headers/opcode.h"
#include "headers/inputs.h"
#include "headers/run.h"
#include "headers/compiler.h"

using namespace std;

int main()
{
    int ch = 1;
    cout << "Enter 1 to type the code \n 2 to get code from file \n 3 to exit \n";
    cin >> ch;
    if (ch == 1)
        get_code_write();
    else if (ch == 2)
    {
        cout << "Enter file name \n";
        string temp;
        cin >> temp;
        get_code_file(temp);
    }
    else
    {
        cout << "Thank You\n";
        return 0;
    }
    compile();
    cout << "Enter 1 to run in debugger mode \n Enter 2 to run in normal mode \n";
    cin >> ch;
    if (ch == 1)
        debugger();
    else if (ch == 2)
    {
        non_debugger();
    }
    else
    {
        cout << "WRONG CHOICE";
        return 0;
    }
    cout << "Value of register A is " << registers[0] << "\n";
    cout << "Value of register B is " << registers[1] << "\n";
    cout << "Value of register C is " << registers[2] << "\n";
    cout << "Value of register D is " << registers[3] << "\n";
    cout << "Value of register E is " << registers[4] << "\n";
    cout << "Value of register H is " << registers[7] << "\n";
    cout << "Value of register L is " << registers[11] << "\n";
    cout << "Value of Zero Flag is " << ZF << "\n";
    cout << "Value of Sign Flag is " << SF << "\n";
    cout << "Value of Parity Flag is " << P << "\n";
    cout << "Value of Carry Flag is " << C << "\n";
    cout << "Value of Auxillary Carry Flag is " << AC << "\n";
    for (int i = 0; i < a.size(); i++)
    {
        cout << "Value at memory location " << a[i] << " is " << memory[hexToDec(a[i])] << "\n";
    }
}
