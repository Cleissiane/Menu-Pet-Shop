#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>

    /*Função para criar efeito de digitação, gera um
    atraso e imprime caractere por caractere*/
    void typing_effect(char s[100]){
    int i = 0;
    while(s[i] != '\0'){
    printf("%c", s[i]);
    fflush(stdout);
    usleep(1000);
    i++;
  }
}


    // Função para limpar o buffer de entrada
    void limparBuffer() {
    int temp;
    while ((temp = getchar()) != '\n' && temp != EOF);
    }

int main()
{

    int menu, agendar, preferencia, tipo, racao, brinquedos, acessorio, medicamento, voltar;
    char nomeT[100], rua[50], nomeP[50], bairro[50], horario[50], horariomanha[10], horariotarde[10];
    float residencia, cep, telefone;

    setlocale(LC_ALL, "Portuguese_Brazil.1252");//Definição para o idioma português

    //Loop para exibir o menu, encerra quando o usuario digita 0 para sair
    while (1){
    typing_effect("\n\n\tOlá, Bem-Vindo(a) ao Torres Pet Shop\n\n");

    printf("O que pretende fazer? Informe o número correspondente.\n\n");
    printf("\n [1] Cadastrar\n [2] Banho e Tosa\n [3] Ração\n [4] Brinquedos\n [5] Acessórios Complementares\n [6] Medicamentos\n [0] Sair\n");

    printf("\nEscolha a opção desejada:\n");
    scanf("%d", &menu);

    switch (menu)
    {

    case 1:
        printf("\n\t*Cadastrar*\n\n"); //Cadastro breve com a opção de agendamento após cadastro concluido
        printf("\nQual o tipo de pet? Digite de acordo a númeração:\n [1] Gato\n [2] Cachorro\n [3] Outro\n");
        scanf("%d", &tipo);

        if (tipo==3){
            typing_effect("\n\nDesculpe, só atendemos gatos e cachorros.\n\n");
            return 0;

        } else

        if(tipo!= 1 && tipo!=2 && tipo!=3){
            typing_effect("\n(OPÇÃO INVÁLIDA)\n");
            return 0;
        }

        printf("\n\n---DADOS PESSOAIS DO TUTOR---\n\n");
        printf("Nome completo: ");
        scanf("%s", &nomeT);

        limparBuffer();
        printf("\nInforme seu número de telefone:\n");
        scanf("%f", &telefone);

        printf("\n(ENDEREÇO)\n\n");
        limparBuffer();
        printf("Nome ou Número da rua:\n");
        scanf("%s", &rua);

        limparBuffer();
        printf("\nNúmero da residência:\n");
        scanf("%f", &residencia);

        printf("\nBairro:\n");
        scanf("%s", &bairro);

        limparBuffer();
        printf("\nInforme o seu CEP: \n");
        scanf("%f", &cep);

        printf("\n\n---DADOS DO PET---\n\n");

        limparBuffer();
        printf("Nome do Pet:\n");
        scanf("%s", &nomeP);

        typing_effect("\nCadastro concluido!\n\n");
        printf(" Deseja agendar? Tecle:\n\n [1] pra SIM ou qualquer letra para NÃO\n");
        scanf("%d", &agendar);

        if (agendar == 1){
            printf("\n\n(ESTAMOS DISPONIVEIS MANHÃ E TARDE)\n\n");
            printf("Qual é o melhor pra você? Tecle: \n\n [1] Manhã\n [2] Tarde\n");
            scanf("%d", &preferencia);


       } else{
            typing_effect("\nObrigada, Volte sempre!\n");
            return 0;
        }

        if (preferencia != 1 && preferencia != 2){
            typing_effect("\n(OPÇÃO INVÁLIDA)\n");
            return 0;
        }

        if (preferencia==1){
            printf("Horários disponiveis: \n\n 08:00\n 09:40\n 11:10 \n\n");
            printf("Qual horário você prefere?\n");
            scanf("%s", &horariomanha);


            if (strcmp(horariomanha, "08:00") != 0 && strcmp(horariomanha, "8h") != 0 && //Função da biblioteca <string.h>
            strcmp(horariomanha, "09:40") != 0 && strcmp(horariomanha, "9h40") != 0 &&   //Que compara strings
            strcmp(horariomanha, "11:10") != 0 && strcmp(horariomanha, "11h10") != 0) {

            typing_effect("Horário indisponível. Volte ao menu e tente novamente.\n\n");
            system("pause");
            system("cls"); //Limpa a tela apagando tudo que já foi imprimido

            }
            else {
                typing_effect("\nHORÁRIO AGENDADO!\n\n");
                system("pause");
                system("cls");
                break;
            }



        }

            if(preferencia==2){
            printf("Horários disponiveis: \n\n 13:00\n 14:30\n 16:00\n\n");
            printf("\n\nQual horário você prefere?\n");
            scanf("%s", &horariotarde);

            if (strcmp(horariotarde, "13:00") != 0 && strcmp(horariotarde, "13h") != 0 &&
            strcmp(horariotarde, "14:30") != 0 && strcmp(horariotarde, "14h30") != 0 &&
            strcmp(horariotarde, "16:00") != 0 && strcmp(horariotarde, "16h") != 0) {

            typing_effect("Horário indisponível. Volte ao menu e tente novamente.\n\n");
            system("pause");
            system("cls");

            }
            else {
                typing_effect("\nHORÁRIO AGENDADO!\n\n");
                system("pause");
                system("cls");
                break;
            }

        }

            break;



    case 2:
        printf("\n\t*Banho e Tosa*\n\n");

        typing_effect("\nAlém do banho e aparo, inclui: \n\n");
        typing_effect(" -Limpeza de ouvidos;\n -corte e lixamento de unhas;\n -Hidratação;\n\n (Funcionamos das 08:00 às 17:30)\n\n");

        printf(" Deseja agendar? Tecle:\n\n [1] pra SIM ou qualquer letra para NÃO\n\n");
        scanf("%d", &agendar);

        if (agendar == 1){
            printf("\n\n(ESTAMOS DISPONIVEIS MANHÃ E TARDE)\n\n");
            printf("Qual é o melhor pra você? Tecle: \n\n [1] Manhã\n [2] Tarde\n");
            scanf("%d", &preferencia);


       } else{
            typing_effect("\nObrigada, Volte sempre!\n");
            return 0;
        }

        if (preferencia != 1 && preferencia != 2){
            typing_effect("\n(OPÇÃO INVÁLIDA)\n");
            return 0;
        }

        if (preferencia==1){
            printf("Horários disponiveis: \n\n 08:00\n 09:40\n 11:10 \n\n");
            printf("Qual horário você prefere?\n");
            scanf("%s", &horariomanha);


            if (strcmp(horariomanha, "08:00") != 0 && strcmp(horariomanha, "8h") != 0 &&
            strcmp(horariomanha, "09:40") != 0 && strcmp(horariomanha, "9h40") != 0 &&
            strcmp(horariomanha, "11:10") != 0 && strcmp(horariomanha, "11h10") != 0) {

            typing_effect("Horário indisponível. Volte ao menu e tente novamente.\n\n");
            system("pause");
            system("cls");
            }

            else {
                typing_effect("\nHORÁRIO AGENDADO!\n\n");
                system("pause");
                system("cls");
                break;
            }



        }

            if(preferencia==2){
            printf("Horários disponiveis: \n\n 13:00\n 14:30\n 16:00\n\n");
            printf("\n\nQual horário você prefere?\n");
            scanf("%s", &horariotarde);

            if (strcmp(horariotarde, "13:00") != 0 && strcmp(horariotarde, "13h") != 0 &&
            strcmp(horariotarde, "14:30") != 0 && strcmp(horariotarde, "14h30") != 0 &&
            strcmp(horariotarde, "16:00") != 0 && strcmp(horariotarde, "16h") != 0) {

            typing_effect("Horário indisponível. Volte ao menu e tente novamente.\n\n");
            system("pause");
            system("cls");
            }

            else {
                typing_effect("\nHORÁRIO AGENDADO!\n\n");
                system("pause");
                system("cls");
                break;
            }

        }
            break;


    case 3:
        printf("\n\t\t\t*Ração*\n\n");
        typing_effect("\t\t  Racões disponíveis: \n\n");

        typing_effect("\t\t\t Gato:\n\n [1] Sachê whiskas filhotes frango - 85g --------- R$   3,29\n [2] Sachê Premier Gourmet Atum - 70g ------------ R$   8,90\n");
        typing_effect(" [3] Sachê Cat Chow sabor carne - 85g ------------ R$   3,29\n [4] Golden sabor frango - 3kg ------------------- R$  79,90\n");
        typing_effect(" [5] Royal canin veterinary diet - 1,5kg --------- R$ 209,90\n\n");
        typing_effect("\t\t\tCachorro:\n\n [6] Sachê Dog Chow sabor frango - 100g ---------- R$   2,69\n [7] Golden fórmula carne e arroz - 1kg ---------- R$  21,95\n");
        typing_effect(" [8] Max Light - 3kg ----------------------------- R$  54,95\n [9] Special Dog carne filhotes - 10kg ----------- R$ 122,90\n\n");

        printf("Digite o número relativo a opção do seu interesse: ");
        scanf("%d", &racao);

        if (racao>9 || racao==0){
            typing_effect("\n(OPÇÃO INVÁLIDA)\n");
            return 0;
        }else{
            printf("\nSeu pedido será preparado!\n\n");
        }
        break;

    case 4:
        printf("\n\t\t*Brinquedos*\n\n");

        printf(" [1] Osso flexivel mordedor -------- R$ 15,95\n [2] Bola vinil -------------------- R$ 17,95\n [3] Pelúcia macaco azul ----------- R$ 19,95\n");
        printf(" [4] Bolinha ping pong colorida ---- R$  6,85\n [5] Balance Cat ------------------- R$ 27,95\n [6] Arranhador Cat relax ---------- R$ 36,95\n");
        printf(" [7] Pelúcia argola ---------------- R$ 16,95\n [8] Bola espinho jambo ------------ R$ 17,49\n\n");

        printf("Escolha o brinquedo de acordo a númeração:");
        scanf("%d", &brinquedos);


        if (brinquedos>8 || brinquedos==0){
            typing_effect("\n(OPÇÃO INVÁLIDA)\n");
            return 0;
        }else{
            printf("\nSeu pedido será preparado!\n\n");
        }
        break;

    case 5:
        printf("\n\t\t*Acessórios complementares*\n\n");

        printf(" [1] Guia de couro forrado --------------------- R$  21,90\n [2] Coleira Hello preto ----------------------- R$  33,95\n [3] Caixa transporte black Nº 1 --------------- R$  29,95\n");
        printf(" [4] Peitoral Daytona Ferplast preto ----------- R$  89,90\n [5] Cama Cat Confort -------------------------- R$ 159,90\n [6] mochila bolsa pet para transporte --------- R$ 169,00\n");
        printf(" {7] Casinha plástica iglu preta --------------- R$ 110,90\n\n");

        printf("Escolha o acessório de acordo a númeração:");
        scanf("%d", &acessorio);

        if (acessorio>7 || acessorio==0){
            typing_effect("\n(OPÇÃO INVÁLIDA)\n");
            return 0;
        }else{
            printf("\nSeu pedido será preparado!\n\n");
        }
        break;

    case 6:
        printf("\n\t\t\t*Medicamentos*\n\n");

        printf(" [1] Vermifugo para cachorros - 4 comprimidos --------- R$ 12,24\n [2] Biodex - 20 comprimidos -------------------------- R$ 15,44\n [3] Marcepton - 20ml --------------------------------- R$ 18,32\n ");
        printf("[4] Helfline plus para gatos - 2 comprimidos --------- R$ 17,91\n [5] vermifugos para gatos - 1 bisnaga ---------------- R$ 69,91\n\n");

        printf("Escolha o medicamento de acordo a númeração:\n\n");
        scanf("%d", &medicamento);

        if (medicamento>5 || medicamento==0){
            typing_effect("\n(OPÇÃO INVÁLIDA)\n");
            return 0;
        }else{
            printf("\nSeu pedido será preparado!\n\n");
        }
        break;

    case 0:
        typing_effect("\n\nVocê escolheu sair. Obrigada por usar nossos serviços, até logo!\n\n");
        return 0;

    default:
        typing_effect("\n(OPÇÃO INVÁLIDA)\n");

        }
    }

    return 0;
    }
