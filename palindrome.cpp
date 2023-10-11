#include <iostream>
using namespace std;

// all char are converted to lower as string is case insensative 
char tolower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }

    else
    {
        return ch + 32;
    }
}

// boolean type func to check whether the string is a palindrome or not 


bool checkpalindrome(char str[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (tolower(str[s]) != tolower(str[e]))
        {
            return 0;
        }

        else
        {
            s++;
            e--;
        }
    }

    return 1;
}

// accessing the length of a string using a function

int getlength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name1[100], name2[100];
    cout << "enter the string 1 =";
    cin >> name1;
    cout << "enter the string 2 =";
    cin >> name2;

    int len1 = getlength(name1);
    int len2 = getlength(name2);

    cout << " palindrome is = " << checkpalindrome(name1, len1) << endl;
    cout << " palindrome is = " << checkpalindrome(name2, len2) << endl;
    return 0;
}