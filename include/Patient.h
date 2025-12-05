#ifndef PATIENT_H
#define PATIENT_H







using namespace std;

class Patient
{
    public:
        void register_patient();
        void login();
        void show_profile();
        void book_appointment();
        void show_appointment();
        void show_medrecords();
    private:

         string fName ,lName, password,email,conf_password,phone;
         int year,month,day;

};

#endif // PATIENT_H
