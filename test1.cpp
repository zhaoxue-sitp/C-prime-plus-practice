#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;//using��namespace����C++�Ĺؼ��֣�std�Ǳ�׼����פ֮�����ռ䣨namespace��������
//��׼�����ṩ���κ�ʵ�����string class����cout cin����iostream����󣩶���װ�������ռ�std��

//����㣬��ô�ڵ�һ�������а�����������,ͬʱ��printf��string�������ʽҪ��.c_str���ú���
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
