# Ruby Methods
## String Methods
> A new string is returned, unless a bang (!) is added after the method (for example, .split!) which mutates the original string.

METHOD              | FUNCTION
--------------------|---------------------------------------------------------------------
.strip              | removes the leading and trailing whitespace on strings
.chomp              | removes the last character in a string, only if it's a carriage return or new line
.upcase             | makes all characters in a string UPCASE
.downcase           | makes all characters in a string DOWNCASE
.class              | describes the class of an object
.object_id          | returns the integar identifier for an object    
.length             | returns the number of characters in a string (incl. whitespace)
.count              | counts how many time a specific character is found in string - for example, _"HELLO".count('L')_
.insert             | inserts a string into another string before a given index - for example, _"Hello".insert(3, "hi5") -> Helhi5lo_
.capitalise         | makes the first letter in a string uppercase and the rest downcase
.reverse            | reverses the order of characters in a string - for example, _"Hello World!".reverse -> "!dlroW olleH"_
.split              | takes string and splits it into an array, then returns the array default method splits based on whitespace, unless different separator provided ("" to split by character; " " to split by word)
.chop               | removes the last character of the string - for example, _"Batman".chop -> "Batma"_
.pop                | removes the last letter in a string and returns it - for example, _"Linda".pop_ would return "a"
.include?("STRING") | to test if a string is included in another
.index("STRING")    | looks for partial words, returns index where the start of this string is found
to_s                | converts data type to string
to_i                | convert data type to integar
to_f                | convert data type to float
to_sym              | convert data type to symbol
<<                  | string concatenation
.each_char          | returns an array of characters in a string
.gsub               | to replace text in a string: for example, for _string = "We have many dogs"_, method would be _string.gsub("dogs", "cats")_


## Sub-String Methods
METHOD              | FUNCTION
--------------------|---------------------------------------------------------------------
_string = "abc123"_ | _Below examples use this string_
string[x,y]         | x = starting index, y = number of characters you want - for example _string[3,3] -> 123_         
string[0..-2]       | get characters within a range - first index is starting, second is ending index (inclusive)
(1..10).to_a        | _[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]_
('A'..'Z').to_a     | creates an array of alphabetical letters - for example ["A", "B", "C", "D", "E", "F"]

## Number Methods
METHOD              | FUNCTION
--------------------|---------------------------------------------------------------------
.abs                | returns the absolute (positive) version of an integar/float
.round              | rounds float to a given precisio in decimal digits, default is 0 - for example, _.round(2) -> two decimal places_


## Array Methods
METHOD              | FUNCTION
--------------------|---------------------------------------------------------------------
.join               | takes an array of strings and joins them into a single string, can pass a character separator as an argument
.length             | tallies the number of elements inside an array
.first              | accesses the first element of the array
.last               | accesses the last element of the array
.take               | returns the first 'n' elements of the array - for example, _arr =  [0, 1, 2, 3, 4]_, the function and result would be _arr.take(3) -> [0, 1, 2]_
.drop               | returns the elements after 'n' elements of an array
.pop                | permanently remove the last element of an array
.shift              | permanently remove the first element of an array, returns element
.push               | to add an element to the end of an array - for example, _arr.push(99) -> [0, 1, 2, 3, 4, 99]_
.unshift            | add an element to the beginning of an array _arr.unshift(1) -> [1, 2, 3]_
.delete             | removes a specified element from an array permanently
.delete_at          | permanently remove an element of an array from a specified index
.reverse            | reverses the array but does not mutate it
.select             | iterates over an array and returns a new array that includes values that return true
.is_a? Integar      | iterates through an array to check Class type.

## Conversion Functions
METHOD              | FUNCTION
--------------------|---------------------------------------------------------------------
.to_i               | convert to integer
.to_f               | convert to float
.to_s               | convert to string
.to_sym             | convert to symbol
.to_a               | convert to array
