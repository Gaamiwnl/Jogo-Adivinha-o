#include <iostream>

using namespace std;

int main() {
    cout << "**********************" << endl;  
    cout << "* Jogo da Adivinhacao *" << endl;
    cout << "**********************" << endl;
    
    const int NUMERO_SECRETO = 42;

    bool naoAcertou = true;
    int tentativas = 0;

    double pontos = 1000.0;
    
    while(naoAcertou){
        int numeroChute;

        cout <<"tentativas: " << tentativas << endl;
        cout << "qual o seu chute? ";
        cin >> numeroChute;
        tentativas++;
        cout << "O valor do seu chute e: " << numeroChute << endl;
        
        double pontos_perdidos = abs(numeroChute - NUMERO_SECRETO)/2.0;
        pontos = pontos - pontos_perdidos;

        bool acertou = numeroChute == NUMERO_SECRETO;
        bool maior = numeroChute > NUMERO_SECRETO;

        if(acertou){
        cout << "parabens, voce acertou o numero secreto" << endl;
        naoAcertou = false;
        } else if (maior){
        cout << "seu chute foi maior que o numero secreto" << endl;
        } else {
        cout << "seu chute foi menor que o numero secreto" << endl;
        }

    }
    
    cout << "Fim de Jogo" << endl;
    cout << "Voce ganhou o jogo com: " << tentativas << " tentativas" << endl;
    cout << "Sua pontuacao foi: " << pontos << endl;

}