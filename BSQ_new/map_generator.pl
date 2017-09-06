# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map_generator.pl                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smatias- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 13:21:24 by smatias-          #+#    #+#              #
#    Updated: 2017/09/02 23:43:45 by vtanases         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ab\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "a";
			}
		else {
			print ".";
			}
		}
	print "\n";
}
