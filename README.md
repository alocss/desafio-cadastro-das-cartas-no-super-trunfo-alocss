# 🃏 Projeto Super Trunfo de Cidades (Linguagem C)

## 📌 Visão Geral

Este projeto em linguagem C simula um jogo de **Super Trunfo** utilizando cartas que representam cidades. Cada carta possui atributos específicos, e o programa realiza o cadastro de duas cartas, cálculos estatísticos e uma **batalha comparativa** entre os atributos de ambas.

---

## 🎯 Objetivos

- Cadastrar duas cartas com dados completos de cidades.
- Calcular:
  - Densidade populacional.
  - PIB per capita.
  - Super Poder.
- Comparar atributos entre as cartas, determinando a vencedora em cada um.
- Exibir todas as informações de forma clara e organizada.

---

## 🧾 Funcionalidades

### ✅ Cadastro de Cartas

Cada carta contém os seguintes dados:

| Campo                  | Tipo                 | Descrição                                      |
|-----------------------|----------------------|-----------------------------------------------|
| Estado                | `char`               | Letra de A a H representando o estado         |
| Código da Carta       | `char[]` (string)    | Ex: `A01`, `B03`, etc.                        |
| Nome da Cidade        | `char[]` (string)    | Nome da cidade                                |
| População             | `unsigned long int`  | Número de habitantes                          |
| Área (em km²)         | `float`              | Área da cidade                                |
| PIB (em bilhões)      | `float`              | Produto Interno Bruto                         |
| Pontos Turísticos     | `int`                | Número de pontos turísticos                   |

---


### 💻 Estrutura do Código

- Leitura via scanf e saída com printf.

- Uso de variáveis simples (sem structs).

- Cálculos diretos, sem laços (for, while) ou decisões (if, else).

### 📋 Requisitos Atendidos

✅ Requisitos Funcionais

 - Leitura e exibição dos dados das cartas.

- Cálculo de densidade populacional.

- Cálculo de PIB per capita.

- Cálculo do Super Poder.

- Comparação e exibição dos resultados por atributo.

✅ Requisitos Não Funcionais

- Código legível e bem indentado.
  
- Nomes de variáveis significativos.
 
- Funcionalidade correta sem erros.

- Eficiência e simplicidade nos cálculos.


