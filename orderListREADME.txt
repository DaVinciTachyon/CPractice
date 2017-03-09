orderList

Usage
Have a text file in the same directory as the program is running in containing a list where the elements are separated by whitespaces (spaces, newlines, etc.), however, the cannot be an empty line between elements.
The program will request the name of the file so that it may order it by ascii code.
It will also request the name of the output file with the results of ordering it.
A file will appear in the directory containing the order version of the original file, with th name given by the user.

Pseudo-Code
describeProgram - Prints the general idea behind the program for the user to understand
fileNaming -  the user is asked tha name of the input file
              the user is asked the name of the output file
extractContent -  Takes in all the elements and stops when a line has no elements
                  Closes the file
                  Returns the length of the file
sortList -  Goes through the elements in the list and checks if an element is greater than the next, if it is it switches the elements
            If the characters are the same it will use recursion to order the two elements by the first differing character
outputFile -  The ordered list is placed into a file named by the user

Special Solutions
I used arrays as inputs in order to be able to return arrays.
I define arrays larger than contents of files in order to be able to statically allocate memory and account for most lengths of lists.
