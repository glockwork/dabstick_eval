/* 
 * dabstick_eval - experimental board for si4688 fm/dab+ receiver with
 * stm32f4 and audio codec
 * Copyright (C) 2014  Bjoern Biesenbach <bjoern@bjoern-b.de>
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "dogm-graphic.h"
#include "font.h"
#include "page_misc.h"

void draw_page_header(struct menuitem *self){
	lcd_moveto_xy(0,0);
	lcd_clear_area(2,102, NORMAL);
	lcd_set_font(FONT_PROP_16,NORMAL);
	lcd_moveto_xy(1,0);
	lcd_putstr("___________");
	lcd_moveto_xy(0,0);
	lcd_putstr(self->name);
	lcd_moveto_xy(0,60);
	//lcd_put_uint(self->num);
}
