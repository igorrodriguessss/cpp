#include <iostream>

void showMenu() {
    std::cout << "1. Adicionar\n2. Subtrair\n3. Multiplicar\n4. Dividir\n5. Sair\n";
}

int main() {
    int escolha;
    double num1, num2;

    do {
        showMenu();
        std::cout << "Escolha uma opção: ";
        std::cin >> escolha;

        if (escolha >= 1 && escolha <= 4) {
            std::cout << "Digite dois números: ";
            std::cin >> num1 >> num2;
        }

        switch (escolha) {
            case 1:
                std::cout << "Resultado: " << num1 + num2 << std::endl;
                break;
            case 2:
                std::cout << "Resultado: " << num1 - num2 << std::endl;
                break;
            case 3:
                std::cout << "Resultado: " << num1 * num2 << std::endl;
                break;
            case 4:
                if (num2 != 0)
                    std::cout << "Resultado: " << num1 / num2 << std::endl;
                else
                    std::cout << "Divisão por zero não é permitida." << std::endl;
                break;
            case 5:
                std::cout << "Saindo..." << std::endl;
                break;
            default:
                std::cout << "Escolha inválida." << std::endl;
        }
    } while (escolha != 5);

    return 0;
}
