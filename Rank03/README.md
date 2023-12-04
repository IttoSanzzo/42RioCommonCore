# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    README.md                                          :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/12/04 19:55:11 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/12/04 19:56:43 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

rm -rf $HOME/.brew && git clone --depth=1 https://github.com/Homebrew/brew $HOME/.brew && echo 'export PATH=$HOME/.brew/bin:$PATH' >> $HOME/.zshrc && source $HOME/.zshrc && brew update

brew install readline

cc main.c -I ../.brew/opt/readline/include/readline/ ../.brew/opt/readline/lib/libreadline.so ../.brew/opt/readline/lib/libhistory.so

