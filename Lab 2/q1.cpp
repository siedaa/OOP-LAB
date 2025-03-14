#include <iostream>
#include <string>
using namespace std;
struct books {
    string title ;
    string author ;
    int year;
} ;
books* dynamicAllocationMemory (int totalNum) {
    return new books[totalNum];

}

void inputBooks (books*book , int totalNum) {
cin.ignore();
    for (int i=0;i<totalNum;i++) {
    cout<<"enter the title of book : "<<i<<endl;
    getline(cin , book[i].title);
    cout<<"enter the name of the author   "<<endl;
    getline(cin , book[i].author);
    cout<<"enter the published year "<<endl;
    cin>>book[i].year;
    }
}
    
    
    void displayBooks(books *book , int totalNum) {
        int filterYear;
        cout<<"enter the year you want to filter from? : "<<endl;
        cin>>filterYear;
        bool found = false;
        for (int i=0;i<totalNum;i++) {

        if (book[i].year > filterYear) {
            cout<<"title of the book: "<<book[i].title<<endl;
            cout<<"author of the book: "<<book[i].author<<endl;
            cout<<"published year of the book: "<<book[i].year<<endl;
        
         found= true;
        }
        }
        if (!found) {
            cout<<"no books found for the year "<<filterYear<<endl;
    }
    }

    
    void deAllocationOfMemory (books* book) {
    delete []book;
    cout<<"memory deallocated"<<endl;
    }

int main () {

    int totalNum;
    cout<<"enter total number of books: "<<endl;
    cin>>totalNum;
 books* book = dynamicAllocationMemory (totalNum);
inputBooks(book , totalNum);
displayBooks(book , totalNum);
deAllocationOfMemory (book);

    return 0;
}
