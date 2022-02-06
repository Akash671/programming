
# Python program for the above approach

def printSubStrings(str):
    # First loop for starting index
    for i in range(len(str)):
        subStr = "";
        
        # Second loop is generating sub-String

        for j in range(i,len(str)):

            subStr += str[j];

            print(subStr + "");

         
# Driver Code

if __name__ == '__main__':
    str = "abcd";
    printSubStrings(str);

     
# This