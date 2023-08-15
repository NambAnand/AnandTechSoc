#include<iostream> //this is the header file
using namespace std; //namespace std is called from the iostream header to use the cout and cin functions
int a,b;
bool equal(int a,int b)
{
    if(a==b)
    return true;
    return false;
}
int sum(int a,int b)
{
    return (a+b);
}
int in_out()
{
    int num;
    cout<<"Enter the values:\n"; // the << operator is called the Insertion operator ie, insert the statement in the display
    cin>>num; //the >> operator is called the extraction operator ie, extract the value from the input into the variable a;
    return num;

}
int main()
{
    bool boolean;
    cout<<"hello world\n";
    cout<<"hey\n"; 
    a=in_out();
    b=in_out();
    if(equal(a,b))
    cout<<"\ntrue --->"<<equal(a,b);
    else
    cout<<"\nfalse --->"<<equal(a,b);
    cout<<"\n"<<boolean;
    cout<<"\n"<<sum(a,b);
    return 0;

}
