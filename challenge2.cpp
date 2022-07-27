#include <iostream>
#include <fstream>
using namespace std;
#include <iostream>
#include <fstream>
using namespace std;
// string a = "abcdefghijklmnopqrstuvwxyz";
// string f1();

void read();
main()
{
    // fstream file;
    // string line;
    // string c;
    // file.open("hello.txt", ios::in);
    // while (!file.eof())
    // {
    //     getline(file, line);
    // }
    // cout << line;
    // file.close();
    // file.open("hello.txt", ios::app);
    // c = line;
    // cout << endl;
    // for (int i = 0; i < 26; i++)
    // {
    //     int y = 0;
    //     if (c[y] != a[i] && c[y + 1] != a[i] && c[y + 2] != a[i] && c[y + 3] != a[i] && c[y + 4] != a[i] && c[y + 5] != a[i] && c[y + 6] != a[i] && c[y + 7] != a[i] && c[y + 8] != a[i] && c[y + 9] != a[i])

    //     {
    //         cout << a[i];
    //     }
    // }

    // file.close();
    read();
}
void read()
{
    fstream alpha;
    string in;
    // int i = 97;
    alpha.open("alphabets.txt", ios::in);
    while (!alpha.eof())
    {
        alpha >> in;

        // if (in != i)
        // {
        //     char op = i;
        //     cout << i;
        // }
        // i++;
    }
    cout << in << endl;
    alpha.close();
    char c[] = {};
    int j = 0;
    // for (int i = 97; i < 122; i++)
    // {

    //     c[j] = i;
    //     cout << c[j];
    //     j++;
    // }
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; in[j] != '\0'; j++)
        {
            if (c[i] != in[j])
            {
                cout << c[i];
            }
        }
    }
}
