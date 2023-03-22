# CS 415: Vending Machine (Learn C++)
This is a simple vending machine program designed and developed in C++ on Linux to demonstrate proficiency in C++ and object-oriented programming. 

<h3>Learning Goals</h3>
The primary learning goals of this project are:

* To demonstrate proficiency in C++ programming on Linux.
* To demonstrate proficiency in object-oriented programming by designing and developing a simple program.

<h3>Program Description</h3>
The program is designed to simulate a vending machine that sells candy and other items. The program has two main components:

* A dispenser that keeps track of what it is selling, how much it costs, and how many items are left. It has a print method and a dispense method.
* A cash register that starts with $50 (for change). It has a function that collects a certain amount of money from the user. It adds the money to the total cash. If the user inserts more money than the item is worth, then it should return the extra. If the user doesn't insert enough money, it should keep asking for money until the user has inserted enough money to pay for the product.

<h3>Requirements</h3>
The following are the requirements:

* Display the list of available products along with their quantities to the customer.
* Allow the customer to select a product and release the desired item.
* The vending machine should be capable of dispensing 5 different types of items with varying quantities.
* Develop a main program and two classes - dispenser class and register class. The classes should only contain private variables.
* The program should initialize and stock the 5 dispensers with various items, then each dispenser should display its information. After that, the program should prompt the user to select the desired item, calculate the cost, ask the register class to collect the money, and finally dispense the item.
* Create a makefile and compile the program using it.
