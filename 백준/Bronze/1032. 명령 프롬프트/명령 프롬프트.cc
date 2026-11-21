#include <iostream>
#include<string>
#include<vector>

using namespace std;
int main() {
    vector<char>arr1;
    int num1;
    cin>>num1;
    
    string name;
    cin>>name;
    
    string name1;
    for(int i=0;i<name.length();i++)
    {
        arr1.push_back(name[i]);
    }

    if(num1!=1)
    {

        for(int i=0;i<num1-1;i++)
    {
            cin >> name1;
            for (int j = 0; j < name1.length(); j++) {
                if (arr1[j] != name1[j])
                {
                    arr1[j]='?';
                }
            }


        }

    }

    for(int i=0;i<arr1.size();i++)
    {
        cout<<arr1[i];
    }


    return 0;
}

