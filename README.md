### Hello There  
This repo captures my understanding of the concept of Object Oriented programming in C++ language.  
  
Objects are entities in the real world. `Instance of a class`  
Classes are blueprints of the objects.  

Class declaration:
``` cpp
class ClassName{
    //properties / attributes: member variables/ data members
    //methods: member funcitons
};
```  

Object declaration:
``` cpp
ClassName obj1, obj2, etc..;  
```  

Scope/access specifiers:  

`private` : data & methods accessible inside class (by default, everything is declared under private)  

`public` : data & methods accessible to everyone  

`protected` : (useful in inheritance) data & methods accessible inside class & to its derived class  

`Encapsulation` : wrapping up of data members and member functions in single unit called `class`
- data hiding (using private to store data that should not be accessile to the general user base)
- hiding passwords and account balances in a bank application

`Constructors` : a special method that is automatically invoked when an object is declared. Used for initialization of objects.
- same name as classs
- no return type
- only called once during object creation
- memory allocation happens when constructor is called
- always declared in public scope

Three types of constructors:
- `non parameterized`: does not use parameters
- `parameterized`: uses parameters
- `copy`: special constructor that copies properties of one object to another (made by compiler default even if user does not)
    ``` cpp
        className obj1(parameters);
        className obj2(obj1);
    ```  
Types of copy:  
- `shallow copy`: copies all the member values from one object to another (majority use case) problematic when Dynamic memory allocation invovled  
- `deep copy`: makes copies of member values and also copies of dynamically allocated memory the member points to  

All three types having the same name (as the class name) can be used in the same program but with different types of parameters. This feature of a constructor to be defined in different ways based on parameters is called `Constructor Overloading` and is an example of `Polymorphism`

"this -> " is a special pointer in C++ used to point to the current pointer and its properties and methods. Used when programmer wants to pass the parameteres with the same name as properties so uses this->properties to refer to the objects properties.

Alternativly `this -> property` can be written as `*(this).prop`

`Abstraction`

`Inheritance`

`Polymorphism`
