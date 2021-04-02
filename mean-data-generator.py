from random import randint
from random import choice as ch

num_problems = 10
max_size_of_data_set = 15
size_of_data_set = randint(2, max_size_of_data_set)
lower_bound = randint(1, 80)
upper_bound = randint(lower_bound, 5*lower_bound)

num_array = []

for problem in range(num_problems):
    for x in range(size_of_data_set):
        num_array.append(randint(lower_bound, upper_bound))

    tex_string = '\\item '
    for num in num_array:
        tex_string += str(num) + ', '

    tex_string = tex_string[:-2]
    print(tex_string)
    num_array = []
    size_of_data_set = randint(2, max_size_of_data_set)

# Cipher
plain_text = ['Geometry exists in everyones heart',
                'A cat, a hat, a rat']
for message in plain_text:
    cipher_text = []
    for char in message:
        if char == ' ':
            cipher_text.append(' ')
            # print(' ,', end='')
        else:
            cipher_text.append(ord(char.lower()))
            # print(ord(char.lower()), sep = ',', end=',')
    print()

    print(*cipher_text, sep=", ")
    cipher_text = []

# Mode
choices = ['a', 'b', 'b', 'c', 'd', 'e']
data = []
for x in range(20):
    data.append(ch(choices))

print(*data, sep=', ')
