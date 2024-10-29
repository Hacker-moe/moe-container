// SPDX-License-Identifier: MIT
/*
 *
 * This file is part of ruri, with ABSOLUTELY NO WARRANTY.
 *
 * MIT License
 *
 * Copyright (c) 2024 Moe-hacker
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 *
 */
#include "include/nekofeng.h"
/*
 * This file defines the actions of the animation.
 * All the functions have the same arguments.
 */
void face(useconds_t inr, unsigned int keep)
{
	struct ACTION *action = NULL;
	action = add_action(action, -17, -9,
			    "\033[0m              ██                        ██\n"
			    "\033[0m            ██  ██                    ██  ██\n"
			    "\033[0m            ██    ████              ██      ██\n"
			    "\033[0m          ██          ██          ████      ██\n"
			    "\033[0m          ██      ██████████████████          ██\n"
			    "\033[0m        ██      ██                  ██        ██\n"
			    "\033[0m        ██    ██                      ████    ██\n"
			    "\033[0m      ████████        ██      ██          ████  ██\n"
			    "\033[0m      ██    ██        ██    ██  ██    ██    ██  ██\n"
			    "\033[0m    ████      ██    ██  ████  ██    ██  ██    ██████\n"
			    "\033[0m    ██        ██  ██    ██      ████  ██  ██  ████████\n"
			    "\033[0m    ██      ██  ██                          ████\n"
			    "\033[0m    ██        ██                              ██\n"
			    "\033[0m  ████        ██                              ██\n"
			    "\033[0m  ██          ██                              ██\n"
			    "\033[0m  ██          ██                               ██\n"
			    "\033[0m  ██          ██                                ██\n"
			    "\033[0m  ████    ██  ██                                ██\n"
			    "\033[0m    ████  ██████                              ██\n"
			    "\033[0m      ██████  ████                        ████\n"
			    "\033[0m                ████                    ████\n"
			    "\033[0m                    ████████████████████\n");
	play_action(action, inr, keep);
	free_action(action);
}
void mouth(useconds_t inr, unsigned int keep)
{
	struct ACTION *action = NULL;
	action = add_action(action, 9, 8,
			    "\n"
			    "\n"
			    "  ███\n");
	action = add_action(action, 9, 8,
			    "\n"
			    "\n"
			    "  ████\n");
	action = add_action(action, 9, 8,
			    "\n"
			    "\n"
			    " ██████\n");
	action = add_action(action, 9, 8,
			    "\n"
			    "██    ██\n"
			    "  ████\n");
	play_action(action, inr, keep);
	free_action(action);
}
void ahoge(useconds_t inr, unsigned int keep)
{
	struct ACTION *action = NULL;
	action = add_action(action, 10, -8,
			    "██\n"
			    "  ██\n"
			    "██\n");
	action = add_action(action, 10, -8,
			    " ██\n"
			    "  ██\n"
			    "██\n");
	action = add_action(action, 10, -8,
			    "   ██\n"
			    "  ██\n"
			    "██\n");
	action = add_action(action, 10, -8,
			    "    ██\n"
			    "  ██\n"
			    "██\n");
	action = add_action(action, 10, -8,
			    "  ██\n"
			    " ██\n"
			    "██\n");
	action = add_action(action, 10, -8,
			    "██\n"
			    " ██\n"
			    "██\n");
	play_action(action, inr, keep);
	playback_action(action, inr, keep);
	free_action(action);
}
void blink_lefteye(useconds_t inr, unsigned int keep)
{
	struct ACTION *action = NULL;
	action = add_action(action, 1, 3,
			    "  ██████ \n"
			    "██      ██\n"
			    "  ██████\n"
			    "  ██  ██\n"
			    "  ██████\n");
	action = add_action(action, 1, 3,
			    "\n"
			    "  ██████ \n"
			    "██      ██\n"
			    "  ██  ██\n"
			    "  ██████\n");
	action = add_action(action, 1, 3,
			    "\n\n"
			    "  ██████ \n"
			    "██      ██\n"
			    "  ██████\n");
	action = add_action(action, 1, 3,
			    "\n\n\n"
			    "  ██████ \n"
			    "██████████\n");
	action = add_action(action, 1, 3,
			    "\n\n"
			    "   ████\n"
			    "       ██\n"
			    "  █████\n");
	action = add_action(action, 1, 3,
			    "\n"
			    "  ████\n"
			    "      ██\n"
			    "        ██\n"
			    "  ██████\n");
	play_action(action, inr, keep);
	playback_action(action, inr, keep);
	free_action(action);
}
void blink_righteye(useconds_t inr, unsigned int keep)
{
	struct ACTION *action = NULL;
	action = add_action(action, 16, 3,
			    "  ██████ \n"
			    "██      ██\n"
			    "  \033[31m██  ██\n"
			    "    ██  \n"
			    "  ██  ██\n");
	action = add_action(action, 16, 3,
			    "\n"
			    "  ██████ \n"
			    "██\033[31m██  ██\033[0m██\n"
			    "    \033[31m██\n"
			    "  ██  ██\n");
	action = add_action(action, 16, 3,
			    "\n\n"
			    "  ██████ \n"
			    "██  \033[31m██\033[0m  ██\n"
			    "  \033[31m██  ██\n");
	action = add_action(action, 16, 3,
			    "\n\n\n"
			    "  ██████  \n"
			    "██\033[31m██  ██\033[0m██ \n");
	action = add_action(action, 16, 3,
			    "\n\n"
			    "  ████\n"
			    "██\n"
			    "  █████\n");
	action = add_action(action, 16, 3,
			    "\n"
			    "    ████\n"
			    "  ██\n"
			    "██\n"
			    "  ██████\n");
	play_action(action, inr, keep);
	playback_action(action, inr, keep);
	free_action(action);
}
void close_and_open_righteye(useconds_t inr, unsigned int keep)
{
	struct ACTION *action = NULL;
	action = add_action(action, 16, 3,
			    "  ██████ \n"
			    "██      ██\n"
			    "  \033[31m██  ██\n"
			    "    ██  \n"
			    "  ██  ██\n");
	action = add_action(action, 16, 3,
			    "\n"
			    "  ██████ \n"
			    "██\033[31m██  ██\033[0m██\n"
			    "    \033[31m██\n"
			    "  ██  ██\n");
	action = add_action(action, 16, 3,
			    "\n\n"
			    "  ██████ \n"
			    "██  \033[31m██\033[0m  ██\n"
			    "  \033[31m██  ██\n");
	action = add_action(action, 16, 3,
			    "\n\n\n"
			    "  ██████  \n"
			    "██\033[31m██  ██\033[0m██ \n");
	action = add_action(action, 16, 3,
			    "\n\n\n"
			    "\n"
			    "  ██████  \n");
	play_action(action, inr, keep);
	playback_action(action, inr, keep);
	free_action(action);
}