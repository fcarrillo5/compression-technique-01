# compression-technique-01
Different compression techniques are used in order to reduce the size of the messages sent over the web. An algorithm is designed to compress a given string by describing the total number of consecutive occurrences of each character next to it. For example, consider the string "abaasass". Group the consecutive occurrence of each character:

>'a' occurs one time.
>'b' occurs one time.
>'a' occurs two times consecutively.
>'s' occurs one time.
>'a' occurs one time.
>'s' occurs two times consecutively.

If a character only occurs once, it is added to the compressed string. If it occurs consecutive times, the character is added to the string followed by an integer representing the number of consecutive occurrences. Thus the compressed form of the string is "aba2sas2". Function Description Complete the function compressedString in the editor below. The function must return the compressed form of message
