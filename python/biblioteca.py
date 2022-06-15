# Funções de uma biblioteca para a segunda verificação de aprendizagem de IP

import re

comando = 0

while comando != '5':

    # menu

    print(".° ｡ *✧ Bem vindo ao menu da biblioteca ✧* ｡°.")
    print("1 - Entre os livros publicados no ano X, qual foi o melhor avaliado? (1)") #entre () está o número da consulta da lista
    print("2 - Dado dois autores X e Y, mostre qual deles tem a melhor avaliação média: (8)")
    print("3 - Mostre o X livro melhor avaliado de uma editora Y e seu ano de publicação: (13)")
    print("4 - Mostre o X ano que teve mais avaliações com um intervalo entre X e Y: (16)")
    print("5 - Sair do menu\n")

    comando = input("Digite o comando desejado: ")

    if comando == '1':
        inteiros = re.compile('.*[^0-9].*')
        ano_escolhido = input("Insira o ano escolhido: ")
        lista_livros = set()
        
        if (inteiros.match(ano_escolhido) == None):
            ano_escolhido = '"' + ano_escolhido + '"'

            BX_ano = open("BX-Books.csv", "r", errors = 'ignore')

            for i in BX_ano:
                linha = i. split(';')
                ano = linha[3]
                isbn = linha[0]

                if ano_escolhido == ano:
                    lista_livros.add(isbn)
    
            BX_ano.close()

            BX_notas = open("BX-Book-Ratings.csv", "r", errors = 'ignore')

            lista_notas = []

            for i in BX_notas:
                lista = i. split(';')
                isbn1 = lista[1]
                notas = lista[2][1:len(lista[2])-2]

                if isbn1 in lista_livros:
                    lista_notas.append(lista[1]+';'+notas)

            BX_notas.close()

            lista_notas.sort()
            maior_media = -1
            maior_isbn = "z"
            isbn_atual = lista_notas[0]. split(';')[0]
            soma = 0 
            quantidade = 0

            for i in lista_notas:
                dec = i.split(";")
                isbn = dec[0]
                nota = dec[1]

                if isbn == isbn_atual:
                    soma = soma + int(nota)
                    quantidade = quantidade + 1

                else:
                    if quantidade != 0:
                        media = float(soma/quantidade)

                    if media >= maior_media:
                        maior_media = media
                        maior_isbn = isbn
            
                    soma = int(nota)
                    quantidade = 1
                    isbn_atual = isbn

            if quantidade != 0:
                media = float(soma/quantidade)

                if media > maior_media:
                    maior_media = media
                    maior_isbn = isbn

            BX_ano = open("BX-Books.csv", "r", errors = 'ignore')

            for i in BX_ano:
                linha = i. split(';')
                isbn = linha[0]
        
                if maior_isbn == isbn:
                    livro = linha[1]
            BX_ano.close()
     
            print("O livro do ano {} com maior avaliação é {}, que tem o ISBN de: {}\n". format(ano_escolhido[1:len(ano_escolhido)-1], livro[1:len(livro)-1], maior_isbn[1:len(maior_isbn)-1]))

        else:
            print("Ano não registrado\n")

    if comando == '2':

        X = input("Insira o nome do primeiro autor: ")
        Y = input("Insira o nome do segundo autor: ")
        livros_X = set()
        livros_Y = set()

        X = '"' + X + '"'
        Y = '"' + Y + '"'
        
        if X != Y:

            BX_autores = open("BX-Books.csv", "r", errors = "ignore")

            for i in BX_autores:
                linha = i.split(';')
                isbn = linha[0]
                autor = linha[2]

                if X == autor:
                    livros_X.add(isbn)
                if Y == autor:
                    livros_Y.add(isbn)

            BX_autores.close()

            BX_media = open("BX-Book-Ratings.csv", "r", errors = "ignore")

            nota_x = 0
            quantidade_x = 0
            nota_y = 0
            quantidade_y = 0

            for i in BX_media:
                linha = i.split(';')
                nota = linha[2][1:len(linha[2])-2]
                isbn = linha[1]

                if isbn in livros_X:
                    nota_x = nota_x + int(nota)
                    quantidade_x = quantidade_x + 1
                if quantidade_x != 0:
                    media_x = float(nota_x/quantidade_x)

                if isbn in livros_Y:
                    nota_y = nota_y + int(nota)
                    quantidade_y = quantidade_y + 1
                if quantidade_y != 0:
                    media_y = float(nota_y/quantidade_y)

            BX_media.close()

            if media_x > media_y:
                print("O autor com a maior avaliação média é: {}\n". format(X[1:len(X)-1]))
    
            if media_y > media_x:
                print("O autor com a maior avaliação média é: {}\n". format(Y[1:len(Y)-1]))
    
            if media_y == media_x:
                print("Os autores possuem a mesma média de avaliação\n")

        else:
            print("Os autores digitados são os mesmos\n")

    if comando == '3':

        editora_escolhida = input("Insira a editora escolhida: ")
        lista_livros = set()
        
        editora_escolhida = '"' + editora_escolhida + '"'
    
        BX_editora = open("BX-Books.csv", "r", errors = 'ignore')

        for i in BX_editora:
            linha = i. split(';')
            editora = linha[4]
            isbn = linha[0]
    
            if editora_escolhida == editora:
                lista_livros.add(isbn)
    
        BX_editora.close()

        BX_notas = open("BX-Book-Ratings.csv", "r", errors = 'ignore')

        lista_notas = []

        for i in BX_notas:
            lista = i. split(';')
            isbn = lista[1]
            notas = lista[2][1:len(lista[2])-2]

            if isbn in lista_livros:
                lista_notas.append(lista[1]+';'+notas)

        BX_notas.close()
    
        lista_notas.sort()
        maior_media = -1
        maior_isbn = "z"
        isbn_atual = lista_notas[0]. split(';')[0]
        soma = 0 
        quantidade = 0

        for i in lista_notas:
            dec = i.split(";")
            isbn = dec[0]
            nota = dec[1]

            if isbn == isbn_atual:
                soma = soma + int(nota)
                quantidade = quantidade + 1

            else:
                if quantidade != 0:
                    media = float(soma/quantidade)

                if media > maior_media:
                    maior_media = media
                    maior_isbn = isbn
            
                soma = int(nota)
                quantidade = 1
                isbn_atual = isbn

        if quantidade != 0:
            media = float(soma/quantidade)

            if media > maior_media:
                maior_media = media
                maior_isbn = isbn

        BX_ano = open("BX-Books.csv", "r", errors = 'ignore')

        for i in BX_ano:
            linha = i. split(';')
            isbn = linha[0]
        
            if maior_isbn == isbn:
                livro = linha[1]
                ano = linha[3]
            
        BX_ano.close()
     
        print("O livro da editora {} com maior avaliação é {}, de {}". format(editora_escolhida[1:len(editora_escolhida)-1], livro[1:len(livro)-1], ano[1:len(ano)-1]))

    if comando == '4':

        X = input("Insira o início do intervalo: ")
        Y = input("Insira o fim do intervalo: ")
        anos = dict()
        inteiros = re.compile('.*[^0-9].*')
        quantidade = dict()

        if (inteiros.match(X) == None) and (inteiros.match(Y) == None):
            X = int(X)
            Y = int(Y)

            if X != Y and X < Y:
                for i in range(X, Y+1):
                    anos[i] = set()
                    quantidade[i] = 0

                BX_ano = open("BX-Books.csv", "r", errors = "ignore")

                BX_ano.readline()

                for i in BX_ano:
                    linha = i.split(';')
                    isbn = linha[0]
                    ano = linha[3][1:len(linha[3])-1]

                    if (inteiros.match(ano) == None and len(ano) != 0):
                        if X <= int(ano) and int(ano) <= Y:
                            anos[int(ano)].add(isbn)

                BX_ano.close()

                BX_quantidade = open("BX-Book-Ratings.csv", "r", errors = "ignore")

                for i in BX_quantidade:   
                    linha = i.split(';')
                    isbn = linha[1]
                    notas = linha[2]

                    for a in anos:
                        if isbn in anos[a]:
                            quantidade[a] = quantidade[a] + 1
                            break   
            
                BX_quantidade.close()           
            
                maior_quantidade = 0
                maior_ano = 1

                for i in quantidade:   
                    if quantidade[i] > maior_quantidade:
                        maior_quantidade = quantidade[i]
                        maior_ano = i

                print("O ano com maior quantidade de avaliações é {} e possuí {} avaliações\n". format(maior_ano, maior_quantidade))
            
            else:
                print("Intervalo não registrado\n")
        else:
            print("Ano(s) não registrados\n")
