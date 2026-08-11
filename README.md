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

`Constructors` : a special method that is created when a class is declared. 

`Abstraction`

`Inheritance`

`Polymorphism`
