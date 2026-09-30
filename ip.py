# 1. Predefined DES Initial Permutation (IP) Matrix (1-indexed as per standard specification)
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

def des_initial_permutation(input_bits, ip_matrix):
    """
    Performs matrix matching/permutation using the DES IP method.
    
    :param input_bits: A string of 64 bits (e.g., '01101...') or list of 64 bits
    :param ip_matrix: The predefined 64-element IP transformation matrix
    :return: Permuted 64-bit string
    """
    # Map and match input bits to their new positions defined by the IP matrix
    # Subtracting 1 handles the transition from 1-indexed standard to 0-indexed Python lists
    permuted_bits = "".join(input_bits[position - 1] for position in ip_matrix)
    return permuted_bits

# --- Example Usage ---
# A sample 64-bit block representing plaintext block data
sample_plaintext_bits = "1100000011000000110000001100000011000000110000001100000011000000"

# Execute the matching operation
output_bits = des_initial_permutation(sample_plaintext_bits, IP_MATRIX)

print("Original Bits: ", sample_plaintext_bits)
print("Permuted Bits: ", output_bits)
