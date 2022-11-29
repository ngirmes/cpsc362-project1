# cpsc362-project1
Project: Library
Contributors: Carlos Castaneda, Salman Alsabah, Nicholas Girmes
Date:

1.1 Purpose 
<Identify the product whose software requirements are specified in this document, including the 
revision or release number. Describe the scope of the product that is covered by this SRS, 
particularly if this SRS describes only part of the system or a single subsystem.>

A library application that allows user to search for fantasy/sci-fi books within a databse. Version 1.0 (first version) 


1.4 Product Scope
<Provide a short description of the software being specified and its purpose, including relevant 
benefits, objectives, and goals. Relate the software to corporate goals or business strategies. If a 
separate vision and scope document is available, refer to it rather than duplicating its contents 
here.>

A library application that allows users to login, search for books within the fantasy and sci-fi genres, get recommendations for books, and see previous purchases. The application will use C++ programming software.

3.1 User Interfaces
<Describe the logical characteristics of each interface between the software product and the users. 
This may include sample screen images, any GUI standards or product family style guides that are 
to be followed, screen layout constraints, standard buttons and functions (e.g., help) that will 
appear on every screen, keyboard shortcuts, error message display standards, and so on. Define 
the software components for which a user interface is needed. Details of the user interface design 
should be documented in a separate user interface specification.>

The application will require users to use a terminal to interact with the application software. The software will ask users to provide a username and password to either login or create a new account, and answer questions about their preferences in order to recommend certain titles within the fantasy/sci-fi genre. Users must have a Windows, MAC, or Linux operating system and access to software that can run C++ applications. 
  
 3.3 Software Interfaces
<Describe the connections between this product and other specific software components (name 
and version), including databases, operating systems, tools, libraries, and integrated commercial 
components. Identify the data items or messages coming into the system and going out and 
describe the purpose of each. Describe the services needed and the nature of communications. 
Refer to documents that describe detailed application programming interface protocols. Identify 
data that will be shared across software components. If the data sharing mechanism must be 
implemented in a specific way (for example, use of a global data area in a multitasking operating 
system), specify this as an implementation constraint.>

This application software will be written in C++ (C17), using the IDE Visual Studio Code (V 1.71). The application can be run on Windows, Linux, or MAC OS. Our library database will be created using a .txt file that will be apart of the IDE environment. The application will start by asking the user to either login, or create and account, and will then prompt the user for the necessary itmes (username and password.) The application will then continue to ask the user to either search for a book, or take a quiz to recommend books to the user. If searching for a book, the user will be prompted to enter a title, as well as an author. When taking the quiz, the user will be asked a serious of yes or no questions to help algorithm recommend a title. Lastly, if the user enters a specific number, the application will show the user's previous purchases or rentals. Based on the user's quiz answers the application will then interact with the database to find a title that best complements the user's preferences. 

  TODO:
- Activity Diagram
- Use Case Diagram
- CRC Diagram
- Source Code in a zip file
- Read Me file
- Executable file
- Final Presentation PPT file
- Test Cases

