#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class Pessoa
{
private:
    int codigo, idade, numero;
    string nome, endereco, complemento;

public:
    Pessoa()
    {
    }
    Pessoa(int codigo, string nome, int idade, string endereco, string complemento, int numero)
    {
        inicializar(codigo, nome, idade, endereco, complemento, numero);
    }

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

    string getEndereco()
    {
        return endereco;
    }
    void setEndereco(string endereco)
    {
        this->endereco = endereco;
    }

    string getComplemento()
    {
        return complemento;
    }
    void setComplemento(string complemento)
    {
        this->complemento = complemento;
    }

    int getNumero()
    {
        return numero;
    }
    void setNumero(int numero)
    {
        this->numero = numero;
    }

    void inicializar(int codigo, string nome, int idade, string endereco, string complemento, int numero)
    {
        this->codigo = codigo;
        this->nome = nome;
        this->idade = idade;
        this->endereco = endereco;
        this->numero = numero;
    }

    void preencher()
    {
        try
        {
            int codigo, idade, numero;
            string nome, endereco, complemento;
            cout << "Digite o codigo: ";
            cin >> codigo;
            cout << "Digite o nome: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Digite a idade: ";
            cin >> idade;
            cout << "Digite o endereco: ";
            cin.ignore();
            getline(cin, endereco);
            cout << "Digite o complemento: ";
            getline(cin, complemento);
            cout << "Digite o numero: ";
            cin >> numero;
            setCodigo(codigo);
            setNome(nome);
            setIdade(idade);
            setEndereco(endereco);
            setComplemento(complemento);
            setNumero(numero);
        }
        catch (exception e)
        {
            cout << e.what() << "Erro ao preencher dados" << endl;
        }
    }

    void exibir()
    {
        cout << "Exibindo Pessoa \n";
        cout << "Codigo: " << getCodigo() << endl;
        cout << "Nome: " << getNome() << endl;
        cout << "Idade: " << getIdade() << endl;
        cout << "Endereco: " << getEndereco() << endl;
        cout << "Complemento: " << getComplemento() << endl;
        cout << "Numero: " << getNumero() << endl;
    }
};

int main()
{
    try
    {
        int numPessoas = 0;
        FILE *file;
        string nomeArq = "";
        cout << "Digite quantas pessoas vao ser adicionadas: ";
        cin >> numPessoas;
        Pessoa pessoas[numPessoas];
        for (int i = 0; i < numPessoas; i++)
        {
            cout << "Adicionar pessoa " << i + 1 << endl;
            pessoas[i].preencher();
            pessoas[i].exibir();
        }
        cout << "Digite o nome do arquivo no qual você deseja salvar os dados: ";
        cin.ignore();
        getline(cin, nomeArq);
        nomeArq += ".txt";
        fstream f(nomeArq, f.out | f.app);
        for (int i = 0; i < numPessoas; i++)
        {
            f << pessoas[i].getCodigo() << "\n";
            f << pessoas[i].getNome() << "\n";
            f << pessoas[i].getIdade() << "\n";
            f << pessoas[i].getEndereco() << "\n"; //poderia usar fprintf(file,"%s",string.c_str());
            f << pessoas[i].getComplemento() << "\n";
            f << pessoas[i].getNumero() << "\n";
        }
        cout << "Finalizou" << endl;
    }
    catch (exception e)
    {
        cout << e.what() << "Erro interno" << endl;
    }
}
