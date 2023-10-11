// i/p ---> {'a','b','b','b','c','c','c','c'}
// o/p ---->{ 'a','b','3,'c','4'}
// if count is 1 ,, do not write 1
// if count is a double digit then convert into char and write 12 as '1','2'

#include <iostream>
#include <vector>
using namespace std;

int compressstring( char s[],int n)
{
    int i = 0;
    int ansindex = 0;

    while (i < n)
    {

        int j = i + 1;

        while (j < n && s[i] == s[j])
        {
            j++;
        }

        // aap is loop se bahar tab aoge
        // ya toh poora vector traverse kr lia
        // ta fr new char encounter hua j index  par
        // ab char ko store kara lo usi vector me new index par and count bhi nikal lo

        s[ansindex++] = s[i];

        int count = j - i;

        // check krlo count ki value ky hai
        // agar 1 se bda hai toh string me convert krlo

        if (count > 1)
        {
            string str = to_string(count);

            for (char ch : str)
            {
                s[ansindex++] = ch;
            }
        }

        i = j;
    }

    return ansindex;
}

int main()
{
     char arr[10]={'a','a','a','b','c','c','d','d','d','d'};

     cout<<"new length of char arr is = "<<compressstring(arr,10)<<endl;
    return 0;
}