#include <iostream>
#include <fstream>
using namespace std;
string mos[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "	-.--", "--..", "-.-.-.-"};
string a = "ABCDEFGHIJKLMOPQRSTUVWXYZ";
void f1()
{
    fstream file;
    string line;
    file.open("lol.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
        for (int i = 0; i < line['\0']; i++)
        {
            for (int y = 0; y < a.length(); y++)
            {
                if (line[i] == a[y])
                {
                    cout << mos[y] << " ";
                }
            }
        }
    }
}
main()
{
    f1();
}