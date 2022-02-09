# **Problem Statement**

## **Phonebook Management System**

# **Objective**

* Phonebook is a project in C that can help in order to understand the basic concepts of functions, file handling and data structure. The main objective of the phone boo managment system is that the application should be user friendly and the user should easily add the contact number ,delete the contact and also the application should display the contacts and its details .

# **Features-**


## **1.Add phone record:** 

This features adds a new phone record to the file. It asks for the phone number and name of the person whose record is to be created.


## **2.Search phone records:**

 This function is very simple, and with it users can search for a phone record either by providing the phone number or by the name of a particular person whose record has already been added in the file.


## **3.Show phone records:**

 In phonebook management system, this feature allows user to list all the phone records stored in file. The information displayed here are phone record number, phone number and the person’s name.


## **4.Modify phone record:**

 This simple feature allows user to edit the phone number and person name corresponding to a particular phone record.


## **5.Delete phone record:**

 This feature deletes added phone record from the file. The user needs to provided the phone number to be deleted from phonebook management system.


## **6.Search phone record:**

This feature searches added phone record from the file. The user needs to provided the phone number to be searched from phonebook management system.


# **4W and 1H**

## **WHAT**


* Phonebook application with many features

## **WHERE**

* Used in mobile phones

## **WHEN**

* To save the contact,delete,modify,search etc

## **WHO**

* useful for a user 

## **WHY**

* The functions implemented in the phonebook application will help to perform various tasks which helps the user to contact and manage it 



# SWOT ANALYSIS


## **Strength**

It helps to manage the phonebook ,Helps in various functions such as addition ,deletion and display of contacts.

## **Weaknesses**

If not properly maintained data can be lost

## **Opportunities**

Can perform various tasks

## **Threats**

If not properly maintained data can be lost


# **High level Requirements**

* Managing all the new contact numbers

* Managing all the newly added contact numbers

* Managing all the details

* Managing all the New Phone Number 

* Managing all the Login

# **Low level Requirements**
* Admins login into the system and process al the functionalities

* Management System Admin can add, edit, delete and view the records of New Phone Number,  
  List    of  Contact 

* Login Admin can manage all the details of Contact Details

* Admin can also generate reports of New Phone Number, Contact Details,  List of
  Contact

* Admin can search the details of Contact Details, List of Contact,  can apply different    
  level of filters on report of New Phone Number,  List of Contact
  
* Admin can tracks the detailed information of Contact Details, List of Contact.

# **Structural diagram explaination**


* The structual diagram shows how the system is divided into sub-systems (processes), each of which deals  
  with one or more of the data flows to or from an external agent, and which together provide all of the functionality of the Telephone Directory Management System system as a whole.

## **Main entities**

* Processing New Phone Number records and generate report of all New Phone Number Processing Contact Details records and generate report of all Contact Details 
 
# **Behavioural diagram explaination**


* Admin will be able to login in their account using their credentials. After login user can manage all the operations on Address, Email Id, City Name, Phone Number, Contact. All the pages such as City Name, Phone Number, Contact are secure and user can access these page after login. 

* The various objects in the Phone Number, Address, Email Id, City Name, and Contact page—interact over the course of the sequence, and user will not be able to access this page without verifying their identity.

# **Time complexities in O**

**1.Deletion O(n)**

# **Steps involved in implementation**

* Initially structure phonebook is been declared consisting of the structure variables first name,last     name and phone number

* The functions which has to be performed in an phonebook managment system are been called

* The functions involves addition ,deletion,display and search of contact numbers

* In the main function using the switch statment ,different options are made available for a user ,for user friendly interface

* In the addition function,first name and last name are been feed by the user and it is saved in the directory

* If the user wants to delete any contact the system takes the user input and deletes the file from the directory using the delete function 

* In the function view contacts all the contacts saved will be displayed upon performing all the operations

# **Output-**

# **MAIN MENU**

## Options-

* Add a contact 

* Delete a contact

* Display the contact details

* Exit

# **Add a contact**

* User needs to enter the first name , last name nd phone number.

* A message "A friend added" will be displayed n sucessful addition .

* If none added then a message "No friend" would be displayed.

# **Delete a contact**

 * User input is needed to delete the contact 
 
 * The user needs to enter the first name , last name nd phone number.

* A message "A friend deleted" will be displayed n sucessful deletion .

# **Display all the contact**

* All the contacts would be displayed after all the operations.

# **Exit**

* The phonebook application would exit on seleting the option by the user. 

