#ifndef VALIDATION_H_INCLUDED
#define VALIDATION_H_INCLUDED

#include <string>
using namespace std;

bool isValidemail(string& email);

bool isValidphone(string& phone_num);

bool isValiddob(int& years ,int& months ,int& days);


#endif // VALIDATION_H_INCLUDED
