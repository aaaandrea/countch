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

    // Each entry is a pair object,
    // a pair object has two publically accessible fields (called "data members" in C++):
        // first (which, for map objects, holds the key) and
        // second (which holds the value).
        {
        switch (it->first)
        // Some special characters: \n is newline; \r is carriage return; \t is tab.
            {
            case '\r': cout << "\\r"; break; // we send the printed representation of data to cout with <<
            // we can "chain" data to send to cout with multiple <<
            case '\t': cout << '\\t'; break;
            // data can be sent from cin to variables using >>
                // eg. if we wanted to send data from cin to a str variable until
                // we reached the end of a file we could use this while loop:
                    // string str;
                    // while (cin >> str)
                    //     {
                    //         do something with str...
                    //     }
            case '\n': cout << "\\n"; break;
            case ' ': cout << "Space"; break;
            default: cout << it->first;
            }
        cout << "\t" << it->second << ((i%4) ? "\t" : "\n");
        }
        // Iterators return pointers to objects,
        // so to access the first and second fields from the current iterator pointer,
        // we use it->first and it->second.
    //cout << freqs;
}
