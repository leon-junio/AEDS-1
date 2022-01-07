#include <stdio.h>
/*
Exercicio 9 - Um comerciante deseja fazer o levantamento do lucro das mercadorias com o preço de compra e preço de venda de cada um
Autor: Leon Júnio Martins Ferreira
Data: 15/09/2021
*/
int main(void) {
  //variaveis
  float venda = 0, compra = 0, totalCompras = 0, totalVendas = 0, lucro = 0;
  int totalI = 0, totalII = 0, totalIII = 0;
  //leitura
  printf("LEVANTAMENTO DO LUCRO DAS MERCADORIAS\n");
	
  //loop para registrar valores e calcular o lucro inicial
  do{
	//leitura dos dados
	printf("Para finalizar digite o preco da compra como 0 \n");
    printf("Digite o preço da compra:\n");
    scanf("%f%*c",&compra);
	if(compra!=0){
    printf("Digite o preço da venda:\n");
    scanf("%f%*c",&venda);
    totalVendas+=venda;
    totalCompras+=compra;
    lucro = (float)((venda-compra)/compra)*100;
	//apos gerar o lucro do produto verificar em qual condicao ele se encaixa
    if(lucro<10){
      totalI++;
    }else if(lucro>=10 && lucro <=20){
      totalII++;
    }else if(lucro>20){
      totalIII++;
    }
	}
  }while(compra!=0);
  //processamento dos dados e resultados
  printf("O total de números com lucro menor que 10%% é: %d \n",totalI);
  printf("O total de números com lucro entre 10%% e 20%% é: %d \n",totalII);
  printf("O total de números com lucro maior que 20%% é: %d \n",totalIII);
  printf("O valor total de compra foi de: %.2f \nO valor total de venda foi de: %.2f \nLucro total das vendas foi de: %.2f %% e no valor de: %.2f \n",totalCompras,totalVendas,(float)((totalVendas-totalCompras)/totalCompras)*100,(totalVendas-totalCompras));
  printf("Fim do programa.\n");
  return 0;
}