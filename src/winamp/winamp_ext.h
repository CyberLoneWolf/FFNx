/****************************************************************************/
//    Copyright (C) 2009 Aali132                                            //
//    Copyright (C) 2018 quantumpencil                                      //
//    Copyright (C) 2018 Maxime Bacoux                                      //
//    Copyright (C) 2020 Julian Xhokaxhiu                                   //
//    Copyright (C) 2020 myst6re                                            //
//    Copyright (C) 2020 Chris Rizzitello                                   //
//                                                                          //
//    This file is part of FFNx                                             //
//                                                                          //
//    FFNx is free software: you can redistribute it and/or modify          //
//    it under the terms of the GNU General Public License as published by  //
//    the Free Software Foundation, either version 3 of the License         //
//                                                                          //
//    FFNx is distributed in the hope that it will be useful,               //
//    but WITHOUT ANY WARRANTY; without even the implied warranty of        //
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         //
//    GNU General Public License for more details.                          //
/****************************************************************************/

#pragma once

#define IN_CONTEXT_VER 0x1
#define OUT_CONTEXT_VER 0x1

struct WinampOutContext {
	int version;
	void (*Duplicate)();
	int (*Resume)(int samplerate, int numchannels, int bitspersamp, int bufferlenms, int prebufferms);
	int (*CancelDuplicate)();
};

struct WinampInContext {
	int version;
	void (*Duplicate)();
	int (*Resume)(const char* fn);
	int (*CancelDuplicate)();
	WinampOutContext* outContext;
};
