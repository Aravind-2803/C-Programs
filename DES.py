#Hello World!
IP_MATRIX = [
    58, 50, 42, 34, 26, 18, 10, 2,
    60, 52, 44, 36, 28, 20, 12, 4,
    62, 54, 46, 38, 30, 22, 14, 6,
    64, 56, 48, 40, 32, 24, 16, 8,
    57, 49, 41, 33, 25, 17, 9,  1,
    59, 51, 43, 35, 27, 19, 11, 3,
    61, 53, 45, 37, 29, 21, 13, 5,
    63, 55, 47, 39, 31, 23, 15, 7
]

SELECTION_TABLE = [
    32,  1,  2,  3,  4,  5,
     4,  5,  6,  7,  8,  9,
     8,  9, 10, 11, 12, 13,
    12, 13, 14, 15, 16, 17,
    16, 17, 18, 19, 20, 21,
    20, 21, 22, 23, 24, 25,
    24, 25, 26, 27, 28, 29,
    28, 29, 30, 31, 32,  1
]


def string_to_8x8_matrix(text):
    
    if len(text) != 8:
        raise ValueError("String must be exactly 8 characters long to fill an 8x8 matrix.")


    binary_string = "".join(format(ord(char), '08b') for char in text)
    
    
    bit_list = [int(bit) for bit in binary_string]
    
    
    matrix = [bit_list[i : i + 8] for i in range(0, 64, 8)]
    
    return matrix


def Split_and_process(text):
    
    all_matrices=[]
    
    for i in range(0, len(text) , 8):
        
        block = text[i:i+8]
        
        padded_block = block.ljust(8,'\x00')
        
        generated_matrix = string_to_8x8_matrix(padded_block)
        
        all_matrices.append(generated_matrix)
        
    return all_matrices
        

input_text = input("Enter The Message To Perform DES : ")

result_matrcies = Split_and_process(input_text)

for index, mat in enumerate(result_matrcies):
    print(f"--- Matrix {index + 1} ---")
    for row in mat:
        print(row)


