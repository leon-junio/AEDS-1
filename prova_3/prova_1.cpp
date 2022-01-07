#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
//definindo std
using namespace std;

//Insira o total de dados que vao ser lidos o padrão é 50 alunos dentro do arquivo de TXT
const int TOTAL_F = 50;

//declaração da classe funcionario
class Funcionario
{
private:
//atributos privados
    int codigo;
    string nome;
    int idade;
    float salario;

public:
//metodos get e set e construtores
    //construtores
    Funcionario()
    {
    }
    Funcionario(int codigo, string nome, int idade, float salario)
    {
        inicializar(codigo, nome, idade, salario);
    }
    //meotodos de encapsulamento de dados get/set
    int getCodigo()
    {
        return codigo;
    }
    void setCodigo(int codigo)
    {
        this->codigo = codigo;
    }

    string getNome()
    {
        return nome;
    }
    void setNome(string nome)
    {
        this->nome = nome;
    }

    int getIdade()
    {
        return idade;
    }
    void setIdade(int idade)
    {
        this->idade = idade;
    }

    float getSalario()
    {
        return salario;
    }
    void setSalario(float salario)
    {
        this->salario = salario;
    }
    //inicializador do construtor
    void inicializar(int codigo, string nome, int idade, float salario)
    {
        this->codigo = codigo;
        this->nome = nome;
        this->idade = idade;
        this->salario = salario;
    }
};

//Modulo que retorna o array de funcionarios preenchido
Funcionario *preencher(Funcionario vetor[], string nomeArq)
{
    nomeArq += ".txt";
    string line;
    int countLine = 0, index = 0;
    int num = 0, idade = 0;
    float salario = 0;
    //abrindo o arquivo com base no nome que foi digitado no main
    ifstream arquivo(nomeArq);
    if (!arquivo.is_open())
    {
        cerr << "Arquivo não encontrado - '"
             << nomeArq << "'" << endl;
    }
    else
    {
        //nesse momento pego os dados presentes no txt e crio um objeto novo com cada um
        while (getline(arquivo, line))
        {
            //usando switch para variar entre as linhas eu acesso todo o arquivo de texto
            countLine++;
            switch (countLine)
            {
            case 1:
            //uso o sscanf para converter string para int
                sscanf(line.c_str(), "%d", &num);
                vetor[index].setCodigo(num);
                break;
            case 2:
                vetor[index].setNome(line);
                break;
            case 3:
                sscanf(line.c_str(), "%d", &idade);
                vetor[index].setIdade(idade);
                break;
            case 4:
             //uso o sscanf para converter string para float
                sscanf(line.c_str(), "%f", &salario);
                vetor[index].setSalario(salario);
                break;
            default:
                break;
            }
            if (countLine == 4)
            {
                //quando os 4 atributos sao lidos o index aumenta e as linhas voltam para o inicio
                //gerando assim uma forma progressiva de acesso aos dados do txt
                index++;
                countLine = 0;
            }
        }
        arquivo.close();
    }
    //retorno o vetor ou o ponteiro para os dados daquele vetor
    return vetor;
}

//modulo que retorno um inteiro do codigo do funcionario mais velho
int exibirMaisVelho(Funcionario vetor[TOTAL_F])
{
    int count = 0, velho = 0;
    for (int i = 0; i < TOTAL_F; i++)
    {
        if (count < vetor[i].getIdade())
        {
            count = vetor[i].getIdade();
            velho = vetor[i].getCodigo();
        }
    }
    return velho;
}

//modulo que retorna o total de funcionarios que ganham mais de 2000 reais
int qtdFuncionarios(Funcionario vetor[TOTAL_F])
{
    int soma = 0;
    for (int i = 0; i < TOTAL_F; i++)
    {
        if (vetor[i].getSalario() > 2000)
        {
            soma++;
        }
    }
    return soma;
}

int main()
{
    Funcionario funcionarios[TOTAL_F]; //vetor de funcionarios com ate 50 posições
    string nomeArq;
    int codigo = 0, qtdFunc = 0;
    cout << "Informe o nome do arquivo contendo os dados dos funcionarios (sem a extensao {.txt,.dat etc} no final): " << endl;
    getline(cin, nomeArq); //definindo o nome do arquivo
    preencher(funcionarios, nomeArq); //preenchendo vetor com os dados do txt
    codigo = exibirMaisVelho(funcionarios); //salvando codigo do funcionario mais velho
    qtdFunc = qtdFuncionarios(funcionarios); //salvando o total de usuarios com salario maior que 2000 reais
    cout << "Codigo do funcionario mais velho: " << codigo << endl;
    cout << "Quantidade de funcionarios que ganham mais de 2000 reais: " << qtdFunc << endl;
    fstream f("resultados.txt", f.out | f.app); //salvando os dados obtidos dos metodos em um txt
    f << "Codigo do funcionario mais velho: " << codigo << "\n";
    f << "Quantidade de funcionarios que ganham mais de 2000 reais: " << qtdFunc << "\n";
    f.close(); //fechando arquivo de txt 
    cout << "FIM DO PROGRAMA" << endl;
}

