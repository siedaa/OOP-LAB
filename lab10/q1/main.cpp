#include <iostream>
using namespace std;
#include <string>
#include<fstream>

class filehandle {
    ifstream infile;
    string fileName;

    public:
    filehandle (string fileName) : fileName(fileName){
        infile.open(fileName);

    }

    void readData () {
        string data;
        if (infile.is_open()) {
            while (getline(infile, data)) {
                cout << fileName << endl;
            }
        }

        else {
            cerr<<"cant open the file"<<endl;
            exit(1);
        }
    }

    ~filehandle () {
        if (infile.is_open()) {

        infile.close(); // close the file in destructor
            cout << "File closed" << endl;
        }
        else
            cout << "File already closed" << endl;
      
    }


};

int main() {
    filehandle f1 ("vehicles.txt");
    f1.readData();
    return 0;
}
