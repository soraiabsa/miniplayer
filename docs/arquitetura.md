# Arquitetura
## Componentes
| Módulo | Responsabilidade | Dependências |
|---|---|---|
| musica | Dados da música | biblioteca padrão |
| lse | Nós genéricos e encadeamento | biblioteca padrão |
| pilha | Política LIFO | lse |
| fila | Política FIFO | lse |
| miniplayer | Simulação e integração | demais TADs |

## Diagrama de dependências
MiniPlayer → (LSE, Pilha, Fila) → LSE → t_elem interno.

## Decisões técnicas (preencher)
- Por que `void *`?
- Quem é dono das cargas?
- Como tratar referências compartilhadas?
- Quando adicionar ponteiro `fim`?

## M02 — Implementação inicial da LSE

Foi implementada a criação de uma lista vazia, a consulta de seu tamanho, a consulta do primeiro elemento e a destruição da lista vazia.

A estrutura interna continua em src/lse.c. O tipo t_elem não foi transferido para o cabeçalho lse.h, preservando o encapsulamento da implementação.

### Decisões técnicas
- Foi utilizada malloc para alocar a estrutura da lista.
- Os campos inicio e tamanho são inicializados com NULL e 0.
- A carga continua sendo representada por void *, permitindo armazenar diferentes tipos de dados.
- A destruição implementada nesta missão libera a estrutura de uma lista vazia.
