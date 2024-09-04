#include<bits/stdc++.h>
using namespace std ;
class Person {
private :
    string name ;
    int age ;
public :
    static int cont;
    Person(){}
    Person(string name , int age) {
    this->name=name;
    this->age=age;
    cont++;
    }
    void set_name (string name){
        this->name=name;
    }
    string get_name (){
    return name;
    }
    void set_age(int age){
    this->age=age;
    }
    int get_age(){
    return age;
    }
    void displayinfo (){
    cout << "Name: " << get_name()<<endl;
    cout << "Age: " <<get_age()<<endl;
    }
    ~Person(){
       cont++;
    }
};
int Person::cont=0;
class Student : public Person {
private:
    int studentid;
    char grade ;
public :
    Student():Person(){}
    Student(int studentid,char grade,string name,int age):Person(name,age){
    this->studentid=studentid;
    this->grade=grade;
    }
    void set_id(int studentid){
    this->studentid=studentid;
    }
    int get_id (){
    return studentid;
    }
    void set_grade(char grade){
    this->grade=grade;
    }
    char get_grade(){
    return grade;
    }
    void displayinfo(){
    Person::displayinfo();
    cout<< "Student Id: "<<get_id()<<endl;
    cout<< "Grade: "<<get_grade()<<endl;
    }
    ~Student(){};
};
class Teacher : public Person {
private:
    int employeeid ;
    string subject ;
public:
    Teacher():Person(){}
    Teacher(int employeeid,string subject,string name,int age):Person(name,age){
    this->employeeid=employeeid;
    this->subject=subject;
    }
    void set_idd(int employeeid){
    this->employeeid=employeeid;
    }
    int get_idd(){
    return employeeid;
    }
    void set_subject(string subject){
    this->subject=subject;
    }
    string get_subject(){
    return subject ;
    }
    void displayinfo(){
    Person::displayinfo();
    cout << "Employeee Id: "<<get_idd()<<endl;
    cout<< "Subject: " <<get_subject()<<endl;
    }
    ~Teacher(){}

};

int main()
{
cout<< "teacher info"<<endl;
Teacher t1(1243,"English","Nour",40);
t1.displayinfo();
cout << "................."<<endl;
cout <<"student info"<<endl;
Student s1(3344,'A',"rahma",21);
s1.displayinfo();
cout << "count: "<<Person::cont<<endl;
    return 0 ;
}
