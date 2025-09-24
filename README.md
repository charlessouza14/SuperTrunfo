# Super Trunfo - Jogo de Cartas

Olá! Este é meu projeto da faculdade do jogo Super Trunfo feito em C.

## O que é este jogo?

É um jogo simples onde você compara duas cartas de países. Cada carta tem informações como população, área, PIB, etc. Você escolhe qual característica quer comparar e o programa mostra qual país "ganha".

## Como usar

### Para quem nunca mexeu com programação:

1. Você precisa ter um compilador de C no seu computador (tipo o Dev-C++ ou Code::Blocks)
2. Baixe o arquivo `super_trunfo.c`
3. Abra no seu programa de C
4. Aperte F9 para compilar e rodar

### Se você souber usar o terminal:

```
gcc super_trunfo.c -o super_trunfo
./super_trunfo
```

## Como funciona o jogo

1. O programa mostra um menu com 5 opções:
   - População
   - Área  
   - PIB
   - Pontos Turísticos
   - Densidade Demográfica

2. Você digita um número de 1 a 5

3. O programa compara as duas cartas (Brasil e Japão) usando a característica que você escolheu

4. Mostra qual país ganhou

## Regras importantes

- Na maioria das comparações, **ganha quem tem o maior número**
- **EXCETO** na Densidade Demográfica: aí ganha quem tem o **menor número**
- Se os números forem iguais, dá empate

## Exemplo de como fica

```
=== SUPER TRUNFO - ESCOLHA O ATRIBUTO ===
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos  
5 - Densidade Demográfica
Digite sua escolha (1-5): 1

--- CARTA 1 ---
País: Brasil
População: 215000000 habitantes
(... outras informações ...)

--- CARTA 2 ---
País: Japão
População: 125800000 habitantes
(... outras informações ...)

🏆 VENCEDOR: Brasil (maior população)
```

## Países que estão no jogo agora

- **Brasil**: 215 milhões de habitantes, 8.515.767 km², PIB 2.055 bilhões, etc.
- **Japão**: 125,8 milhões de habitantes, 377.975 km², PIB 4.940 bilhões, etc.

## Observações

- Os números são aproximados, peguei da internet
- A densidade demográfica eu calculei dividindo população por área
- Se você digitar um número que não seja de 1 a 5, vai dar erro (isso é normal)

## Dificuldades que tive

- No começo esqueci que densidade demográfica tem regra diferente
- Demorei um pouco para entender como usar o switch direito
- Tive que pesquisar como fazer as contas de float
