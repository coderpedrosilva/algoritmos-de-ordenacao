# algoritmos-de-ordenacao

Algoritmo de ordenação em ciência da computação é um algoritmo, de manipulação de dados, 
que coloca os elementos de uma dada sequência em uma certa ordem, em outras palavras, 
efetua sua ordenação completa ou parcial. Nesse repositório temos alguns dos principais
algoritmos de ordenação, são eles:

## select sort

A ordenação por seleção ou select/selection sort consiste em selecionar o menor item e colocar na primeira posição, 
selecionar o segundo menor item e colocar na segunda posição, segue estes passos até que reste um único elemento. 
Para todos os casos (melhor, médio e pior caso) possui complexidade C(n) = O(n²) e não é um algoritmo estável.

## insert sort
Insert/Insertion sort ou ordenação por inserção é o método que percorre um vetor de elementos da esquerda para a 
direita e à medida que avança vai ordenando os elementos à esquerda. Possui complexidade C(n) = O(n) no melhor 
caso e C(n) = O(n²) no caso médio e pior caso. É considerado um método de ordenação estável.
Um método de ordenação é estável se a ordem relativa dos itens iguais não se altera durante a ordenação.
O funcionamento do algoritmo é bem simples: consiste em cada passo a partir do segundo elemento selecionar o 
próximo item da sequência e colocá-lo no local apropriado de acordo com o critério de ordenação.

## bubble sort

O bubble sort, ou ordenação por flutuação (literalmente "por bolha"), é um algoritmo de ordenação dos mais simples. 
A ideia é percorrer o vector diversas vezes, e a cada passagem fazer flutuar para o topo o maior elemento da sequência. 
Essa movimentação lembra a forma como as bolhas em um tanque de água procuram seu próprio nível, e disso vem o nome 
do algoritmo. No melhor caso, o algoritmo executa n operações relevantes, onde n 
representa o número de elementos do vector. No pior caso, são feitas n^2 operações. A complexidade 
desse algoritmo é de ordem quadrática. Por isso, ele não é recomendado para programas que precisem de velocidade e 
operem com quantidade elevada de dados.

## shell sort

Criado por Donald Shell em 1959, o método Shell Sort é uma extensão do algoritmo de ordenação por inserção. 
Ele permite a troca de registros distantes um do outro, diferente do algoritmo de ordenação por inserção 
que possui a troca de itens adjacentes para determinar o ponto de inserção. A complexidade do algoritmo é 
desconhecida, ninguém ainda foi capaz de encontrar uma fórmula fechada para sua função de complexidade e 
o método não é estável. Os itens separados de h posições (itens distantes) são ordenados: o elemento na 
posição x é comparado e trocado (caso satisfaça a condição de ordenação) com o elemento na posição x-h. 
Este processo repete até h=1, quando esta condição é satisfeita o algoritmo é equivalente ao método de inserção.
A escolha do salto h pode ser qualquer sequência terminando com h=1.

## quick sort

O algoritmo quick sort, criado por C. A. R. Hoare em 1960, é o método de ordenação interna mais rápido que 
se conhece para uma ampla variedade de situações. Provavelmente é o mais utilizado. Possui complexidade 
C(n) = O(n²) no pior caso e C(n) = O(n log n) no melhor e médio caso e não é um algoritmo estável.
É um algoritmo de comparação que emprega a estratégia de “divisão e conquista”. A ideia básica é dividir 
o problema de ordenar um conjunto com n itens em dois problemas menores. Os problemas menores são ordenados 
independentemente e os resultados são combinados para produzir a solução final. Basicamente a operação do 
algoritmo pode ser resumida na seguinte estratégia: divide sua lista de entrada em duas sub-listas a partir 
de um pivô, para em seguida realizar o mesmo procedimento nas duas listas menores até uma lista unitária.
</br>
Funcionamento do algoritmo:
</br>
Escolhe um elemento da lista chamado pivô.
Reorganiza a lista de forma que os elementos menores que o pivô fiquem de um lado, e os maiores fiquem de 
outro. Esta operação é chamada de “particionamento”. Recursivamente ordena a sub-lista abaixo e acima do pivô.

## merge sort

Criado em 1945 pelo matemático americano John Von Neumann o Mergesort é um exemplo de algoritmo de ordenação 
que faz uso da estratégia “dividir para conquistar” para resolver problemas. É um método estável e possui 
complexidade C(n) = O(n log n) para todos os casos. Esse algoritmo divide o problema em pedaços menores, 
resolve cada pedaço e depois junta (merge) os resultados. O vetor será dividido em duas partes iguais, que 
serão cada uma divididas em duas partes, e assim até ficar um ou dois elementos cuja ordenação é trivial.
Para juntar as partes ordenadas os dois elementos de cada parte são separados e o menor deles é selecionado 
e retirado de sua parte. Em seguida os menores entre os restantes são comparados e assim se prossegue até juntar as partes.

## heap sort

O heap sort utiliza uma estrutura de dados chamada heap, para ordenar os elementos à medida que os insere na estrutura. 
Assim, ao final das inserções, os elementos podem ser sucessivamente removidos da raiz da heap, na ordem desejada, 
lembrando-se sempre de manter a propriedade de max-heap. A heap pode ser representada como uma árvore (uma árvore binária 
com propriedades especiais[1]) ou como um vetor. Para uma ordenação decrescente, deve ser construída uma heap mínima 
(o menor elemento fica na raiz). Para uma ordenação crescente, deve ser construído uma heap máxima (o maior elemento fica na raiz).
