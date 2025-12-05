#include <algorithm>
#include <string>
#include "validation.h"

using namespace std;



bool isValidemail(string& email){

    auto at = find(email.begin(), email.end(), '@');
    auto dot = find(at, email.end(), '.');

    if (at == email.end() || dot == email.end())
        return false;

    return true;

}

bool isValidphone(string& phone_num){
    if(phone_num.length()>7 || phone_num.length()>15)
        return false;
    for(char c: phone_num){
        if(!isdigit(c))
            return false;
    }

    return true;

}

