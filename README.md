# Guia de Uso do Código "Super Trunfo Mestre"

Este programa compara atributos de duas "cartas" que representam cidades. O jogador escolhe um atributo, e o programa determina qual carta vence.

## Como Usar

### 1. Compilar o Código
Use um compilador C, como o GCC, para compilar o programa:

```bash
gcc super_trunfo.c -o super_trunfo
```

No Windows:

```cmd
super_trunfo.exe
```

### 2. Executar o Programa
Após a compilação, execute o programa:

```bash
./super_trunfo
```

### 3. Escolher um Atributo
O programa exibe as informações de duas cartas e solicita que você escolha um atributo para comparar. As opções são:

1. População  
2. Área  
3. PIB  
4. Pontos turísticos  
5. Densidade populacional  
6. PIB per capita  
7. Super Poder  

Digite o número correspondente ao atributo e pressione **Enter**.

### 4. Resultado
O programa compara o atributo escolhido e exibe o vencedor ou informa se houve empate.

### Exemplo de Execução
```
[...]
Escolha um atributo para realizar a comparacao:
-------------------------------------
1. Populacao
2. Area
3. PIB
4. Pontos turisticos
5. Densidade populacional
6. PIB per capita
7. Super Poder

-------------------------------------
Escolha uma opcaoo: 7


Comparacao do atributo Super Poder:
-------------------------------------
Sao Paulo (SP): 700012363776.00
Rio de Janeiro (RJ): 300006768640.00

Resultado: A Carta 1 e a vencedora!
```