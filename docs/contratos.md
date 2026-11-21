# Contratos dos TADs

## M01 — Módulo de música

### musica_criar
Assinatura:
t_musica *musica_criar(int id, const char *titulo, const char *artista, int duracao);

- Pré-condições: titulo e artista não devem ser NULL.
- Pós-condições: aloca uma estrutura t_musica e armazena os dados recebidos.
- Sucesso: retorna ponteiro para a música criada.
- Falha: retorna NULL se os textos forem nulos, ultrapassarem os campos ou ocorrer falha de alocação.
- Memória: utiliza malloc para alocar a estrutura.
- Propriedade: quem recebe a música deve garantir sua liberação com musica_destruir.
- Teste associado: tests/test_musica.c.

### musica_destruir
Assinatura:
void musica_destruir(void *carga);

- Pré-condição: carga deve ser NULL ou apontar para memória compatível com free.
- Pós-condição: libera a memória da música.
- Retorno: nenhum.
- Memória: utiliza free.
- Teste associado: tests/test_musica.c.

## Invariantes da LSE
- tamanho >= 0.
- tamanho == 0 se e somente se inicio == NULL.
- Há exatamente tamanho nós alcançáveis a partir de inicio.
- O último nó aponta para NULL e não há ciclos.

## Contratos gerais
- A carga da LSE é genérica (void *).
- A lista administra os nós, não necessariamente as cargas.
- A remoção libera o nó e devolve a carga.
- Pilha e fila reutilizam as operações da LSE.
- A biblioteca possui as músicas; fila e histórico apenas as referenciam.
