# IO-File-Lab
IO lab for CSC121 (Filestreams)
Joseph Kloepper
```
Algorithm/Pseudocode

Create:
    Variables for the the data.csv file
    A file pointer to open data.csv
    A stringstream to break up the lines into parts
    A string to support each line
    Strings for the csv fields (temporarily)
    Integers for the converted numbers
    A delimiter (char)

Main function:
    Open the data.csv file
    Use a loop to:
        Loop through the lines
        Read the lines
        Put the lines into stringstream
        Use getline + delimiter to retreive the first and second number as strings
        Use getline to retreive the word from csv file
        Convert the two strings into integers
        Add those two integers
        Print the respective string x amount of times.
    End the loop
         


```
