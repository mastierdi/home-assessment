#include <iostream>

using namespace std;

class phone
{
private:
    string brandName;
    string modelName;
    string phoneColor;
    string myOs;

public:
    phone()
    {
        brandName = "Apple";
        modelName = "iPhone 12 Pro";
        phoneColor = "Blue";
        myOs = "iOs 15";
    }
    void printAllData()
    {
        cout << "Brand name is:   " << brandName << endl;
        cout << "Model name is:   " << modelName << endl;
        cout << "Phone color is:  " << phoneColor << endl;
        cout << "Os  is:          " << myOs << endl;
    }
    void setBrandandModelName(string b, string m)
    {
        brandName = b;
        modelName = m;
    }

    string getBrandName()
    {
        return brandName;
    }
    string getModelName()
    {
        return modelName;
    }

    ~phone()
    {
    }
};

/*
    
       And also it must have 2 constructors:
        -   default constructor (that assign some default values for all fields)
        -   constructor with parameter of company name (string)

       There is examples of creating this class:
            Laptop L1("Lenovo");
            Laptop L2;
            L2.setCompanyName("Mac");

       NOTE: every fields must be private.
       NOTE: YOU FEEL FREE to add another getters or setters, if you want or need it!
*/
class notebook
{
private:
    string companyName;
    // inner tech char
    int ram;
    string core;
    int hdd;
    int freq;
    //phys char
    string notebookColor;
    int noteBookWeight;

public:
    notebook()
    {
        companyName = "Apple";
ram = 2;
core = "Intel";
hdd = 3;
freq = 4;
notebookColor = "Gray";
noteBookWeight = 5;

    }
void showTechChar()
{
    cout << ram << endl;
    cout << core << endl;
    cout << hdd << endl;
    cout << freq << endl;
}
void showPhysicalChar()
{
    cout << notebookColor << endl;
    cout << noteBookWeight << endl;
}
string getCompanyName()
{
    return companyName;
}
int getFreq()
{
    return freq;
}
string setCompanyName(string com_name)
{
    companyName = com_name;
    return companyName;
}
    ~notebook()
    {

    };
};

/*
    Не обов'язково :)
    Для тих кому малувато буде те шо вище:


    3.1*. Implement SocialMedia class.

        It must have these fields:
            1. name and surname of user (string);
            2. usrID - user identifier in hex format (int). For example: int usrID = 0x100;
            3. email (string);

        Also, it must have the following methods:
            1. getUsrID - return user identifier;
            2. getEmail() - return email of user;


    3.2*. Implement Twitter class that is inherited from SocialMedia class.

        It must have these fields:
            1. twiAccountName - account name of user;
            2. followers_N - number of followers of user;
            3. following_N - number of following users of the user;
            4. posts_N - number of posts of the user;

        It must have setters and getters for ALL above fields.

        Also, implement the following methods:
            - addNewPost() - method that accept some text as argument and print it to the console;
            - addFollowing() - method that adds new following to the number of following of the user;
            - delFollower() - method that deletes follower from the number of followers of the user;
*/
int main()
{
    phone myPhone;
    myPhone.printAllData();
    myPhone.setBrandandModelName("apple", "iPhone 14");
    cout << myPhone.getBrandName() << endl;
    cout << myPhone.getModelName() << endl;
    cout << "=========================" << endl;
    
    notebook newBook;
    newBook.showPhysicalChar();
    newBook.showTechChar();
    cout << newBook.getCompanyName() << endl;
    cout << newBook.getFreq() << endl;
    newBook.setCompanyName("NewCompany");
    cout << newBook.getCompanyName() << endl;

    return 0;
}