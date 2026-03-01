Team name: Demure Juggers
Team member(s): Diego Armenta, Vikram Thevar

Functionality: The functionality of this program is fairly simple. I created a linkedList file to implement nodes and creating new nodes to add to a list, as well as a math file that does the calculations for the standard deviation. The hash file
contains the actual hashfunction which takes each character of a string, transforms it into its ascii value, does operations on that depending on its position in the string, adds all the values up and then returns the value modulo k to give its index. 
To handle collisions, the array or table is an array of nodes or pointers that are null until initialized to an element which becomes the head. If a string gets an index that points to null it becomes the head other wise it traverses the list until it 
reaches the end and adds itself to the end. Overall the functionality works but the std dev can be better so I am continually working on it. 