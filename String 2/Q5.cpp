// Ques: Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : pwians
// Input : str = "decode dsa with pw"
// Output : with

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    cout << "Enter a string : ";
    getline (cin, str);
    string temp;
    vector<string> v;
    stringstream ss(str);

    while (ss >> temp){
        v.push_back(temp);
    }
    string max = v[0];
    for (int i = 1; i < v.size(); i++){
        if (max < v[i]){
            max = v[i];
        }
    }
    cout << max << endl;
    
    return 0;
}
