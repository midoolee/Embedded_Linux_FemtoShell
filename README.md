# Embedded_Linux_FemtoShell

This program enable the user to echo anything he writes in the terminal,
and it gives a hint to the user if he needs to quit , The user shall type exit in lower case.

This program is consisting of 2 functions 
1- Echo_fun()
2- main() 

# Echo_fun()
return : bool
parameter : void
description : Gets any string from the user and by default return true and if exit is entered it shall return false

# main()
return : int
parameter : void
description : contains the application to demonstrate the so-called femtoShell app ;
inside a while(1) loop the app keeps on calling Echo_fun() and checking on the return ,
if true -> keeps on reading from the user a string
else false -> the user enter "exit" and the program terminates and print "Good bye :)"
