#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str)
{
    int left = 0;
    int right = str.length() - 1;
    while (left < right)
    {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string str;

    cout << "Enter the name of the string: ";
    cin >> str;

    if (isPalindrome(str)) {

        cout << "The given string is a palindrome. \n";
        
    }
    
     else 
        cout << "The given string is not a palindrome. \n";
    
     return 0;  
}