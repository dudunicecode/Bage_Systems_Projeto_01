<div align="center">

<!-- Texto "digitando" - SVG dinâmico, funciona na renderização do GitHub -->
<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=28&pause=1000&color=00FF9C&center=true&vCenter=true&width=750&lines=Ubuntu+26.04.1+vs+Kali+Linux+2026.2;Benchmark+de+CPU%2C+Mem%C3%B3ria+e+Apps;sysbench+%2B+htop+%2B+VMware+Workstation;An%C3%A1lise+Descritiva+de+Desempenho" alt="Typing SVG" />

<br>

<img src="https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white" />
<img src="https://img.shields.io/badge/Kali%20Linux-557C94?style=for-the-badge&logo=kalilinux&logoColor=white" />
<img src="https://img.shields.io/badge/VMware%20Workstation-607078?style=for-the-badge&logo=vmware&logoColor=white" />
<img src="https://img.shields.io/badge/sysbench-black?style=for-the-badge&logo=gnu-bash&logoColor=white" />
<img src="https://img.shields.io/badge/GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white" />

</div>

<br>

## 📘 Sobre o repositório

Este repositório reúne os dados e o relatório da análise comparativa de desempenho entre **Ubuntu 26.04.1** e **Kali Linux 2026.2**, executados em máquinas virtuais com hardware equivalente no **VMware Workstation**.

O objetivo foi comparar características de instalação, consumo de recursos em estado ocioso, desempenho de CPU/memória, comportamento de aplicações multiplataforma em uso real e o tempo de compilação/execução de um programa em C, utilizando **htop** (monitoramento), **sysbench** (benchmark sintético) e o comando **`time`** (aplicações e programa em C).

> ⚠️ Os resultados apresentam medições descritivas de uma única execução por cenário — não constituem uma classificação estatística definitiva entre as distribuições.

<br>

## ⚙️ Configuração do experimento

| Recurso | Configuração |
|---|---|
| Memória RAM | 8 GB |
| Processador virtual | 1 processador, 4 núcleos |
| Armazenamento em SSD | 20 GB |
| Interface gráfica (Ubuntu) | GNOME |
| Interface gráfica (Kali) | XFCE |

<br>

## 📊 Principais resultados

### Espaço em disco e RAM em estado ocioso

| Característica | Ubuntu 26.04.1 | Kali Linux 2026.2 |
|---|---|---|
| Espaço ocupado após instalação | 8,6 GB | 15,6 GB |
| RAM observada em idle | 1,04 GB de 7,20 GB | 762 MB de 7,72 GB |

### Benchmark de CPU (sysbench)

| Métrica | Ubuntu | Kali |
|---|---|---|
| Eventos por segundo | 1.044,93 | 1.064,46 |
| Total de eventos (~10s) | 10.452 | 10.647 |

**Kali ~1,87% mais eventos/s que o Ubuntu.**

### Benchmark de memória (sysbench)

| Métrica | Ubuntu | Kali |
|---|---|---|
| Taxa de transferência (MiB/s) | 6.371,62 | 6.487,28 |
| Operações por segundo | 6.524.537,83 | 6.642.972,16 |

**Kali ~1,82% maior taxa de transferência que o Ubuntu.**

<br>

## 🧩 Aplicações multiplataforma (VS Code, Nmap, Firefox)

Além dos benchmarks sintéticos, medimos o tempo de inicialização/execução (`time`) e o consumo de CPU/RAM (`htop`) de três ferramentas usadas nas duas distribuições.

### Visual Studio Code (`time code`)

| Métrica | Ubuntu | Kali |
|---|---|---|
| real | 1,351 s | 0,09 s |
| user | 0,085 s | 0,06 s |
| sys | 2,150 s | 0,04 s |
| CPU (htop) | 0,0% a 0,7% | 0,0% a 0,7% |
| RAM (htop) | 2,7% | 3,4% |

> ⚠️ A diferença expressiva no tempo real pode não refletir desempenho puro do sistema: o comando `code` pode apenas reconectar a um processo já em execução em segundo plano (arquitetura cliente-servidor do editor).

### Nmap (`time nmap 127.0.0.1`)

| Métrica | Ubuntu | Kali |
|---|---|---|
| real | 0,068 s | 0,13 s |
| user | 0,029 s | 0,02 s |
| sys | 0,038 s | 0,02 s |

Varredura muito curta contra o host local — diferença de décimos de segundo, pouco significativa na prática.

### Firefox (`time firefox -no-remote about:blank`)

| Métrica | Ubuntu | Kali |
|---|---|---|
| real | 3,597 s | 3,31 s |
| user | 1,790 s | 2,27 s |
| sys | 2,116 s | 1,92 s |
| CPU (htop) | 0,0% a 0,7% | 0,0% a 1,3% |
| RAM (htop, janela vazia) | 6,6% | 4,1% |

> VLC Media Player e Snap ainda não possuem dados quantitativos registrados nesta versão do relatório.

<br>

## 🖥️ Compilação e execução de programa em C

Programa em C compilado com GCC e cronometrado com `time` nas duas distribuições. O programa percorre o intervalo de 500 a 1500 e imprime os valores que, divididos por 7, deixam resto igual a 3.

```c
#include <stdio.h>
int main()
{
    printf("Numeros entre 500 e 1500 que divididos por 7 deixam resto igual a 3:");
    for(int i=500;i<=1500;i++){
        if(i%7==3){
            printf("\n%d", i);
        }
    }
    return 0;
}
```

| Etapa | Métrica | Ubuntu | Kali |
|---|---|---|---|
| Compilação (`gcc`) | real | 0,048 s | 0,11 s |
| Execução (`./programa`) | real | 0,003 s | 0,00 s |

**Ubuntu compilou ~0,062 s mais rápido nesta execução.** A execução do binário já compilado foi da ordem de poucos milissegundos em ambas as distribuições — o programa é simples (um único laço com uma operação de módulo), então o tempo total é dominado pela sobrecarga de carregamento do processo pelo sistema operacional, não pela complexidade do algoritmo.

<br>

## 🧠 Conclusão resumida

- **Kali Linux**: leve vantagem em CPU/memória e menor uso de RAM ociosa, porém ocupa ~81% mais espaço em disco.
- **Ubuntu**: instalação muito mais enxuta em disco, desempenho sintético praticamente equivalente e compilação do programa em C mais rápida nesta execução.
- **Aplicações reais**: Nmap e Firefox tiveram tempos próximos entre as distribuições; o tempo do VS Code variou bastante e deve ser reavaliado em condições controladas.
- As diferenças de benchmark são pequenas o suficiente para não justificarem, isoladamente, a escolha de uma distribuição — a **finalidade de uso** (uso geral vs segurança da informação) é o critério mais relevante.

<br>

## 🚧 Limitações

- Execução única por teste (sem repetições, média ou desvio padrão).
- Ambientes gráficos diferentes (GNOME vs XFCE) podem ter influenciado o consumo de RAM.
- Não foram controlados: modelo da CPU física, carga do hospedeiro, versão exata do VMware/sysbench.
- O tempo do VS Code pode refletir o estado prévio do processo (já em execução), não desempenho puro do sistema.
- VLC Media Player e Snap ainda não possuem dados quantitativos coletados.

<br>

## 📄 Relatório completo

O relatório completo (PDF) com fundamentação teórica, metodologia detalhada e referências está disponível na pasta [`/relatorio`](./relatorio) deste repositório.

Também estão disponíveis:
- [`index.html`](./index.html) — página interativa com a análise completa (role para navegar entre as seções).
- [`ubuntu_vs_kali_benchmark.ipynb`](./ubuntu_vs_kali_benchmark.ipynb) — notebook Jupyter com os gráficos e dados reproduzíveis.

<br>

## 📚 Referências

- Broadcom (2026). *Create virtual machines in VMware Workstation*.
- Canonical (2026). *Ubuntu Project Documentation* / *Ubuntu 26.04 LTS Release Notes*.
- Kali Linux (2025, 2026). *What is Kali Linux?* / *Kali Linux 2026.2 Release*.
- htop developers (2026). *htop: An interactive process viewer*.
- Kopytov, A. and contributors (2026). *sysbench: Scriptable multi-threaded benchmark tool*.

<br>

<div align="center">

<img src="https://komarev.com/ghpvc/?username=[USUARIO]&label=Visualiza%C3%A7%C3%B5es&color=2E9EF7&style=for-the-badge" />

</div>
