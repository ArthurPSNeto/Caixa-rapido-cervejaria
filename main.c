#include <stdio.h>

int main(void) { 
  int menu, itens, cervejas;
  float hlata=4.5, hlong=5.5,h600=11.0, oril=3.8, ori600=8.5; 
  float preco1=0, preco2=0, preco3=0, preco4=0, preco5=0; 
    while (menu!=0){
  printf("\nCervejaria!\n\nDigite 1 para menu de CERVEJAS\n\nDigite 0 para ver o valor de seu carrinho de compras e realizar o pagamento\n\n");
  scanf("%d", &menu);
       if(menu==0){
           float total=(preco1+preco2+preco3+preco4+preco5);
         printf("\nO total de sua compra foi %f: \n", total);

           }
      if (menu==1)
  {
      printf("\nQual Cerveja você vai querer?\nDigite 1 para Heineken(lata) 350ml-RS4.50\nDigite 2 para Heineken(long) 350ml-RS5.50\nDigite 3 para Heineken      600ml-R$11.00\nDigite 4 para Original(lata) 350ml-R$3.80\nDigite 5 para Original      600ml   -8.50\n\n");
      scanf("%d", &itens);

  if(itens==1){
    
    printf("\nQuantas latas de Heineken você quer?: ");
    scanf("%d",&cervejas);
    preco1=(cervejas*hlata);
    printf("\nVocê vai pagar nesse pedido\n%f: ", preco1);}
    if (itens==2){
    
    printf("\nQuantas longs de Heineken você quer?: ");
    scanf("%d",&cervejas);
    preco2=(cervejas*hlong);
    printf("\nVocê vai pagar nesse pedido\n%f: ", preco2);}
  if(itens==3){
    
    printf("\nQuantas garrafas de Heineken você quer?: ");
    scanf("%d",&cervejas);
    preco3=(cervejas*h600);
    printf("\nVocê vai pagar nesse pedido\n%f: ", preco3);}
  if(itens==4){
    
    printf("\nQuantas latas de Original você quer?: ");
    scanf("%d",&cervejas);
    preco4=(cervejas*oril);
    printf("\nVocê vai pagar nesse pedido\n%f: ", preco4);}
  if(itens==5){
    
    printf("\nQuantas Garrafas de Original você quer?: ");
    scanf("%d",&cervejas);
    preco5=(cervejas*ori600);
    printf("Você vai pagar nesse pedido\n%f: ", preco5);}
  } }
  printf("\nCompra realizada com sucesso! Volte Sempre!");
  }
    
  



  