#include <iostream>
#include <string>
#include <algorithm>
#include "Patient.h"
#include "validation.h"


using namespace std;







void Patient::register_patient(){
int choi;
cout<<"---------- Patient Registration ------------- \n"
    <<"Enter Details: "<<endl;

cout<<"Enter First Name : ";
cin>>fName;
cout<<"Enter Last Name : ";
cin>>lName;
cout<<"Enter Your Email : ";
    do{
        cin>>email;
    if(!isValidemail(email))
        cout<<"Enter Valid Email: ";
    }while(!isValidemail(email));

cout<<"Enter Your Phone Number: ";
    do{
        cin>>phone;
        if(!isValidphone(phone)){
            cout<<"Enter Valid Phone: ";
        }

    }while(!isValidphone(phone));

cout<<"Enter Date of Birth[YYYY/MM/DD]: ";
cin>>year>>month>>day;


cout<<"Enter Your Password : ";
cin>>password;
    do {
        cout << "Confirm Your password : ";
        cin >> conf_password;

        if(conf_password != password) {
            cout << "Passwords don't match! Try again." << endl;
        }

    }while(conf_password != password);
    cout<<endl;
    cout<<"1. Edit Response \n "
        <<"2. Back to Menu \n"
        <<"3. Exit "<<endl;
    cin>>choi;
    if(choi==1){
       cout<<"hey";
    } else if(choi==2){
        return;
    } else if(choi ==3){
        exit(0);
    }



}



