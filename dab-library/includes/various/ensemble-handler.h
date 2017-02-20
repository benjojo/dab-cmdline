#
/*
 *    Copyright (C) 20014 .. 2017
 *    Jan van Katwijk (J.vanKatwijk@gmail.com)
 *    Lazy Chair Programming
 *
 *    This file is part of the DAB-cmdline program
 *    Many of the ideas as implemented in DAB-cmdline are derived from
 *    other work, made available through the GNU general Public License. 
 *    All copyrights of the original authors are recognized.
 *
 *    DAB-cmdline is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    DAB-cmdline is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with DAB-cmdline-J; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef	_ENSEMBLE_HANDLER
#define	_ENSEMBLE_HANDLER

#include	<stdio.h>
#include	<stdint.h>
#include	<mutex>
#include	<string>
#include	<list>

class	ensembleHandler {
public:
		ensembleHandler		(void);
		~ensembleHandler	(void);
	void	addtoEnsemble		(const std::string &);
	void	nameforEnsemble		(int id, const std::string &s);
	std::string nameofEnsemble	(void);
	bool	ensembleExists		(void);
	std::string findService		(const std::string &);
	std::string getProgram		(int16_t);
	void	clearEnsemble		(void);
	std::list<std::string> data	(void);
	int	size			(void);
private:
	std::list<std::string> stationList;
	std::string ensembleName;
	bool	ensembleFound	= false;
	std::mutex	locker;
};
#endif