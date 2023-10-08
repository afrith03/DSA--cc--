#include <bits/stdc++.h>
char findAddedCharacter(string &s, string &t)
// MANGO
// MANFO
// outpot = F
{
    int i = 0;
    int j = 0;
    char a;
    while (s.size() > i || t.size() > j)
    {
        if (s[i] != t[j])
        {
            a = t[j];
            break
        }
        i++;
        j++;
    }
    return a;
}