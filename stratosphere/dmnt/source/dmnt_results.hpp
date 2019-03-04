/*
 * Copyright (c) 2018 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once
#include <switch.h>
#include <stratosphere.hpp>

static constexpr u32 Module_Dmnt = 13;

static constexpr Result ResultDmntUnknown           = MAKERESULT(Module_Dmnt, 1);
static constexpr Result ResultDmntDebuggingDisabled = MAKERESULT(Module_Dmnt, 2);

static constexpr Result ResultDmntCheatNotAttached  = MAKERESULT(Module_Dmnt, 6500);
static constexpr Result ResultDmntCheatNullBuffer   = MAKERESULT(Module_Dmnt, 6501);