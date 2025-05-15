# VirtualPanel-AMG8833
Código para projetar a imagem térmica da câmera AMG8833 no visor gráfico do VirtualPanel

<h2>Itens utilizados no projeto</h2>
  - Câmera Térmica AMG8833<br>
  ![Captura de tela 2025-05-15 185836](https://github.com/user-attachments/assets/efb84c40-0610-4cac-a93b-78161f039c8d)
  - ESP32<br>
  - Arduino IDE<br>
  - <a href="https://github.com/JaapDanielse/VirtualPanel">VirtualPanel</a>
<br>
<h2>Sobre o Projeto:</h2>
O Virtual Panel se trata de uma caixa de ferramentas da interface para Arduino para controle e exibição de experimentos. Permitindo a exibição de imagens sem a necessidade de um display físico.<br>
<br>
A câmera térmica AMG8833 captura uma imagem com resolução 8x8 pixels e informa a temperatura de cada pixel para o ESP32 através de uma array de índice 64 (8x8). Esse projeto pega cada valor no array, faz uma série de comparações de temperaturas e define a cor de cada pixel que será projetado no display do painel virtual, numa imagem com resolução de 16x16 pixels.<br>
<br>
O Virtual Panel apresenta uma quantidade limitada de cores, então a precisão de temperatura na imagem não é exata, mas para projetos mais simples serve muito bem.
