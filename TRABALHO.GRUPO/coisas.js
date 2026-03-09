
// === DADOS DOS TRÊS ÍNDICES ===
const dadosIndices = {
  ibovespa: {
    nome: 'IBOVESPA',
    labels: ['01/02', '02/02', '03/02', '04/02', '05/02', '06/02'],
    valores: [181363, 182973, 185674, 181708, 182127, 182949],
    cor: 'rgb(0, 69, 116)',
    corFundo: 'rgba(0, 71, 117, 0.15)',
    min: 180000, // valor mínimo do eixo Y
    max: 187000, // valor máximo do eixo Y
  },
  qqq: {
    nome: 'QQQ (Nasdaq ETF)',
    labels: ['01/02', '02/02', '03/02', '04/02', '05/02', '06/02'],
    valores: [478.20, 481.55, 479.30, 483.10, 486.75, 484.90],
    cor: 'rgb(120, 40, 180)',
    corFundo: 'rgba(120, 40, 180, 0.12)',
    min: 475, // valor mínimo do eixo Y
    max: 490, // valor máximo do eixo Y
  },
  mchi: {
    nome: 'MCHI (China ETF)',
    labels: ['01/02', '02/02', '03/02', '04/02', '05/02', '06/02'],
    valores: [48.30, 47.90, 49.10, 48.60, 50.20, 49.75],
    cor: 'rgb(200, 50, 50)',
    corFundo: 'rgba(200, 50, 50, 0.12)',
    min: 46, // valor mínimo do eixo Y
    max: 52, // valor máximo do eixo Y
  }
};

// === VARIÁVEIS GLOBAIS ===
let graficoAtual = null;       // instância do Chart.js
let indiceAtivo  = 'ibovespa'; // índice selecionado agora

// === RENDERIZA O GRÁFICO ===
function renderizarGrafico(chave) {
  const dados = dadosIndices[chave];
  const ctx   = document.getElementById('grafico');

  // Atualiza o título acima do gráfico
  document.getElementById('grafico-titulo').textContent =
    'Gráfico — ' + dados.nome;

  // Destroi o gráfico anterior antes de criar um novo
  if (graficoAtual) graficoAtual.destroy();

  graficoAtual = new Chart(ctx, {
    type: 'bar', // tipo de gráfico (pode ser 'line', 'bar', 'pie'(pizza), etc.)
    data: {
      labels: dados.labels,
      datasets: [{
        label: dados.nome,
        data: dados.valores,
        backgroundColor: dados.corFundo,
        borderColor: dados.cor,
        borderWidth: 1
      }]
    },
    options: {
      responsive: true,
      scales: {
        y: {
          min: dados.min,
          max: dados.max,
          // Garante que os valores sempre aparecem no eixo lateral
          ticks: {
            count: 6,
            callback: function(valor) {
              // Números grandes (IBOVESPA): formata com ponto separador
              if (valor >= 1000) return valor.toLocaleString('pt-BR');
              // Números menores (QQQ, MCHI): mostra duas casas decimais
              return valor.toFixed(2);
            }
          },
          grid: {
            color: 'rgba(0, 0, 0, 0.06)'
          }
        }
      },
      plugins: {
        tooltip: {
          callbacks: {
            label: ctx => ' ' + ctx.parsed.y.toLocaleString('pt-BR')
          }
        }
      }
    }
  });

  // Atualiza o botão de favorito
  atualizarBotaoFavorito(chave);
}

//  BOTÕES DE SELEÇÃO DE ÍNDICE 
document.querySelectorAll('.indice-btn').forEach(btn => {
  btn.addEventListener('click', function () {
    document.querySelectorAll('.indice-btn')
      .forEach(b => b.classList.remove('active'));
    this.classList.add('active');

    indiceAtivo = this.dataset.indice;
    renderizarGrafico(indiceAtivo);
  });
});

//  favoritos - Gerencia a lista de índices favoritos usando localStorage
function lerFavoritos() {
  return JSON.parse(localStorage.getItem('favoritos') || '[]');
}

// Salva a lista de favoritos no localStorage
function salvarFavoritos(lista) {
  localStorage.setItem('favoritos', JSON.stringify(lista));
} 

// Alterna o estado de favorito do índice ativo e atualiza o botão
function alternarFavorito() {
  const lista = lerFavoritos();
  const idx   = lista.indexOf(indiceAtivo);
  if (idx === -1) lista.push(indiceAtivo);
  else lista.splice(idx, 1);
  salvarFavoritos(lista);
  atualizarBotaoFavorito(indiceAtivo);
}

// Atualiza o texto e estilo do botão de favorito com base no estado atual
function atualizarBotaoFavorito(chave) {
  const btn       = document.getElementById('btnFavorito');
  const favoritos = lerFavoritos();
  if (favoritos.includes(chave)) {
    btn.textContent = '★ Remover dos Favoritos';
    btn.classList.add('favoritado');
  } else {
    btn.textContent = '☆ Adicionar aos Favoritos';
    btn.classList.remove('favoritado');
  }
}

//  inicia com ibovespa como índice ativo
renderizarGrafico('ibovespa');

