#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World";

    // 1. Length
    cout << "Length of str1: " << str1.length() << endl;

    // 2. Append
    string str3 = str1;
    str3.append(" ");
    str3.append(str2);
    cout << "After append: " << str3 << endl;

    // 3. Compare
    if(str1.compare(str2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    // 4. Substring
    cout << "Substring of str3 (0,5): " << str3.substr(0,5) << endl;

    // 5. Find
    cout << "Position of 'World': " << str3.find("World") << endl;

    // 6. Insert
    str3.insert(5, " C++");
    cout << "After insert: " << str3 << endl;

    // 7. Erase
    str3.erase(5,4);
    cout << "After erase: " << str3 << endl;

    return 0;
}