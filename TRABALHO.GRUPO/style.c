* {
  box-sizing: border-box;
  margin: 0;
  padding: 0;
}

body {
  font-family: 'Segoe UI', sans-serif;
  background: #f0f4f8;
  color: #1e293b;
  line-height: 1.7;
}

/* === BANNER (HEADER COM IMAGEM DE FUNDO) === */
.banner {
  background-image: url('fundo-banner.png');
  background-size: cover;
  background-position: center;
  height: 200px;
}

/* Camada escura por cima da imagem */
.overlay {
  width: 100%;
  height: 100%;
  background: rgba(0, 45, 90, 0.65);
  display: flex;
  align-items: center;
  justify-content: center;
}

/* === MENU DE NAVEGAÇÃO === */
.hero-menu ul {
  list-style: none;
  display: flex;
  gap: 2rem;
}

.hero-menu a {
  color: white;
  text-decoration: none;
  font-size: 1rem;
  font-weight: 600;
  padding: 0.4rem 0.9rem;
  border-radius: 6px;
  transition: background 0.2s;
}

.hero-menu a:hover {
  background: rgba(255, 255, 255, 0.2);
}

/* === TÍTULO DA NOTÍCIA === */
.titulo {
  max-width: 860px;
  margin: 2rem auto 1rem;
  padding: 0 1.5rem;
}

.titulo h1 {
  font-size: 1.4rem;
  font-weight: 700;
  color: #0f172a;
  line-height: 1.5;
  margin-bottom: 0.5rem;
}

.titulo p {
  font-size: 0.85rem;
  color: #64748b;
}

/* === CONTAINER PRINCIPAL === */
.container {
  max-width: 860px;
  margin: 0 auto;
  padding: 0 1.5rem 3rem;
}

.container p {
  margin-bottom: 1rem;
  font-size: 0.97rem;
  color: #334155;
}

.container h2 {
  font-size: 1.15rem;
  font-weight: 700;
  color: #004775;
  border-left: 4px solid #004775;
  padding-left: 0.65rem;
  margin: 1.5rem 0 0.75rem;
}

/* === SEÇÃO INÍCIO === */
#inicio p {
  font-size: 1rem;
  background: white;
  border-left: 4px solid #004775;
  padding: 1rem 1.25rem;
  border-radius: 0 8px 8px 0;
  box-shadow: 0 2px 8px rgba(0,0,0,0.06);
}

/* === GRÁFICO === */
.grafico {
  background: white;
  border: 1px solid #e2e8f0;
  border-radius: 10px;
  padding: 1.25rem;
  margin: 1.5rem 0;
  box-shadow: 0 2px 8px rgba(0,0,0,0.06);
}

.grafico h2 {
  margin-top: 0;
}

/* === LISTA DE ÍNDICES === */
.lista-indices {
  list-style: none;
  display: flex;
  gap: 1rem;
  flex-wrap: wrap;
  margin: 1rem 0;
}

.lista-indices li {
  background: white;
  border: 1px solid #e2e8f0;
  border-radius: 8px;
  padding: 0.5rem 1rem;
  font-weight: 600;
  color: #15803d;
  font-size: 0.9rem;
  box-shadow: 0 1px 4px rgba(0,0,0,0.05);
}

.lista-indices abbr {
  text-decoration: underline dotted;
  cursor: help;
}

/* === COTAÇÃO DO DÓLAR === */
.dolar {
  font-weight: 700;
  font-size: 1rem;
  color: #004775;
  background: #e8f0fb;
  display: inline-block;
  padding: 0.4rem 1rem;
  border-radius: 6px;
  margin: 0.5rem 0 1.25rem;
}

/* === BLOCO DE ANÚNCIO === */
.ad {
  height: 60px;
  background: #f1f5f9;
  border: 1px dashed #cbd5e1;
  border-radius: 6px;
  margin: 1rem 0;
}

/* === BOTÃO PRINCIPAL === */
.botao {
  font-size: 1rem;
  font-weight: 600;
  color: #1e293b;
  margin: 1.5rem 0 0.75rem;
}

button {
  background: #004775;
  color: white;
  border: none;
  border-radius: 8px;
  padding: 0.7rem 1.6rem;
  font-size: 0.95rem;
  font-weight: 600;
  cursor: pointer;
  transition: background 0.2s, transform 0.15s;
}

button:hover {
  background: #003560;
  transform: translateY(-2px);
}

/* === NOTÍCIAS RELACIONADAS === */
.noticias-relacionadas {
  margin-top: 2rem;
}

.cards-container {
  display: grid;
  grid-template-columns: repeat(auto-fill, minmax(230px, 1fr));
  gap: 1rem;
  margin-top: 0.75rem;
}

.card {
  background: white;
  border: 1px solid #e2e8f0;
  border-radius: 10px;
  overflow: hidden;
  box-shadow: 0 2px 8px rgba(0,0,0,0.06);
  transition: transform 0.2s, box-shadow 0.2s;
}

.card:hover {
  transform: translateY(-4px);
  box-shadow: 0 8px 20px rgba(0,0,0,0.1);
}

.card img {
  width: 100%;
  height: 140px;
  object-fit: cover;
}

.card-info {
  padding: 0.85rem 1rem;
}

.categoria {
  font-size: 0.7rem;
  font-weight: 700;
  text-transform: uppercase;
  letter-spacing: 0.08em;
  color: #004775;
  background: #e8f0fb;
  padding: 0.15rem 0.5rem;
  border-radius: 4px;
}

.card-info h3 {
  margin-top: 0.5rem;
  font-size: 0.88rem;
  color: #1e293b;
  line-height: 1.45;
}

/* === PERFIL E CONFIGURAÇÕES === */
#perfil, #configurações {
  max-width: 600px;
  margin: 2rem auto;
  padding: 1.5rem;
  background: white;
  border: 1px solid #e2e8f0;
  border-radius: 12px;
  box-shadow: 0 2px 8px rgba(0,0,0,0.06);
}

#perfil h2, #configurações h2 {
  font-size: 1.2rem;
  color: #004775;
  margin-bottom: 1rem;
  border-left: 4px solid #004775;
  padding-left: 0.65rem;
}

.perfil-info p {
  padding: 0.5rem 0;
  border-bottom: 1px solid #f1f5f9;
  font-size: 0.95rem;
}

/* === CONFIGURAÇÕES === */
.config-item {
  margin-bottom: 1.25rem;
}

.config-item h3 {
  font-size: 0.9rem;
  color: #475569;
  margin-bottom: 0.4rem;
  font-weight: 600;
}

.config-item label {
  font-size: 0.9rem;
  display: flex;
  align-items: center;
  gap: 0.5rem;
  cursor: pointer;
}

.config-item select {
  padding: 0.45rem 0.8rem;
  border: 1px solid #cbd5e1;
  border-radius: 6px;
  font-size: 0.9rem;
  outline: none;
}

.config-btn {
  margin-top: 0.5rem;
}

/* === RODAPÉ === */
.footer {
  background: #0f172a;
  color: #94a3b8;
  text-align: center;
  padding: 1.5rem;
  font-size: 0.82rem;
  display: flex;
  flex-direction: column;
  gap: 0.4rem;
}

.footer .direitos {
  color: #cbd5e1;
  font-weight: 600;
}

/* === RESPONSIVO === */
@media (max-width: 600px) {
  .hero-menu ul { gap: 0.75rem; }
  .hero-menu a  { font-size: 0.85rem; padding: 0.3rem 0.6rem; }
  .titulo h1    { font-size: 1.1rem; }
  .lista-indices { flex-direction: column; }
  .cards-container { grid-template-columns: 1fr; }
}

/* =============================================
   NOVOS ESTILOS — Seletor de Índices + Favoritos
   ============================================= */

/* === CABEÇALHO DO GRÁFICO === */
.grafico-header {
  display: flex;
  align-items: flex-start;
  justify-content: space-between;
  flex-wrap: wrap;
  gap: 0.75rem;
  margin-bottom: 1rem;
}

.grafico-controles {
  display: flex;
  align-items: center;
  gap: 0.75rem;
  flex-wrap: wrap;
}

/* === BOTÕES DE SELEÇÃO DE ÍNDICE === */
.selector-group {
  display: flex;
  gap: 0.4rem;
}

.indice-btn {
  background: #f1f5f9;
  color: #475569;
  border: 1px solid #cbd5e1;
  border-radius: 6px;
  padding: 0.4rem 0.9rem;
  font-size: 0.82rem;
  font-weight: 600;
  cursor: pointer;
  transition: all 0.2s;
  transform: none; /* sobrescreve o translateY do button global */
}

.indice-btn:hover {
  border-color: #004775;
  color: #004775;
  background: #e8f0fb;
  transform: none;
}

.indice-btn.active {
  background: #004775;
  color: white;
  border-color: #004775;
}

/* === BOTÃO FAVORITAR === */
.btn-favorito {
  background: white;
  color: #b45309;
  border: 1px solid #f59e0b;
  border-radius: 6px;
  padding: 0.4rem 0.9rem;
  font-size: 0.82rem;
  font-weight: 600;
  cursor: pointer;
  transition: all 0.2s;
  transform: none;
}

.btn-favorito:hover {
  background: #fef3c7;
  transform: none;
}

.btn-favorito.favoritado {
  background: #f59e0b;
  color: white;
  border-color: #d97706;
}

/* === PÁGINA DE FAVORITOS === */
.favoritos-section {
  max-width: 900px;
  margin: 2rem auto;
  padding: 0 1.5rem 3rem;
}

.fav-page-header {
  margin-bottom: 1.75rem;
}

.fav-page-header h1 {
  font-size: 1.4rem;
  font-weight: 700;
  color: #0f172a;
  margin-bottom: 0.3rem;
}

.fav-page-header p {
  color: #64748b;
  font-size: 0.9rem;
}

/* Grid de cards dos favoritos */
.fav-grid {
  display: flex;
  flex-direction: column;
  gap: 1.5rem;
}

.fav-card {
  background: white;
  border: 1px solid #e2e8f0;
  border-radius: 12px;
  padding: 1.25rem;
  box-shadow: 0 2px 8px rgba(0,0,0,0.06);
}

.fav-card-header {
  display: flex;
  justify-content: space-between;
  align-items: flex-start;
  flex-wrap: wrap;
  gap: 0.75rem;
  margin-bottom: 1rem;
}

.fav-card-nome {
  font-size: 1.1rem;
  font-weight: 700;
  color: #004775;
}

.fav-card-desc {
  font-size: 0.8rem;
  color: #94a3b8;
  margin-top: 0.2rem;
}

.fav-card-right {
  display: flex;
  align-items: center;
  gap: 0.75rem;
}

/* Botão remover favorito */
.btn-remover {
  background: white;
  color: #b91c1c;
  border: 1px solid #fca5a5;
  border-radius: 6px;
  padding: 0.35rem 0.8rem;
  font-size: 0.78rem;
  font-weight: 600;
  cursor: pointer;
  transition: all 0.2s;
  transform: none;
}

.btn-remover:hover {
  background: #fee2e2;
  transform: none;
}

/* === TELA VAZIA (sem favoritos) === */
.fav-vazio {
  text-align: center;
  padding: 4rem 2rem;
  background: white;
  border: 1px dashed #cbd5e1;
  border-radius: 12px;
  color: #94a3b8;
}

.fav-vazio-icon {
  font-size: 3rem;
  margin-bottom: 1rem;
  opacity: 0.4;
}

.fav-vazio p {
  margin-bottom: 1.25rem;
  font-size: 0.95rem;
}

.hidden { display: none; }

.btn-voltar {
  display: inline-block;
  background: #004775;
  color: white;
  text-decoration: none;
  padding: 0.65rem 1.4rem;
  border-radius: 8px;
  font-weight: 600;
  font-size: 0.9rem;
  transition: background 0.2s;
}

.btn-voltar:hover {
  background: #003560;
}

/* =============================================
   DARK MODE — body.dark
   ============================================= */

body.dark {
  background: #0f172a;
  color: #e2e8f0;
}

/* Header e menu */
body.dark .banner {
  filter: brightness(0.85);
}

/* Container e textos */
body.dark .container p,
body.dark .titulo h1 {
  color: #cbd5e1;
}

body.dark .container h2,
body.dark .secao h2 {
  color: #60a5fa;
  border-color: #60a5fa;
}

body.dark h3{
  color:#f1f5f9
}

/* Cards de índice e gráfico */
body.dark #inicio p,
body.dark .grafico,
body.dark .card,
body.dark #perfil,
body.dark #configurações,
body.dark .fav-card,
body.dark .search-card {
  background: #1e293b;
  border-color: #334155;
  color: #e2e8f0;
}

body.dark #inicio p {
  border-color: #60a5fa;
}

/* Linhas de grade dentro dos cards de perfil/config */
body.dark .perfil-info p {
  border-color: #334155;
}

/* Lista de índices (Dow Jones etc.) */
body.dark .lista-indices li {
  background: #1e293b;
  border-color: #334155;
  color: #4ade80;
}

/* Cotação do dólar */
body.dark .dolar {
  background: #1e3a5f;
  color: #93c5fd;
}

/* Botões de seleção de índice */
body.dark .indice-btn {
  background: #1e293b;
  border-color: #475569;
  color: #94a3b8;
}
body.dark .indice-btn:hover {
  background: #1e3a5f;
  color: #93c5fd;
  border-color: #60a5fa;
}
body.dark .indice-btn.active {
  background: #1d4ed8;
  border-color: #1d4ed8;
  color: white;
}

/* Botão de favoritar */
body.dark .btn-favorito {
  background: #1e293b;
  border-color: #92400e;
  color: #fbbf24;
}
body.dark .btn-favorito.favoritado {
  background: #92400e;
  color: white;
}

/* Tela vazia de favoritos */
body.dark .fav-vazio {
  background: #1e293b;
  border-color: #334155;
  color: #64748b;
}

/* Configurações: select e label */
body.dark .config-item select {
  background: #1e293b;
  border-color: #475569;
  color: #e2e8f0;
}

/* Ad placeholder */
body.dark .ad {
  background: #1e293b;
  border-color: #334155;
}

/* Rodapé */
body.dark .footer {
  background: #020617;
}

/* === MENSAGEM "CONFIGURAÇÕES SALVAS" === */
.config-salvo {
  margin-top: 0.75rem;
  font-size: 0.88rem;
  font-weight: 600;
  color: #15803d;
  background: #dcfce7;
  border: 1px solid #86efac;
  border-radius: 6px;
  padding: 0.4rem 0.85rem;
  display: inline-block;
}

body.dark .config-salvo {
  background: #14532d;
  border-color: #166534;
  color: #86efac;
}

/* =============================================
   LOGO / NOME DO SITE NO BANNER
   ============================================= */

.overlay {
  flex-direction: column;
  gap: 0.6rem;
}

.site-logo {
  display: flex;
  align-items: center;
  gap: 0.5rem;
}

.site-logo-icone {
  font-size: 1.6rem;
  line-height: 1;
}

.site-logo-nome {
  font-size: 1.5rem;
  font-weight: 700;
  color: white;
  letter-spacing: -0.01em;
  text-shadow: 0 1px 4px rgba(0,0,0,0.3);
}

.site-logo-com {
  color: rgba(255, 255, 255, 0.6);
  font-weight: 400;
  font-size: 1.1rem;
}

/* =============================================
   CARDS DE ÍNDICES INTERNACIONAIS
   ============================================= */

.indices-cards {
  display: grid;
  grid-template-columns: repeat(auto-fill, minmax(200px, 1fr));
  gap: 0.85rem;
  margin: 0.75rem 0 1.5rem;
}

.indice-card {
  background: white;
  border: 1px solid #e2e8f0;
  border-top: 3px solid #15803d;
  border-radius: 10px;
  padding: 1rem 1.1rem;
  box-shadow: 0 2px 6px rgba(0,0,0,0.05);
  transition: transform 0.2s, box-shadow 0.2s;
}

.indice-card:hover {
  transform: translateY(-3px);
  box-shadow: 0 6px 16px rgba(0,0,0,0.09);
}

.indice-card-topo {
  display: flex;
  justify-content: space-between;
  align-items: center;
  margin-bottom: 0.5rem;
}

.indice-card-nome {
  font-size: 0.9rem;
  font-weight: 700;
  color: #1e293b;
}

.indice-card-nome abbr {
  text-decoration: underline dotted;
  cursor: help;
}

.indice-card-pais {
  font-size: 0.75rem;
  color: #94a3b8;
}

.indice-card-valor {
  font-size: 1.4rem;
  font-weight: 700;
  color: #15803d;
  margin-bottom: 0.25rem;
  letter-spacing: -0.01em;
}

.indice-card-desc {
  font-size: 0.7rem;
  color: #94a3b8;
  line-height: 1.4;
}

/* Dark mode — índices internacionais */
body.dark .indice-card {
  background: #1e293b;
  border-color: #334155;
  border-top-color: #4ade80;
}
body.dark .indice-card-nome { color: #e2e8f0; }
body.dark .indice-card-valor { color: #4ade80; }
body.dark .indice-card-desc  { color: #64748b; }

/* Dark mode — logo do site */
body.dark .site-logo-nome { color: #f1f5f9; }
body.dark .site-logo-com  { color: rgba(241, 245, 249, 0.5); }

/* Responsivo: logo menor em telas pequenas */
@media (max-width: 600px) {
  .site-logo-nome { font-size: 1.1rem; }
  .site-logo-icone { font-size: 1.2rem; }
  .indices-cards { grid-template-columns: 1fr; }
}

/* =============================================
   CARDS DE AÇÕES EM DESTAQUE
   ============================================= */

.acoes-grid {
  display: grid;
  grid-template-columns: repeat(auto-fill, minmax(160px, 1fr));
  gap: 0.85rem;
  margin: 0.75rem 0 1.5rem;
}

.acao-card {
  background: white;
  border: 1px solid #e2e8f0;
  border-radius: 10px;
  padding: 1rem;
  box-shadow: 0 2px 6px rgba(0,0,0,0.05);
  transition: transform 0.2s, box-shadow 0.2s;
  cursor: default;
}

.acao-card:hover {
  transform: translateY(-3px);
  box-shadow: 0 6px 16px rgba(0,0,0,0.1);
}

.acao-ticker {
  font-size: 1rem;
  font-weight: 700;
  color: #004775;
  letter-spacing: 0.03em;
  margin-bottom: 0.2rem;
}

.acao-nome {
  font-size: 0.72rem;
  color: #94a3b8;
  margin-bottom: 0.6rem;
}

.acao-preco {
  font-size: 1rem;
  font-weight: 600;
  color: #1e293b;
  margin-bottom: 0.3rem;
}

.acao-variacao {
  display: inline-block;
  font-size: 0.78rem;
  font-weight: 700;
  padding: 0.15rem 0.5rem;
  border-radius: 5px;
}

/* Dark mode — cards de ações */
body.dark .acao-card {
  background: #1e293b;
  border-color: #334155;
}
body.dark .acao-ticker { color: #60a5fa; }
body.dark .acao-preco  { color: #e2e8f0; }
body.dark .acao-nome   { color: #64748b; }

/* =============================================
   CARD DE COTAÇÃO DO DÓLAR
   ============================================= */

.dolar-card {
  display: flex;
  align-items: center;
  gap: 1rem;
  background: white;
  border: 1px solid #bfdbfe;
  border-left: 4px solid #1d4ed8;
  border-radius: 10px;
  padding: 1rem 1.25rem;
  margin: 0.75rem 0 1.5rem;
  box-shadow: 0 2px 8px rgba(0,0,0,0.06);
}

.dolar-icone {
  font-size: 2rem;
  line-height: 1;
}

.dolar-info {
  display: flex;
  flex-direction: column;
  gap: 0.15rem;
  flex: 1;
}

.dolar-label {
  font-size: 0.72rem;
  font-weight: 700;
  text-transform: uppercase;
  letter-spacing: 0.08em;
  color: #64748b;
}

.dolar-valor {
  font-size: 1.5rem;
  font-weight: 700;
  color: #1d4ed8;
  letter-spacing: -0.01em;
}

.dolar-atualizacao {
  font-size: 0.7rem;
  color: #94a3b8;
}

.dolar-badge {
  font-size: 0.72rem;
  font-weight: 600;
  background: #eff6ff;
  color: #1d4ed8;
  border: 1px solid #bfdbfe;
  border-radius: 20px;
  padding: 0.25rem 0.75rem;
  white-space: nowrap;
}

/* Dark mode — card do dólar */
body.dark .dolar-card {
  background: #1e293b;
  border-color: #1e40af;
  border-left-color: #3b82f6;
}
body.dark .dolar-valor  { color: #93c5fd; }
body.dark .dolar-label  { color: #94a3b8; }
body.dark .dolar-badge  {
  background: #1e3a5f;
  border-color: #1e40af;
  color: #93c5fd;
}
