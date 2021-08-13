#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define all(x) (x).begin(), (x).end()

// everything in cpp classes is private by default
// We have 3 access modifiers in cpp
// 1. Public - accessible to those outside the class (everyone)
// 2. Private - not accessible to those outside the class (only accessible to method functions inside the class)
// 3. Protected - accessible within the same package and outside the package through inheritance (can’t be accessed outside of it’s class unless with the help of sub/friend/derived class)

// Abstract classes
// we can have pointers or references of abstract class type e.g. Base *bp = new Derived();
// If we do not override the pure virtual function in derived class, then derived class also becomes abstract class. 
// An abstract class can have constructors.
class AbstractEmployee {
	// abstract function
	// if someone signs the constract AbstractEmployee has to implement the function
    // pure virtual method that is to be implemented by the derived class
	virtual void askForPromotion() = 0;
};
// virtual functions cannot be static
// virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism
// they are defined in the base class and are overriden in the derived class
// a class may have virtual destructor but it cannot have a virtual constructor


// Blueprint for employees
class Employee : AbstractEmployee {
protected:
    string name, company;
    int age;
public:
    // If we dont create a constructor for a class the compiler automtically generates one (Default Constructor)
    // Rules for constructor
	// 1. Doesn't have a return type
	// 2. Has the same name as the class
	// 3. Must be public else it will be unaccessible
    Employee(string n, string c, int a) {
        setName(n);
        setCompany(c);
        setAge(a);
    }
    void introduce() {
        cout << "Hi! My name is " << name << " and I work for " << company << " and I am " << age << " years old\n";
    }
    void setName(string n) {
    	this->name = n;
    }
    string getName() {
    	return this->name;
	}
	void setCompany(string n) {
    	this->company = n;
    }
    string getCompany() {
    	return this->company;
	}
	void setAge(int n) {
		if(n >= 18) 
			this->age = n;
    }
    int getAge() {
    	return this->age;
	}
    void askForPromotion() {
    	// Complex hidden logic
    	if(age > 30)
    		cout << name << " got promoted\n";
    	else
    		cout << name << " sorry no promotion for you\n";
    }
    // if it is not set as virtual then it will not be overriden if the pointer is of parent class
    // when virtual is used it asks the compiler on runtime to check the implementation in the derived class and execute it
    virtual void work() {
    	cout << name << " is checking email, task backlod, performing tasks....\n";
    }
};

// Developer is an Employee
class Developer : public Employee {
public:
	string favProgLang;
	// As we constructed a constructor for Employee so there will not be a Default Constructor for Developer class
	Developer(string n, string c, int a, string fav) : Employee(n, c, a) {
		this->favProgLang = fav;
	}
	void fixBug() {
		// name, company and age will not be accessible if they are set as private
		// they are accessible only if the access modifiers are public or protected
		cout << this->name << " fixed bug using " << this->favProgLang << "\n";
	}
	// override
	void work() {
		cout << name << " is coding\n";
	}
};

class Teacher : public Employee {
public:
	string subject;
	Teacher(string n, string c, int a, string subj) : Employee(n, c, a) {
		this->subject = subj;
	}
	void prepareLesson() {
		cout << this->name << " is preparing " << this->subject << " lesson\n";
	}
	// override
	// void work() {
	// 	cout << name << " is teaching " << subject << "\n";
	// }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Employee e1 = Employee("Atul", "XYZ", 18);
    e1.introduce();
    e1.askForPromotion();
    cout << "\n";

    Developer d1 = Developer("AKV", "XYZ", 45, "C++");
    d1.fixBug();
    // If class Developer : Employee we cannot access askForPromotion
    // If class Developer : public Employee i.e. public inheritance then we can access askForPromotion
    d1.askForPromotion();
    d1.work();
    cout << "\n";
    
    Teacher t1 = Teacher("SV", "XYZ", 45, "Maths");
    t1.prepareLesson();
    t1.work();
    cout << "\n";
    
    Employee *e2 = &d1;
    Employee *e3 = &t1;
    e2->work();
    e3->work();
    cout << "\n";

    Employee *e4 = new Developer("AJ", "XYZ", 18, "C++");
    e4->work();
    return 0;
}

// 4 most important concepts of OOP
// 1. Encapsulation - bundling together data and methods that operate on the data. Within a class.
//    				  Purpose is to prevent unauthorised entities to interact with the data.
// 					  Provide setters getters methods
// 2. Abstraction - hiding complex things behind a procedure that makes them look simple.
// 					only the essential details are displayed to the user.
// 					this is done using abstract classes
// 3. Inheritance - capability of a class to derive properties and characteristics from another class
// 					Sub/Derived Class - that inherits properties from another class 
// 					Super/Base Class - whose properties are inherited by the sub class
// 4. Polymorphism - ability of an object or a method to have many forms
// 					 Most common use is when a parent class reference is used to refer to a child class object
// 					 In c++ it is mainly divided into 2 types:
// 					 1. Compile time polymorphism- Function, Operator Overloading
// 					 2. Run time polymorphism - Function overriding, Virtual Functions

// Overloading (Compile Time) (Early Binding)
//  func(int a) and func(int a, int b)
// Overriding (Run Time) (Late Binding)
//  same function in derived class which is virtual in base class

// Modes of Inheritance
// 1. Public mode: If we derive a sub class from a public base class.
//                 Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in derived class.
// 2. Protected mode: If we derive a sub class from a Protected base class.
//                    Then both public member and protected members of the base class will become protected in derived class.
// 3. Private mode: If we derive a sub class from a Private base class.
//                  Then both public member and protected members of the base class will become Private in derived class.


////// C++ constructors ///////
// It is a special type of member function of a class which initializes objects of a class.
// In C++, Constructor is automatically called when object (instance of class) is created.
// It is special member function of the class because it does not have any return type.

// A constructor is different from normal functions in following ways:
//  Constructor has same name as the class itself
//  Constructors don’t have return type
//  A constructor is automatically called when an object is created.
//  It must be placed in public section of class.
//  If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body).

// Types of Constructors
// 1. Default Constructors: Default constructor is the constructor which doesn’t take any argument. It has no parameters.
// 2. Parameterized Constructors: It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created.

// Can we have more than one constructor in a class?
       // Yes, It is called Constructor Overloading.




////// C++ destructors ///////
// It is an instance member function which is invoked automatically whenever an object is going to destroy.
// Means, a destructor is the last function that is going to be called before an object is destroyed.
// The thing to be noted is that destructor doesn’t destroys an object.

// Properties of Destructor:
//  Destructor function is automatically invoked when the objects are destroyed.
//  It cannot be declared static or const.
//  The destructor does not have arguments.
//  It has no return type not even void.
//  An object of a class with a Destructor cannot become a member of the union.
//  A destructor should be declared in the public section of the class.
//  The programmer cannot access the address of destructor.

// When is destructor called? 
// A destructor function is called automatically when the object goes out of scope: 
// (1) the function ends 
// (2) the program ends 
// (3) a block containing local variables ends 
// (4) a delete operator is called

// Can there be more than one destructor in a class? 
//      No, there can only be one destructor in a class with classname preceded by ~, no parameters and no return type.

// When do we need to write a user-defined destructor? 
//      If we do not write our own destructor in class, compiler creates a default destructor for us.
//      The default destructor works fine unless we have dynamically allocated memory or pointer in class.
//      When a class contains a pointer to memory allocated in class, we should write a destructor to release memory before the class instance is destroyed. This must be done to avoid memory leak.

// Can a destructor be virtual?
//  Yes, it is always a good idea to make destructors virtual in base class when we have a virtual function.


//////// Order of Constructor/Destructor Call in C++ /////////////////
// If we inherit a class from another class and create an object of the derived class,
// it is clear that the default constructor of the derived class will be invoked but before that the default constructor of all of the base classes will be invoked.
// the constructor of base class is called first to initialize all the inherited members.

// Important Points: 
// Whenever the derived class’s default constructor is called, the base class’s default constructor is called automatically.
// To call the parameterized constructor of base class inside the parameterized constructor of sub class, we have to mention it explicitly.
// The parameterized constructor of base class cannot be called in default constructor of sub class, it should be called in the parameterized constructor of sub class.