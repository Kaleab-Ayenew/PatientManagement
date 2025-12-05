#include <iostream>

#include <cstdlib> // for exit
#include "Patient.h"
#include "validation.h"


using namespace std;


void master_menu();
void patient_portal();
void patient_menu();

int main()
{

    master_menu();
    return 0;

}

void master_menu(){  // master menu for both patient and doctor portal
     int msChoice;


 cout<<"----------Blaze Hospital ------------ \n"
        <<"         1. Doctors Portal \n"
        <<"         2. Patient Portal \n"
        <<"         3. Exit \n"
        <<"---------------------------------------\n"
        <<" Choose [1 - 3]: ";

do{
        cin>>msChoice;
        // input validation to clear the garbage value entered by user like string ,char ...
        cin.clear();
        cin.ignore();

    switch(msChoice){
        case 1:
            cout<<"under constructionS"<<endl;
            break;
        case 2:
            patient_menu();
            break;
        case 3:
            cout<<"Exiting Program , GoodBye"<<endl;
            exit(0);
            break;

        default:
            cout<<"Invalid choice , Please enter correct Choice: ";
            break;
    }
}while(msChoice!=3);


}





void patient_menu(){
    int pChoice;

    Patient newPatient;

    do{
              cout<<"----------Patient Portal ------------ \n"
        <<"            1.Register               \n"
        <<"            2.Login                  \n"
        <<"            3.Back to Main Portal        \n"
        <<"            4.Exit               \n"
        <<"--------------------------------------\n"
        <<"Choose [1-4]: ";

        cin>>pChoice;
        if(cin.fail()){
            cin.clear();
            cin.ignore(100,'\n');
        }
        switch(pChoice){
            case 1:
                newPatient.register_patient();

                break;
            case 2:
                cout<<"UC"<<endl;
                break;

            case 3:
                master_menu();
                break;
            case 4:
                cout<<"Exiting Program , Goodbye"<<endl;
                exit(0);
                break;

            default:
                cout<<"Input valid choice"<<endl;
                break;

        }

    }while(pChoice!=4);


}


