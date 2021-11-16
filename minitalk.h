/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:31:29 by ykassim-          #+#    #+#             */
/*   Updated: 2021/11/16 14:41:05 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>

int		ft_atoi(char *pid);
void	send_byte(char byte);
void	put_byte(int n);
void	ft_putnbr(int num);

#endif
