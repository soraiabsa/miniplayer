# Diário de bordo
## Missão M01 — 11/11
- Integrantes e papéis: ANA SORAIA BARROSO SILVA, estou sozinha pois fiquei afastada da faculdade desde o dia 10/11 até o dia 18/11, logo não consegui acompanhar nenhuma aula e preferi não prejudocar outro aluno que está indo para as aulas
- Objetivo:Implementar a criação e a exclusão de músicas, utilizando alocação dinâmica de memória.


- O que implementamos:
- Implementação da função `musica_criar()`.
- Alocação dinâmica de memória com `malloc()`.
- Verificação de ponteiros nulos.
- Verificação do limite de tamanho dos campos de texto.
- Cópia dos dados para a estrutura `t_musica`.
- Implementação da função `musica_destruir()` utilizando `free()`


- Decisão técnica e justificativa:

Foi utilizada a alocação dinâmica para criar cada música, permitindo que a estrutura seja armazenada e liberada conforme a necessidade do programa.

Também foram verificadas as strings recebidas para evitar que ultrapassem a capacidade dos campos `titulo` e `artista`.

- Problema encontrado e solução:
Durante a implementação, comentários antigos do código inicial foram mantidos junto ao novo código, gerando avisos de compilação. O arquivo foi corrigido e compilado novamente sem esses avisos.


- Evidências de testes:
- `make build/test_musica && ./build/test_musica`: aprovado.
- `make`: compilação do programa principal concluída.
- `make test`: o teste de música passou, mas o teste da LSE falhou porque `lse_criar()` ainda não foi implementada.


- Próxima ação:
Registrar os contratos das funções implementadas e continuar a implementação das estruturas de dados previstas nas próximas missões.
> Duplicar esta seção a cada missão e alternar os papéis na dupla.
