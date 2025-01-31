#include <iostream>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool is_vowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s1, s2, s3;
    int n1{0}, n2{0}, n3{0};
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    for(int i = 0; i < s1.size(); i++)
    {
        s1[i] == tolower(s1[i]);
        if(is_vowel(s1[i]))
        {
            n1++;
        }
    }
    for(int i = 0; i < s2.size(); i++)
    {
        s2[i] == tolower(s2[i]);
        if(is_vowel(s2[i]))
        {
            n2++;
        }
    }
    for(int i = 0; i < s3.size(); i++)
    {
        s3[i] == tolower(s3[i]);
        if(is_vowel(s3[i]))
        {
            n3++;
        }
    }
    if(n1 == 5 && n2 == 7 && n3 == 5)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}