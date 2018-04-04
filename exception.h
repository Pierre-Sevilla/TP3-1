#ifndef EXCEPTION_H
#define EXCEPTION_H

#endif // EXCEPTION_H

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


    }
    Exception::Exception(const string Libelle="Error xxx", const unsigned CodErr=0);
    int Exception::getCodErr() const;
    string Exception::getLibelle() const;
    void Exception::display() const;
    const char* Exception::what() const noexcept;
} // nsUtil
