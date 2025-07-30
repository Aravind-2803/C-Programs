#include<iostream>
#include<string>
using namespace std;
class Book{
    string Title;
    string author;
    float price;
    string  publisher;
    int stock;
    int n;
    string x,y;

    public:
    Book(){}
    bool search(string, string);
    Book(string titl,string auth,float pr,string pub,int sto);
   
    /*void readdata();*/
    void buybook(int);

};
Book :: Book(string titl,string auth,float pr,string pub,int sto)
 {
    Title=titl;
    author=auth;
    price=pr;
    publisher=pub;
    stock=sto;
}


/*void Book readdata() {

        cout << "Enter the author: ";
        cin >> author;
        cout << "Enter the title: ";
        cin >> Title;
        cout << "Enter the publisher: ";
        cin >> publisher;
        cout << "Enter the price: ";
        cin >> price;
        cout << "Enter the stock: ";
        cin >> stock;
    }*/
bool Book :: search(string book,string auth){
    return(Title==book && author==auth);
}
void Book :: buybook(int num){
    if(num<=stock){
        stock=stock-num;
        cout<<"purchased successfully"<<endl;
        cout<<"remaining books: "<<stock;
    }
    else{
        cout<<"stock out";
    }
}
int main(){
    int size;
    string author;
    string Title;
    string publisher;
    int price;
    int stock;
    cout<<"Enter the size:";
    cin>>size;
    Book b[size];
    for(int i=0;i<size;i++){
        cout<< "book "<<i+1<<endl;
       /* b[i].readdata();*/
       
        cout << "Enter the author: ";
        cin >> author;
        cout << "Enter the title: ";
        cin >> Title;
        cout << "Enter the publisher: ";
        cin >> publisher;
        cout << "Enter the price: ";
        cin >> price;
        cout << "Enter the stock: ";
        cin >> stock;
        b[i]=Book(Title,author,price,publisher,stock);
    }
    string auth,book;
    int num;
    cout<<"Enter the book name to purchase:";
    cin>>book;
    cout<<"Enter the author name:";
    cin>>auth;
    cout<<"Enter the no. of books:";
    cin>>num;
    bool flag=false;
    for(int j=0;j<size;j++){
        if(b[j].search(book,auth)){
            b[j].buybook(num);
            flag=true;
            break;
        }
    }
    
    
    return 0;
}