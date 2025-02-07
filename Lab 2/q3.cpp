#include<iostream>
using namespace std;
#include<string>

struct salary {
    string name;
    int hoursWorked;
    float hourlyRate;
};

salary* dynamicMemoryAllocation(int n){
    return new salary [n];
}
void inputDetails(salary*emp ,int n){
    for(int i=0;i<n;i++){
        cin.ignore();
 cout<<"detail of employee # : "<<i+1<<endl;
 cout<<"--------------------------------------"<<endl;
        cout<<"enter the name of employee :"<<endl;
        getline(cin,emp[i].name);

        cout<<"enter no of hour worked: "<<endl;
        cin>>emp[i].hoursWorked;

        cout<<"enter the rate of per hour" <<endl;
        cin>>emp[i].hourlyRate;
        cin.ignore();
    }
}

float CalculatingSalaty(salary*emp , int i) {

         return  emp[i].hoursWorked * emp[i].hourlyRate;
   
    }


void displaySalary(salary*emp ,int n) {

    for (int i=0;i<n;i++) {

        cout<<"name of the employee is : "<<emp[i].name<<endl;
        cout<<"salary of employee # "<<i+1<<" is : "<<CalculatingSalaty(emp , i)<<endl;
    }
}

void deAllocationOfMemory (salary* emp) {
    delete []emp;
    cout<<"memory deallocated sucessfully "<<endl;
    }


int main() {

    int n;
    cout<<"enter total number of employees: "<<endl;
    cin>>n;
    cout<<"allocating memory for the employees"<<endl;
    salary*emp = dynamicMemoryAllocation(n);
    cout<<"inserting details for employees"<<endl;
    inputDetails(emp , n);

    cout<<" total salary for each employess is : "<<endl;
    displaySalary(emp , n);

    cout<<endl;

    deAllocationOfMemory ( emp); 

}
