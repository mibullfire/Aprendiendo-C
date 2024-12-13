def esVocal():
    letra = input('Letra: ')

    if letra in ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']:
        print('Si')
    else:
        print('No')

esVocal()