#include <stdio.h>
#include <string.h>

struct Professor {
    char nome[50];
    int funcional;
    char titulacao[20];
};

struct Disciplina {
    char nome[50];
    char codigo[10];
    int carga_horaria;
    Professor professor_responsavel;
};

struct Estudante {
    char nome[50];
    int matricula;
    int idade;
};

void bubbleSort(Estudante estudantes[], int num_estudantes) {
    for (int i = 0; i < num_estudantes - 1; i++) {
        for (int j = 0; j < num_estudantes - i - 1; j++) {
            if (estudantes[j].idade > estudantes[j + 1].idade) {
                Estudante temp = estudantes[j];
                estudantes[j] = estudantes[j + 1];
                estudantes[j + 1] = temp;
            }
        }
    }
}

bool le_valida_idade(int idade) {
    return (idade >= 16 && idade <= 26);
}

int main() {
    Professor professor1;
    strcpy(professor1.nome, "Sebastiao Cleto");
    professor1.funcional = 12345;
    strcpy(professor1.titulacao, "especialista");

    Professor professor2;
    strcpy(professor2.nome, "Diego Dias");
    professor2.funcional = 67890;
    strcpy(professor2.titulacao, "mestre");

    Professor professor3;
    strcpy(professor3.nome, "Beatriz Campos");
    professor3.funcional = 13579;
    strcpy(professor3.titulacao, "doutor");

    Disciplina disciplina1;
    strcpy(disciplina1.nome, "Arquiteturas de Computadores");
    strcpy(disciplina1.codigo, "ARQ101");
    disciplina1.carga_horaria = 40;
    disciplina1.professor_responsavel = professor1;

    Disciplina disciplina2;
    strcpy(disciplina2.nome, "Algoritmos e Programacao Estruturada");
    strcpy(disciplina2.codigo, "ALG202");
    disciplina2.carga_horaria = 60;
    disciplina2.professor_responsavel = professor2;

    Estudante estudante1;
    strcpy(estudante1.nome, "Enzo Rodrigo");
    estudante1.matricula = 1001;
    estudante1.idade = 20;

    Estudante estudante2;
    strcpy(estudante2.nome, "Caio Carnauba");
    estudante2.matricula = 1002;
    estudante2.idade = 22;

    Estudante estudante3;
    strcpy(estudante3.nome, "Joao Victor");
    estudante3.matricula = 1003;
    estudante3.idade = 19;

    Estudante estudante4;
    strcpy(estudante4.nome, "Lucas Stoppa");
    estudante4.matricula = 1004;
    estudante4.idade = 21;

    Estudante estudante5;
    strcpy(estudante5.nome, "Cristiano Mudin");
    estudante5.matricula = 1005;
    estudante5.idade = 20;

    Estudante estudante6;
    strcpy(estudante6.nome, "Davi Oliveira");
    estudante6.matricula = 1006;
    estudante6.idade = 23;

    Estudante estudante7;
    strcpy(estudante7.nome, "Fernando Oliveira");
    estudante7.matricula = 1007;
    estudante7.idade = 19;

    Estudante estudante8;
    strcpy(estudante8.nome, "Juliana Silva");
    estudante8.matricula = 1008;
    estudante8.idade = 21;


    Estudante estudantes_disciplina1[8] = {estudante1, estudante2, estudante3, estudante4};
    int num_estudantes_disciplina1 = 4;

    Estudante estudantes_disciplina2[8] = {estudante5, estudante6, estudante7, estudante8};
    int num_estudantes_disciplina2 = 4;

    bubbleSort(estudantes_disciplina1, num_estudantes_disciplina1);

    printf("Relatorio dos alunos matriculados na disciplina de Arquiteturas de Computadores (ordenados por idade):\n");
    for (int i = 0; i < num_estudantes_disciplina1; i++) {
        printf("%s  %s  %s  %d\n", disciplina1.codigo, disciplina1.professor_responsavel.nome, estudantes_disciplina1[i].nome, estudantes_disciplina1[i].idade);
    }

    bubbleSort(estudantes_disciplina2, num_estudantes_disciplina2);
    for (int i = 0; i < num_estudantes_disciplina2 / 2; i++) {
        Estudante temp = estudantes_disciplina2[i];
        estudantes_disciplina2[i] = estudantes_disciplina2[num_estudantes_disciplina2 - i - 1];
        estudantes_disciplina2[num_estudantes_disciplina2 - i - 1] = temp;
    }
    
	printf("\n");
	
    printf("Relatorio dos alunos matriculados na disciplina de Algoritmos e Programacao Estruturada (ordem por idade decrescente):\n");
    for (int i = 0; i < num_estudantes_disciplina2; i++) {
        printf("%s  %s  %s  %d\n", disciplina2.codigo, disciplina2.professor_responsavel.nome, estudantes_disciplina2[i].nome, estudantes_disciplina2[i].idade);
    }

    return 0;
}

