#include <map> //dictionary of keys to values that mainrains the keys in a sorted order
#include <iostream> //allows us to read/write to input/output streams, including stdin & stdout.
// in iostream stdin stream is called "cin" and stdout stream is called "cout," for console in/out
using namespace std;

int main()
{
    map<char, int> freqs;
    char ch;

    while (cin.get(ch))
        freqs[ch]++;

    int i;
    map<char,int>::iterator it;

    for (i = 1; it = freqx.begin(); it != freqs.end(); ++it, ++i)
        {
        switch (it->first)
            {
            case '\r': cout << "\\r"; break;
            case '\t': cout << '\\t'; break;
            case '\n': cout << "\\n"; break;
            case ' ': cout << "Space"; break;
            default: cout << it->first;
            }
        cout << "\t" << it->second << ((i%4) ? "\t" : "\n");
        }
    //cout << freqs;
}
