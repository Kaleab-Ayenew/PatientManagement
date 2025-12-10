#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include "Patient.h"
#include "validation.h"


using namespace std;

void Patient::patient_dashboard(){
    int choice;

    cout<<"------- PATIENT DASHBOARD -------\n"
        <<"1. My Profile \n"
        <<"2. Book Appointment \n"
        <<"3. My Appointments \n"
        <<"4. Medical Records \n
        <<"Choose [1-4]: "<<endl;




}

void Patient::login(){
    string inputemail,inputpassword;
    cout<<"-------- Login ---------- \n";
    cout<<"Email: ";
    cin>>inputemail;
    cout<<"Password: ";
    cin>>inputpassword;


ifstream file("patient_rec.txt",ios::in);

if(!file.is_open()){
    cout<<"Error Opening File"<<endl;
    return;
}

string line;
bool found=false;
int linenum = 0;

while(getline(file,line)){
    linenum++;

    stringstream ss(line);
    string field;
    string passwordF,emailF;
    int fieldindex=0;

    while(getline(ss , field , '|')){
        fieldindex++;
        if(fieldindex==3){
           emailF=field;

        }
        if(fieldindex==6) {
                passwordF=field;

        }
    }


    if(inputemail == emailF && inputpassword == passwordF){
        found = true;
        patient_dashboard();
        break;
    }
}
if(!found){
    cout<<"invalid email or password"<<endl;
}

file.close();
 cin.ignore();
    cin.get();
}






void Patient::register_patient(){
    // patient profile registery function
    string conf_password;

    int choi;
    cout<<"---------- Patient Registration ------------- \n"
        <<"Enter Details: "<<endl;

    cout<<"Enter First Name : ";
    cin>>fName;
    cout<<"Enter Last Name : ";
    cin>>lName;
    cout<<"Enter Your Email : ";

    // calling form validation helper functions
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

cout<<"Enter Date of BirthDay: ";


    do {

        cout<<"Enter Year: ";cin>>year;
        cout<<"Enter Month: ";cin>>month;
        cout<<"Enter Day: ";cin>>day;

        if(!isValiddob(year,month,day)){
            cout<<"Enter valid birth day: ";
    }
}while(!isValiddob(year,month,day));




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
    cout<<"1. Edit Response \n"
        <<"2. Save Response \n"
        <<"3. Back to Menu \n"
        <<"4. Exit "<<endl;
    cin>>choi;
    if(choi==1){
       register_patient();
    } else if(choi==2){
        save_patientrec();
        cout<<"Registration Succesfull"<<endl;
    } else if(choi ==3){
        exit(0);
    }



}

void Patient::save_patientrec(){
    // save patient response to file
    ofstream data("patient_rec.txt",ios::app);
    data << fName << "|"
         << lName << "|"
         << email << "|"
         << phone << "|"
         << year << "-" << month << "-" << day << "|"
         << password << endl;

    data.close();





}

