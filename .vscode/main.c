
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Math.h>
#include <locale.h>
#include <ctype.h>

//"Olá, bem-vindos ao portfólio de Ádria Cortez! Esse é um respositório do Github feito especialmente para estágios. Seja lá quem você for, espero que esteja tudo bem contigo! Aproveite sua análise :D

//  "Dado a sequencia de fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos valores anteriores [...]"

int main (){

//nota do autor do texto: Talvez o código fique confuso
//Por via das dúvidas, devo salientar que na primeira questão eu fiz o código de fibonacci normal para depois...
//Puxa-lo a partir do 3º terceiro int main

int fib(int n){

    if(n == 1);
    if (n == 2); 
    return 1;

    int i, F = 0, F1 = 0, F2 = 1;
    for(int = 3; i <=n; i++) {
        F = F1 + F2;
        F1 = F2
        F2 = F

    }
    return 1;
}

int main() {
    int sequenciacorreta(int num) {
        int i = 1;
         while (fib(i) <= num) {
        if (fib(i) == num);
        
    return 1;

    }
return 0;
} 
int main () {
int numero;
printf("Insira algum número para verificarmos se ele existe dentro da sequencia: ");
scanf("%d", &numero);
 if (sequenciacorreta(numero)) {
    printf("%dpertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("%dnão pertence à sequência de Fibonacci.\n", numero);
    }

 }
   for(i = 1: i<=100; i++); {
    printf("%d: %d\n", i, fib(i));
    }

return 0;
}

}

//Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a ;
//quantidade de vezes em que ela ocorre;

int main(void) {

    char string;
    printf("Coloque aqui uma letra, lindeza: ");
    scanf("%c\n", &string); 
    if (isupper(string)){
        printf{"A letra '%c' é maiúscula"};
    } else if (islower(string))
    {
        printf("A letra '%c' é minúscula");
    } else {
        printf("ERROR LINE 80 - '%c' não é uma letra.");

        return 0;
}

}

//Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA); Ao final do processamento, qual será o valor da variável SOMA?
//Nota do autor: Eu não entendi, então irei pular essa questão.

//Descubra a lógica e complete o próximo elemento:


   //Questão a:

int main(){
    int a, b, c, d;
    a = 1;
    b = 3;
    c = 5;
    d = 7;

    int proximo = d + 2; //São números ímpares, números impares começam a partir de 1 e cada 1 adiciona mais 2
    int resposta_usuario;

     printf{"Aqui temos os números %d, %d, %d, %d\n", a, b, c, d};
     printf("Digite o próximo número que ficará em '__': ");
     scanf("%d", &resposta_usuario);
     if (resposta_usuario == proximo) { printf("Correto!")} else if (resposta_usuario == proximo) {
        printf("Errado. Tente novamente!\n");
     } else { printf("Número inválido. Por gentileza, não coloque letras ou símbolos.\n") }

     return 0;
    
}

    //Questão b:

int main(){
    int a, b, c, d, e, f;
    a = 2;
    b = 4;
    c = 8;
    d = 16;
    e = 32;
    f = 64; 

    int proximo = d * 2; //Todos multiplicam por 2
    int resposta_usuario;

     printf{"Aqui temos os números %d, %d, %d, %d\n", a, b, c, d, e, f};
     printf("Digite o próximo número que ficará em '__': ");
     scanf("%d", &resposta_usuario);
     if (resposta_usuario == proximo) { printf("Correto!")} else if (resposta_usuario != proximo) {
        printf("Errado. Tente novamente!\n");
     } else { printf("Número inválido. Por gentileza, não coloque letras ou símbolos.\n") }

     return 0;
    
}

    //Questão c:


int main(){
    int a, b, c, d, e, f, g;
    a = 0;
    b = 1;
    c = 4;
    d = 9;
    e = 16;
    f = 25; 
    g = 36;

    int proximo = d + 11 ; //Nota: 11 Porque é adição de números ímpares, então é mais fácil fazer direto do que criar uma linha para mostrar dentro do código que é um número ímpar.
    int resposta_usuario;

     printf{"Aqui temos os números %d, %d, %d, %d\n", a, b, c, d, e, f, g};
     printf("Digite o próximo número que ficará em '__': ");
     scanf("%d", &resposta_usuario);
     if (resposta_usuario == proximo) { printf("Correto!")} else if (resposta_usuario != proximo) {
        printf("Errado. Tente novamente!\n");
     } else { printf("Número inválido. Por gentileza, não coloque letras ou símbolos.\n") }

     return 0;
    
}

    //Questão d:


int main(){
    int a, b, c, d, e, f, g;
    a = 4;
    b = 16;
    c = 36;
    d = 64;

    int proximo = pow(10, 2); //Nota: não sei se funciona dessa forma
    int resposta_usuario;

     printf{"Aqui temos os números %d, %d, %d, %d\n", a, b, c, d};
     printf("Digite o próximo número que ficará em '__': ");
     scanf("%d", &resposta_usuario);
     if (resposta_usuario == proximo) { printf("Correto!")} else if (resposta_usuario != proximo) {
        printf("Errado. Tente novamente!\n");
     } else { printf("Número inválido. Por gentileza, não coloque letras ou símbolos.\n") }

     return 0;
    
}

       //Questão e:


int main(){
    int a, b, c, d, e, f;
    a = 1;
    b = 1;
    c = 2;
    d = 3;
    e = 5;
    f = 8;

    int proximo = d + 1; //Nota: Eu sei que é Fibonacci mas é mais fácil isso.
    int resposta_usuario;

     printf{"Aqui temos os números %d, %d, %d, %d\n", a, b, c, d};
     printf("Digite o próximo número que ficará em '__': ");
     scanf("%d", &resposta_usuario);
     if (resposta_usuario == proximo) { printf("Correto!")} else if (resposta_usuario != proximo) {
        printf("Errado. Tente novamente!\n");
     } else { printf("Número inválido. Por gentileza, não coloque letras ou símbolos.\n") }

     return 0;
    
}

 //Questão f:


int main(){
    int a, b, c, d, e, f, g;
    a = 2;
    b = 10;
    c = 12;
    d = 16;
    e = 17;
    f = 18;
    g = 19;

    int proximo = d + 1; //Nota: Eu não entendi
    int resposta_usuario;

     printf{"Aqui temos os números %d, %d, %d, %d\n", a, b, c, d};
     printf("Digite o próximo número que ficará em '__': ");
     scanf("%d", &resposta_usuario);
     if (resposta_usuario == proximo) { printf("Correto!")} else if (resposta_usuario != proximo) {
        printf("Errado. Tente novamente!\n");
     } else { printf("Número inválido. Por gentileza, não coloque letras ou símbolos.\n") }

     return 0;
    
}

//Questão 5: Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em salas diferentes. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar [...]
//Nota do autor: Booleans de verdadeiro ou falso

int main() {
    bool interruptor1 = false;
     bool interruptor2 = false;
      bool interruptor3 = false;
      bool lampada1 = false;
      bool lampada2 = false;
      bool lampada3 = false;

      //nota de autor para ela mesma, porque ninguém é de ferro: Usar "sleep"  para dar uma pausa de 3 segundos. tmj
    
    interruptor1 = true; //tá ligado
    sleep(5);
    lampada1 = true; //Coincidentemente, o interrumptor liga a lâmpada 1;
    interruptor2 = false;
    interruptor3 = true;
    sleep(5);
    lampada2 = true;
    lampada3 = false; //O interruptor 3 liga a lâmpada 2
    printf("Verificando... Isso pode demorar até 10 segundos para ser feito, aguarde. . .\n")
    sleep(10)
    if (lampada2){printf("A lâmpada 2 está acesa. Ela é ligada através do interruptor 3\n")
    }; 
    if (lampada1){printf("A lâmpada 1 está ligada, o interruptor que liga ela é o interruptor 2\n")
    } else {
        printf("A lâmpada 3 está apagada. Isso significa que ela é ligada pelo interruptor 1\n")
    }

return 0

}