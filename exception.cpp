#include <iostream>
#include <exception>
#include <string>
#include <string.h>
using namespace std;

namespace nsUtil {

    class Exception : public exception {

    public:
        Exception(const string myLibelle, const unsigned myCodErr);
        virtual ~Exception() {}
        string getLibelle () const;
        int    getCodErr  () const;
        void display() const;
        virtual const char* what() const noexcept;

    private:
        string myLibelle;
        unsigned myCodErr;


    }; // Exception

    Exception::Exception(const string Libelle="Error xxx", const unsigned CodErr=0){
        myLibelle=Libelle;
        myCodErr=CodErr;
    }
    int Exception::getCodErr() const {
        return myCodErr;
    }
    string Exception::getLibelle() const{
        return myLibelle;
    }
    void Exception::display() const{
        cout<<"Exception"<<':'<<myCodErr<<'\n'<<"Code"<<':'<<myCodErr<<endl;
    }
    const char* Exception::what() const noexcept {
        return myLibelle.c_str ();
    }
} // nsUtil



int main()
{
    nsUtil::Exception obj;
    obj.display();

    return 0;
}
