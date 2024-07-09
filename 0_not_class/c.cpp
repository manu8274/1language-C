// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     vector<int> v={1,2,3,4,5};
//     vector<int> v1={1,2,3,4,5};
//     if(v==v1)   cout<<"true";
//     else    cout<<"false";
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int m = 2, n = 6;
//     int &x = m;
//     int &y = n;
//     m = x++;
//     x = m++;
//     n = y++;
//     y = n++;
//     cout<< m << " " << n;
//     return 0;
// }

#include <iostream>

#include <string.h>

#include <malloc.h>
using namespace std;
class BixString

{

    char txtName[20];

public:
    BixString(char *txtTemp = NULL)

    {
        if (txtTemp != NULL)

            strcpy(txtName, txtTemp);
    }

    void
    Display(void)
    {
        cout << txtName;
    }
};

int main()

{

    char *txtName = (char *)malloc(10);

    strcpy(txtName, "IndiaBIX");

    *txtName = 48;

    BixString objTemp(txtName);

    cout << sizeof(txtName);

    return 0;
}