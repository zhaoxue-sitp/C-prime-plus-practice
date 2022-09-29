#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;//using和namespace都是C++的关键字，std是标准库所驻之命名空间（namespace）的名称
//标准库所提供的任何实物（诸如string class，和cout cin两个iostream类对象）都封装在命名空间std内

//考察点，怎么在第一个问题中包含两个单词,同时在printf中string的输出方式要用.c_str内置函数
int main()
{
    char first_name[20];
    string last_name;
    char grade;
    int age;
    cout << "What is your first name? ";    
    cin.getline(first_name,20);
    cout << "What is your last name? ";
    cin >> last_name;
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    printf("Name: %s,%s\nGrade: %c\nAge: %d\n", last_name.c_str(), first_name, grade, age);


    return 0;
}

/*What is your first name ? Betty Sue
What is your last name ? Vew
What letter grade do you deserve ? B
What is your age ? 22
Name : Vew, Betty Sue
Grade : B
Age : 22*/
