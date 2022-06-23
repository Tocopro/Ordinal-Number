#include <iostream>
using namespace std;

void ordinal_number()
{
    int request;
    cout << "Enter the Number between 1 and 12 to get the ordinal number: "  << endl;
    cin >> request;
    request = request - 1;
    string numbers [12] = {"first", "second", "third", "fourth", "fifth",
                           "sixth", "seventh", "eighth", "ninth", "tenth",
                           "eleventh", "twelfth"};
    cout << "Ordinal Number is " << " '" << numbers[request] << "' ";
}

int main() {

    ordinal_number();

    return 0;
}

