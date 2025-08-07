#include <iostream>

using namespace std;

int main() {
    cout << "**********************" << endl;  
    cout << "* Jogo da Adivinhacao *" << endl;
    cout << "**********************" << endl;
    cout << "Selecione a dificuldade que voce deseja jogar" << endl;
    cout << " Facil(F) Medio (M) Dificil(D)" << endl;
    
    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas;

    if(dificuldade == 'F'){
        numero_de_tentativas = 15;
    } else if ('M'){
        numero_de_tentativas = 10;
    } else {
        numero_de_tentativas = 5;
    }
    const int NUMERO_SECRETO = 42;
      
    bool naoAcertou = true;
    int tentativas = 0;
    double pontos = 1000.0;
    
    for(tentativas = 0; tentativas <= numero_de_tentativas; tentativas++){

        int numeroChute;
        
        cout <<"tentativas: " << tentativas << endl;
        cout << "qual o seu chute? ";
        cin >> numeroChute;
        cout << "O valor do seu chute e: " << numeroChute << endl;
        
        double pontos_perdidos = abs(numeroChute - NUMERO_SECRETO)/2.0;
        pontos = pontos - pontos_perdidos;
        
        bool acertou = numeroChute == NUMERO_SECRETO;
        bool maior = numeroChute > NUMERO_SECRETO;
        
        if(acertou){
            cout << "parabens, voce acertou o numero secreto" << endl;
            naoAcertou = false;
            break;
        } else if (maior){
            cout << "seu chute foi maior que o numero secreto" << endl;
        } else {
            cout << "seu chute foi menor que o numero secreto" << endl;
        }
    }

    
    cout << "Fim de Jogo" << endl;
    
    if(naoAcertou){
        cout << "voce perdeu, tente novamente" << endl;
    } else {
        cout << "Voce ganhou o jogo com: " << tentativas << " tentativas" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuacao foi: " << pontos << endl;
    }
    
}

