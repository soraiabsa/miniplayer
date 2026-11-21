# Relatório de testes

## Testes executados

| ID | Missão | Função/contrato | Entrada/cenário | Resultado esperado | Resultado obtido | Status |
|---|---|---|---|---|---|---|
| T01 | M01 | musica_criar | ID 1, título "Teste", artista "Artista", duração 180 | Ponteiro não nulo e campos corretos | Teste aprovado: test_musica: OK | Aprovado |
| T02 | M01 | musica_destruir | Liberação da música criada no T01 | Liberar a memória alocada | Função executada durante o teste, sem erro aparente | Aprovado |
| T03 | Geral | Compilação | Comando make | Compilar o programa | Compilação concluída | Aprovado |
| T04 | Geral | Testes gerais | Comando make test | Executar todos os testes | test_musica passou; test_lse falhou em assert(l != NULL) | Pendente |

## Casos-limite

- Estrutura vazia: não aplicável diretamente ao módulo de música da M01. Será avaliado nas missões de LSE.
- Estrutura com um elemento: foi criada uma música no teste T01, mas não foi testada uma estrutura de dados com um elemento.
- Chave inexistente: não aplicável às funções de criação e destruição de música.
- Falha de alocação (discutir estratégia de simulação): musica_criar verifica se malloc retorna NULL, mas a falha de alocação ainda não foi simulada em teste.

## Memória

### Comandos de compilação e testes

- make build/test_musica
- ./build/test_musica
- make
- make test

### Ferramentas utilizadas

- Linguagem C.
- GCC (compilador).
- GNU Make.
- Linux.
- Editor Nano.
- Git (controle de versão).

### Problemas corrigidos

- As funções musica_criar e musica_destruir estavam como stubs.
- Foi implementada a alocação dinâmica com malloc.
- Foi implementada a cópia dos dados de título e artista.
- Foi implementada a liberação de memória com free.
- Avisos de compilação causados por comentários antigos foram corrigidos.

### Problemas pendentes

- O teste da LSE falhou porque lse_criar ainda não está implementada.
- Os testes de pilha e fila ainda precisam ser verificados individualmente.


## M02 — Testes da lista vazia

| ID | Missão | Função/contrato | Entrada/cenário | Resultado esperado | Resultado obtido | Status |
|---|---|---|---|---|---|---|
| T05 | M02 | lse_criar | Criação de lista vazia | Ponteiro não nulo | Lista criada com sucesso | Aprovado |
| T06 | M02 | lse_tamanho | Lista recém-criada | Retornar 0 | Retornou 0 | Aprovado |
| T07 | M02 | lse_primeiro | Lista vazia | Retornar NULL | Retornou NULL | Aprovado |
| T08 | M02 | lse_destruir | Lista vazia e destruidor NULL | Liberar a estrutura sem erro | Função executada sem erro aparente | Aprovado |

### Comando utilizado

- make -f missoes/M02/Makefile.incremental test_m02

### Resultado

O teste incremental foi executado sem alterações no arquivo TESTE_INCREMENTAL_M02.c e apresentou a mensagem:

M02: teste de contrato passou.

A execução do teste antes da implementação não foi registrada neste relatório.
