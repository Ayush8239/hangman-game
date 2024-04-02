#include <bits/stdc++.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;
void make(int w)
{
    cout << "______________\n";
    if (w == 0)
        cout << "|\n|\n|\n|\n|\n|\n";
    if (w >= 1)
        cout << "|          |\n";
    if (w >= 2)
        cout << "|          O\n";
    if (w >= 3)
        cout << "|          |\n";
    if (w >= 4)
        cout << "|         /";
    if (w >= 5)
        cout << " \\\n";
    cout << endl;
}

int main()
{
    vector<string> movie{"mughal", "sholay", "mother", "ddlj", "kabhikhushikabhiegham", "kuchkuchhotahai", "lagaan", "devdas", "taarezameenpar", "chakde", "omshantiom", "karanarjun", "gadar", "bajirao", "kalhonaaho", "roja", "baahubali", "andazapna", "mainepyar", "humdilde", "dilwale", "amarakbaranthony", "qayamatse", "dhoom", "ghajini", "aamir", "rajababu", "dabangg", "singham", "bodyguard", "ekvillain", "drishyam", "awednesday", "special26", "baby", "pink", "badlapur", "andhadhun", "stree", "bala", "lukachuppi", "kedarnath", "simba", "kabirsingh", "war", "bharat", "tanhaji", "chhichhore", "article15", "uri"};
    srand(time(0));
    int index = rand() % (movie.size()-1);
    cout<<index<<endl;
    return 0;
    string mov = movie[index];

    int movsize = mov.size();
    string ans;
    for (int i = 0; i < movsize; i++)
    {
        ans += "-";
    }
    char ch;
    int t = 20;
    // make(t);
    int wr = 0;
    while (t--)
    {
        make(wr);
        if (wr == 5)
        {
            cout << "-------WASTED---------\n------YOU LOOSE------";
            break;
        }
        cout << ans;
        cin >> ch;
        bool flag = 1;
        for (int i = 0; i < movsize; i++)
        {
            if (ch == mov[i])
            {
                flag = 0;
                ans[i] = ch;
            }
        }
        if (flag)
        {
            wr++;
        }
        if (mov == ans)
        {
            cout<<ans<<endl;
            cout << "--------You Won---------";
            break;
        }
    }
    if (t == 0)
    {
        cout << "Maximum trying Limit Exceeded...You LOOSE";
    }
}
