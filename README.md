# VirtualPanel-AMG8833
Código para projetar a imagem térmica da câmera AMG8833 no visor gráfico do VirtualPanel

<h2>Itens utilizados no projeto</h2>
  - Câmera Térmica AMG8833<br>
  <img href="https://www.google.com/url?sa=i&url=https%3A%2F%2Fpt.aliexpress.com%2Fitem%2F1005004679425501.html&psig=AOvVaw0ZnA851EL6onzTXY_SWuuW&ust=1747432246733000&source=images&cd=vfe&opi=89978449&ved=0CBQQjRxqFwoTCIjo18y6po0DFQAAAAAdAAAAABAE">
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
