/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_msg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:38:05 by sfroidev          #+#    #+#             */
/*   Updated: 2023/07/01 12:35:30 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_fractal_options(void)
{
	ft_putendl_fd("*--------------- Fractales disponibles --------------*\n", 1);
	ft_putendl_fd("Quelle fractale voulez-vous voir ?", 1);
	ft_putendl_fd("\tM - Mandelbrot", 1);
	ft_putendl_fd("\tJ - Julia", 1);
	ft_putendl_fd("\e[36mExemple :\t./fractol <type>\n\t\t./fractol M\e[0m", 1);
	ft_putstr_fd("\nPour Julia, vous pouvez specifier des valeurs \n", 1);
	ft_putstr_fd("de depart pour la forme fractale initiale.\n", 1);
	ft_putstr_fd("Les valeurs doivent etres comprises entre\n", 1);
	ft_putendl_fd("-2.0 et 2.0 et doivent contenir un point decimal.", 1);
	ft_putendl_fd("\e[36mExemple :\t./", 1);
	ft_putendl_fd("./fractol J\n\t\t./fractol J 0.285 0.01\e[0m", 1);
}

void	print_color_options(void)
{
	ft_putendl_fd("*-------------- Affichage des couleurs --------------*\n", 1);
	ft_putendl_fd("Choisissez une couleur en fournissant un code hexa.", 1);
	ft_putendl_fd("Le code couleur doit etre au format : RRGGBB", 1);
	ft_putendl_fd("\tBlanc:\tFFFFFF\t\tNoir:t000000", 1);
	ft_putendl_fd("\tRouge:\tFF0000\t\tVert:t00FF00", 1);
	ft_putendl_fd("\tBleu:\t0000FF\t\tJaune:tFFFF00", 1);
	ft_putendl_fd("Autes couleurs interessantes :", 1);
	ft_putendl_fd("\tViolet:\t9933FF\t\tOrange:\tCC6600", 1);
	ft_putendl_fd("\tRose:\tFF3399\t\tTurquoise:t00FF80", 1);
	ft_putstr_fd("\e[36mExemple :\t", 1);
	ft_putendl_fd("./fractol<type> <color>", 1);
	ft_putendl_fd("\t\t./fractol M 0066FF\e[0m", 1);
	ft_putstr_fd("\nPour Julia, vous ne pouvez specifier des couleurs \n", 1);
	ft_putendl_fd("qu'apres les valeurs de depart.", 1);
	ft_putstr_fd("\e[36mExemple :\t", 1);
	ft_putendl_fd("./fractol j 0.285 0.01 cc6600\E[0M", 1);
}

void	print_controls(void)
{
	ft_putendl_fd("*--------------------- Controles --------------------*", 1);
	ft_putendl_fd("WASD ou les fleches ==================> deplace la vue", 1);
	ft_putendl_fd("+/- ou molette souris ================> zoom et dezoom", 1);
	ft_putendl_fd("Barre espace ====> change les combinaisons de couleurs", 1);
	ft_putendl_fd("Clic gauche ===========> modifie les reglages de julia", 1);
	ft_putendl_fd("(Seulement pour Julia)", 1);
	ft_putendl_fd("1, 2 ==========================> changer les fractales", 1);
	ft_putendl_fd("ESC ou fermer la fenetre ============> quitte fract'ol", 1);
	ft_putendl_fd("*----------------------------------------------------*", 1);
}

void	help_msg(t_fractol *f)
{
	ft_putendl_fd("\n*------------------------------------------*", 1);
	ft_putendl_fd("\n|                   FRACT'OL               |", 1);
	ft_putendl_fd("\n*------------------------------------------* \n\n", 1);
	print_fractal_options();
	print_color_options();
	clean_exit(EXIT_FAILURE, f);
}
