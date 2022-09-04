#include <iostream>
using namespace std;

string nickNameFirst = "First";
long phoneNumberFirst = 380500000001;
string accountNumberFirst = "1Q2W3E4R";
bool activityFirst = 1;

string nickNameSecond = "Second";
long phoneNumberSecond = 380500000002;
string accountNumberSecond = "1A2S3D4F";
bool activitySecond = 0;

string space = " ";
string dbl = "==========";

void addUserToContacts();
void sendMessage();
// makeAudioCall();
void makeVideoCall();
// makePhoneCall();


int main(){
    string menuInput = "";
if(activityFirst != 0 && activitySecond != 0){
    cout << nickNameFirst << " online" << endl;
cout << nickNameSecond << " online" << endl;
}
if(activityFirst != 1 && activitySecond != 1){
    cout << nickNameFirst << " offline" << endl;
cout << nickNameSecond << " offline" << endl;
}
if(activityFirst != 0 && activitySecond != 1){
    cout << nickNameFirst << " online" << endl;
cout << nickNameSecond << " offline" << endl;
} else {
    cout << nickNameFirst << " offline" << endl;
cout << nickNameSecond << " online" << endl;
}
cout << dbl << endl;

cout << "Hello, First! To continue please choose from menu:" << endl;
cout << dbl << endl;
cout << "Add to contact - press C" << endl;
cout << "Send message - press M" << endl;
cout << "Make AudioCall - press A" << endl;
cout << "Make VideoCall - press V" << endl;
cout << "Make PhoneCall - press P" << endl;
cin >> menuInput;

if(menuInput == "C" || menuInput == "c"){
    addUserToContacts();
}
if(menuInput == "M" || menuInput == "m"){
    sendMessage();
}
if(menuInput == "V" || menuInput == "v"){
    makeVideoCall();
}


}

void addUserToContacts(){
    long inputNumber = 0;
    cout << "Enter phonenumber" << endl;
    cin >> inputNumber;

    if(inputNumber == phoneNumberSecond){
        cout << "Great. You have added Second to your contacts" << endl;
    } else {
        cout << "We cannot find user with this number!" << endl;
    }

}

void sendMessage(){
    string sms = "";
    long inputNumber = 0;

    cout << "Enter text sms" << endl;
    cout << dbl << endl;
    cin >> sms;
    cout << endl;
    cout << "Enter phonenumber" << endl;
    cin >> inputNumber;
    cout << dbl << endl;
    cout << "You have sent sms to " <<  inputNumber << endl;


}

void makeVideoCall(){
    string vcall = "";

    cout << "Enter name to make videocall" << endl;
    cout << dbl << endl;
    cin >> vcall;
    if(vcall == nickNameSecond){
        if(activitySecond != 0){
        cout << "Great. You made videocall to Second" << endl;
        }else {
            cout << "Second is offline" << endl;
        }

    } else {
        cout << "We cannot find user with this number!" << endl;
    }

}