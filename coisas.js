//Codigo do grafico
const ctx = document.getElementById('grafico');

fetch('https://jsonplaceholder.typicode.com/posts')
    .then(resposta => resposta.json())
    .then(dados => {

       new Chart(ctx, {
    type: 'bar',
    data: {
        labels: ['01/02', '02/02', '03/02', '04/02', '05/02', '06/02'], //Poe data em cada caixa e em baixo de cada barra do gráfico
        datasets: [{
            label: 'Ibovespa',
            data: [181.363, 182.973, 185.674, 181.708, 182.127, 182.949], //Valor escrito na caixa do curssor
           //Por esse codigo antes sempre
            backgroundColor: 'rgba(0, 71, 117, 0.2)',
            borderColor: 'rgb(0, 69, 116)',
            borderWidth: 1 //Muda a espessura da barra lateral do gráfico
        }]
    },
    options: {
        scales: { //Põe os numeros da escala lateral 
            y: {
                min: 180.000, //Muda o número lateral 
                max: 187.000
            }
        },
        plugins: {
            tooltip: {
                callbacks: {
                    label: function(context) {
                        return  context.parsed.y; //Põe o valor na caixa 
                    }
                }
            }
        }
    }

});


    })
    .catch(erro => {
        console.log('Erro ao buscar dados:', erro);
    });

    