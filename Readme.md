<div align="center">

<!-- Texto "digitando" - SVG dinâmico, funciona na renderização do GitHub -->
<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=28&pause=1000&color=00FF9C&center=true&vCenter=true&width=750&lines=Ubuntu+26.04.1+vs+Kali+Linux+2026.2;Benchmark+de+CPU+e+Mem%C3%B3ria;sysbench+%2B+htop+%2B+VMware+Workstation;An%C3%A1lise+Descritiva+de+Desempenho" alt="Typing SVG" />

<br>

<img src="https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white" />
<img src="https://img.shields.io/badge/Kali%20Linux-557C94?style=for-the-badge&logo=kalilinux&logoColor=white" />
<img src="https://img.shields.io/badge/VMware%20Workstation-607078?style=for-the-badge&logo=vmware&logoColor=white" />
<img src="https://img.shields.io/badge/sysbench-black?style=for-the-badge&logo=gnu-bash&logoColor=white" />

</div>

<br>

## 📘 Sobre o repositório

Este repositório reúne os dados e o relatório da análise comparativa de desempenho entre **Ubuntu 26.04.1** e **Kali Linux 2026.2**, executados em máquinas virtuais com hardware equivalente no **VMware Workstation**.

O objetivo foi comparar características de instalação, consumo de recursos em estado ocioso e desempenho de CPU/memória, utilizando **htop** (monitoramento) e **sysbench** (benchmark).

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

## 🧠 Conclusão resumida

- **Kali Linux**: leve vantagem em CPU/memória e menor uso de RAM ociosa, porém ocupa ~81% mais espaço em disco.
- **Ubuntu**: instalação muito mais enxuta em disco, com desempenho praticamente equivalente.
- As diferenças de benchmark são pequenas o suficiente para não justificarem, isoladamente, a escolha de uma distribuição — a **finalidade de uso** (uso geral vs segurança da informação) é o critério mais relevante.

<br>

## 🚧 Limitações

- Execução única por teste (sem repetições, média ou desvio padrão).
- Ambientes gráficos diferentes (GNOME vs XFCE) podem ter influenciado o consumo de RAM.
- Não foram controlados: modelo da CPU física, carga do hospedeiro, versão exata do VMware/sysbench.

<br>

## 📄 Relatório completo

O relatório completo (PDF) com fundamentação teórica, metodologia detalhada e referências está disponível na pasta [`/relatorio`](./relatorio) deste repositório.

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
