#ifndef MYSTRING_H
#define MYSTRING_H

#include<cctype>
#include <string>

using namespace std;

namespace myString{
    
    inline string convertToAlphaNumeric(string s){
        string filtered = "";

        for(char c : s){
            if(isalnum(c)){
                filtered.push_back(c);
            }
        }

        return filtered;
    }
}




#endif