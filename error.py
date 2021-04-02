import pyfiglet

print(pyfiglet.figlet_format("DAVID SELLERS"))

try:
    with open('samplefile', 'r') as f:
        print(samplefile.read())
except FileNotFoundError:
    print('File not found.')
    create = input('Do you wish to create the file?')
    if create == 'y':
        print('File Created!')
