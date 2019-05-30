class Solution:
    def convert(self, s: str, numRows: int) -> str:
        #there must be some mathematical pattern that exists that can simplify this problem
        if s == "":
            return ""
        if numRows == 1:
            return s
        
        myArray = [[0] * numRows for i in range(len(s))]
        goingDiag = False
        goingDown = True
        colNumber = 0
        rowNumber = 0
        myArray[colNumber][rowNumber] = s[0]
        counter = 1
        for letter in s[1:]:
            if goingDown:
                rowNumber +=1
            if goingDiag:
                rowNumber -=1
                colNumber +=1
            myArray[colNumber][rowNumber] = letter
            
            if rowNumber == numRows - 1 and goingDown :
                goingDiag = True
                goingDown = False
            
            if rowNumber == 0 and goingDiag:
                goingDown = True
                goingDiag = False
            counter +=1
        newString = ""
        
        #go through columns
        for i in range(numRows):
            for j in range(len(myArray)):
                if myArray[j][i] !=0:
                    newString += myArray[j][i]
                
        return newString
            
