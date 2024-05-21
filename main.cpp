#include<iostream>
#include<string.h>
using namespace std;
class Task{
public:
string task[50];
string tick[50];
int n;int index;
void add(){

cout << "\t\t\t\t REMINDER:" << endl;
cout << "you can only add 50 tasks" << endl;

cout << "how many task you want to add" << endl;
cin >> n;
cout << "add task" << endl;
for(int i=1;i<=n;i++)

cin >> task[i];
cout << "task added successfully" << endl;
}
void view(){
cout << "your tasks are:" << endl;
for(int i=1;i<=n;i++)
if(task==0){
cout << "task not found" << endl;}
else if(i==index){
cout << ""<<i <<".\t"<<task[i]<<"-completed"<< endl;}
else{
cout << ""<<i <<".\t"<<task[i]<<"-pending"<< endl;
}}

void markTskCompleted() {
    view();

    cout << "Enter the index of the task you want to mark as completed: ";
    cin >> index;
    if (index > 0 && index <= 50) {
        cout << "Task marked as completed." << endl;
    } else {
        cout << "Invalid index!" << endl;
    }
}
void Remove(){
int m,i;
cout << "which task do u want to remove" << endl;
cin >> m;
for(int i=1;i<=50;i++)
{if(i==m)
continue;
else
cout << "" <<task[i]<< endl;

}}
};

int main()
{ Task a;
int b;
cout << "****____TO DO LIST____****" << endl;
cout << "choose FUNCTION" << endl;
cout << "how many times you want to proceed" << endl;
cin>>b;
int k;
for(int i=1;i<=b;i++){

cout << "1.ADD TASK\n2.VIEW TASK\n3.MARK TASK\n4.REMOVE TASK\n5.EXIT" << endl;
cin >> k;
switch(k){
case 1:
    a.add();
    break;
case 2:
    a.view();
    break;
case 3:
    a.markTskCompleted();
    break;
 case 4:
    a.Remove();
    break;
    case 5:
    break;
    };}
    return 0;
}
