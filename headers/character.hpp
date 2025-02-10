#ifndef MYCHAR_H
#define MYCHAR_H

namespace myChar{
    inline bool isCharacter(char c){
        if(c > 64 && c < 91 || c > 96 && c < 123){
            return true;
        }
        return false;
    }

    inline char convertToLowerCase(char c){

        if(c > 64 && c < 91){
            return c + 32;
        }
    
        return c;
    }
    
}

#endif