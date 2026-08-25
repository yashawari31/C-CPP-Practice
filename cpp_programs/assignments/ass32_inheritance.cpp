/*


		- Create a base class "Library" with attributes : name, location
		- Methods: - setLibraryDetails(string name, string location),
				   - DesplayDetails()
        - Derive class "BOOKS" with attributes:  title, author.
        - Methods: - SetBookDetails(string title, string author)
				   - DisplayBookDetails();
	    - Derive another class "IssuedBook" with attributes: issuedTo, dueDays.
		- Methods: - SetIssuedDetails(string issuedTo, int dueDays)
		           - displayIssuedDetails(). 
				   
		- Write a program to issue a book from library storing all information and display it in structured format.


*/



#include<iostream>
#include<string>

class Library
{
    protected:
    std::string name;
    std::string location;

    public:
    Library():name("no"),location("home"){}
    Library(std::string Name,std::string Location):name(Name),location(Location){}

    void setLibraryDetails(std::string name, std::string location)
    {
        this->name=name;
        this->location=location;

    }

    void DisplayDetails()
    {
       std::cout<<"Library details are:"<<std::endl;
       std::cout<<"LIbrary name: "<<name<<std::endl;
       std::cout<<"Library location: "<<location<<std::endl;
    }
};


class Books : public Library
{
protected:
    std::string title;
    std::string author;

public:
    void setBookDetails(std::string title, std::string author)
    {
        this->title = title;
        this->author = author;
    }

    void displayBookDetails()
    {
        std::cout<<"Book Details:"<<std::endl;
        std::cout << "Book Title   : " << title << std::endl;
        std::cout << "Author       : " << author << std::endl;
    }
};

class IssuedBook : public Books
{
private:
    std::string issuedTo;
    int dueDays;

public:
    void setIssuedDetails(std::string issuedTo, int dueDays)
    {
        this->issuedTo = issuedTo;
        this->dueDays = dueDays;
    }

    void displayIssuedDetails()
    {
       std:: cout << "Issued To    : " << issuedTo << std::endl;
       std::cout << "Due Days     : " << dueDays << std::endl;
    }
};

int main()
{
    Library l1;
    l1.setLibraryDetails("Awari study space","Kolhapur");
    l1.DisplayDetails();

    Books b1;
    b1.setBookDetails("Song of Ice and Fire","George R R Martin");
    b1.displayBookDetails();

    IssuedBook i1;
    i1.setIssuedDetails("Yash Awari",5);
    i1.displayIssuedDetails();
}