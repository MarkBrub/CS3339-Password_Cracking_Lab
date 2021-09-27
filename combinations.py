import itertools
chars = 'abcdefghijklmnopqrstuvwxyz123456789'

list = [''.join(p) for p in itertools.product(chars, repeat=1)]
list += [''.join(p) for p in itertools.product(chars, repeat=2)]
list += [''.join(p) for p in itertools.product(chars, repeat=3)]
list += [''.join(p) for p in itertools.product(chars, repeat=4)]

textfile = open("randomStrings.txt", "w")
for element in list:
    textfile.write(element + "\n")
textfile.close()



numsPlus = '123456789!@#$%^&*-+=<>?'

list = [''.join(p) for p in itertools.product(numsPlus, repeat=1)]
list += [''.join(p) for p in itertools.product(numsPlus, repeat=2)]
list += [''.join(p) for p in itertools.product(numsPlus, repeat=3)]

textfile = open("numsAndSymbols.txt", "w")
for element in list:
    textfile.write(element + "\n")
textfile.close()