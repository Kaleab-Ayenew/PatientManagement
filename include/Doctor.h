#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>

using namespace std;


class Doctor
{
    public:
        void login();
        void doc_dashboard();
        void load_data();

        void showallrec();
        void search_id();
        void search_name();

        void show_apt();
        void show_patientrec();
        void show_profile();
        void appt_mangmt();



    private:
        string fname,lname,id,speciality,email,phone,password,slot;
        int exprience, room;


};

#endif // DOCTOR_H
