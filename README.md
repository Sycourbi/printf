# ft_printf

![C Language](https://img.shields.io/badge/language-C-blue)
![Printf Implementation](https://img.shields.io/badge/printf-implementation-yellowgreen)
![Percentages](https://img.shields.io/badge/specifiers-%25-yellow)
![Format Specifiers](https://img.shields.io/badge/format%20specifiers-yes-brightgreen)

## Description

Bienvenue sur le dépôt du projet ft_printf de l'École 42. Ce projet consiste à recréer la fonction printf de la bibliothèque standard du langage C, en ajoutant des fonctionnalités et des spécifications supplémentaires.

## Badge et Note Obtenu

<div align="center">
  <img src="https://github.com/ayogun/42-project-badges/blob/main/badges/ft_printfe.png?raw=true" alt="Badge du projet ft_printf">
</div>


## Installation

Pour installer le projet ft_printf, suivez ces étapes :

1. Clonez le dépôt :

   ```bash
   git clone https://github.com/Sycourbi/printf.git
   cd printf
   ```
2. Main :

   ```bash
    int main(void)
    {
      ft_printf("26----------------------\n");
      printf("%d\n",    printf("   printf |%-8.6d|%-8.6d|\n", 1025, -1025));
      printf("%d\n", ft_printf("ft_printf |%-8.6d|%-8.6d|\n", 1025, -1025));
      ft_printf("26----------------------\n");
      printf("%d\n",    printf("   printf |%-15.8d|\n", 15));
      printf("%d\n", ft_printf("ft_printf |%-15.8d|\n", 15));
      ft_printf("26----------------------\n");
      printf("%d\n",    printf("   printf |%-20.8d|\n", 15));
      printf("%d\n", ft_printf("ft_printf |%-20.8d|\n", 15));
      ft_printf ("111-----------------------------------\n");
      printf("%d\n",    printf("   printf |%0*d|%0*d|\n",  -3, 10012, -3, -10012));
      printf("%d\n", ft_printf("ft_printf |%0*d|%0*d|\n",  -3, 10012, -3, -10012));
      ft_printf ("119-----------------------------------\n");
      printf("%d\n",    printf("   printf |%-*d|%-*d|\n",  5, 10012, 5, -10012));
      printf("%d\n", ft_printf("ft_printf |%-*d|%-*d|\n",  5, 10012, 5, -10012));
      return (0);
    }
    ```
3. Resultat :

  ```bash
  ./a.out 
26------------------------------------
   printf |001025  |-001025 | 30
ft_printf |001025  |-001025 | 30
26------------------------------------
   printf |00000015         | 28
ft_printf |00000015         | 28
26------------------------------------
   printf |00000015         | 23
ft_printf |00000015         | 23
111-----------------------------------
   printf |10012   |-10012. | 25
ft_printf |10012.  |-10012. | 25
119-----------------------------------
   printf |10012.  |-10012. | 25
ft_printf |10012.  |-10012. | 25
```


