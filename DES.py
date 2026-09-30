#Hello World!

def string_to_8x8_matrix(text):
    
    if len(text) != 8:
        raise ValueError("String must be exactly 8 characters long to fill an 8x8 matrix.")


    binary_string = "".join(format(ord(char), '08b') for char in text)
    
    
    bit_list = [int(bit) for bit in binary_string]
    
    
    matrix = [bit_list[i : i + 8] for i in range(0, 64, 8)]
    
    return matrix


def Spli(text):
    s1=''
    s2=''
    for i in range(len(text)):
        if len(s1) < 8:
            s1=s1+text[i]           
            print(s1)
        elif len(s2) < 8:
            s2=s2+text[i]
            print(s2)
    if len(s1)==8:
        b1 = string_to_8x8_matrix(s1)
    if len(s2)==8:
        
        b2 = string_to_8x8_matrix(s2)
    for row in b1:
        print(row)
    for row in b2:
        print(row)

input_text = input("Enter The Message To Perform DES : ")
#matrix = string_to_8x8_matrix(input_text[0-7])
Spli(input_text)
#matrix=Spli(input_text)
#for row in matrix:
#    print(row)
