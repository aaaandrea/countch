#include <map> //dictionary of keys to values that mainrains the keys in a sorted order
#include <iostream> //allows us to read/write to input/output streams, including stdin & stdout.
// in iostream stdin stream is called "cin" and stdout stream is called "cout," for console in/out
using namespace std;

int main()
{
    map<char, int> freqs; //declares that freqs is a map whose keys are of type char
    //and whose values are of type int
    char ch; //declare a char variable "ch" to use as the key to freqs
    // C++ allows us to get a particular value in this map with freqs[ch]
    //The value is initialized to zero; hence frews['a'] is automatically zero.

    while (cin.get(ch)) //while loop repeatedly calls the get method on cin.
    // get takes on parameter, a char variable.
        freqs[ch]++;
        // If there is a char in the cin, the variable gets that char as its value
        // else the value of the char is set to -
        // any non-zero value is considered true

    int i; //keeps track of the column
    map<char,int>::iterator it; //iterate over all the keys to print out freqs

    for (i = 1; it = freqx.begin(); it != freqs.end(); ++it, ++i)
    //iterator initialized by begin() on an obj, and compl when == to result of calling end()

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
