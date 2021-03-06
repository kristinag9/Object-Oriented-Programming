#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
    char name[32];
    int age;
    bool gender;
    char birthDate[11];
    char address[64];
public:
    Person()
    {
        strcpy(name, "DefaultName1");
        age = 19;
        gender = false;
        strcpy(birthDate, "DefaultDate1");
        strcpy(address, "DefaultAddress1\n");
    }
    Person(const char* name, int age, bool gender, const char* birthDate, const char* address)
    {
        strcpy(this->name, name);
        this->age = age;
        this->gender = gender;
        strcpy(this->birthDate, birthDate);
        strcpy(this->address, address);
    }
    void setName(const char* name)
    {
        strcpy(this->name, name);
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setGender(bool gender)
    {
        this->gender = gender;
    }
    void setBirthDate(const char* birthDate)
    {
        strcpy(this->birthDate, birthDate);
    }
    void setAddress(const char* address)
    {
       strcpy(this->address, address);
    }
    const char* getName() const
    {
        return this->name;
    }
    int getAge() const
    {
        return this->age;
    }
    bool getGender() const
    {
        this->gender;
    }
    const char* getBirthDate() const
    {
        this->birthDate;
    }
    const char* getAddress() const
    {
        this->address;
    }

    void print() const
    {
        cout << this->name << endl;
        cout << this->age << endl;
        cout << boolalpha << this->gender << endl;
        cout << this->birthDate << endl;
        cout << this->address << endl;
    }
};

class Person2
{
private:
    char name[32];
    int age;
    bool gender;
    char birthDate[11];
    char address[64];
public:
    Person2()
    {
        strcpy(name, "DefaultName2");
        age = 14;
        gender = false;
        strcpy(birthDate, "DefaultDate2");
        strcpy(address, "DefaultAddress2\n");
    }
    Person2(const char* name, int age, bool gender, const char* birthDate, const char* address)
    {
        strcpy(this->name, name);
        this->age = age;
        this->gender = gender;
        strcpy(this->birthDate, birthDate);
        strcpy(this->address, address);
    }

    void setName(const char* name)
    {
        strcpy(this->name, name);
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setGender(bool gender)
    {
        this->gender = gender;
    }
    void setBirthDate(const char* birthDate)
    {
        strcpy(this->birthDate, birthDate);
    }
    void setAddredd(const char* address)
    {
        strcpy(this->address, address);
    }

    const char* getName() const
    {
        return this->name;
    }
    int getAge() const
    {
        return this->age;
    }
    bool getGender() const
    {
        return this->gender;
    }
    const char* getBirthDate() const
    {
        return this->birthDate;
    }
    const char* getAddress() const
    {
        return this->address;
    }

    void print() const
    {
        cout << this->name << endl;
        cout << this->age << endl;
        cout << boolalpha << this->gender << endl;
        cout << this->birthDate << endl;
        cout << this->address << endl;
    }
};

class Earth
{
private:
    Person humanity[256];
    size_t numberOfPersons;
public:
    Earth()
    {
        this->numberOfPersons = 2;
        Person psn;
        Person person = Person("Name", 0, false, "Date", "Address\n");
        this->humanity[0]= psn;
        this->humanity[1] = person;
    }
    void addPersonToHumanity(Person person)
    {
        this->humanity[this->numberOfPersons++] = person;
    }

    void removeLastPerson()
    {
        this->numberOfPersons--;
    }
    void print() const
    {
        for(int i = 0; i < this->numberOfPersons; i++)
            this->humanity[i].print();
    }
    int populationSize() const
    {
        return this->numberOfPersons;
    }
};


int main()
{
    // Person p;
    //p.print();

    Person p("Name1", 14, false, "12/08/1992", "Address1\n");
    p.print();
    cout << endl;

    Person2 psn2("Name2", 21, true, "31/10/2000", "Address2\n");
    psn2.print();
    cout << endl;

    Earth earth;
    earth.print();
    earth.addPersonToHumanity(p);
    earth.print();
    cout << endl;

    return 0;
}
