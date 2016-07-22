/* giza - a scientific plotting library built on cairo
 *
 * Copyright (c) 2010      James Wetter and Daniel Price
 * Copyright (c) 2010-2012 Daniel Price
 *
 * This library is free software; and you are welcome to redistribute
 * it under the terms of the GNU General Public License
 * (GPL, see LICENSE file for details) and the provision that
 * this notice remains intact. If you modify this file, please
 * note section 2a) of the GPLv2 states that:
 *
 *  a) You must cause the modified files to carry prominent notices
 *     stating that you changed the files and the date of any change.
 *
 * This software is distributed "AS IS", with ABSOLUTELY NO WARRANTY.
 * See the GPL for specific language governing rights and limitations.
 *
 * The Original code is the giza plotting library.
 *
 * Contributor(s):
 *      James Wetter <wetter.j@gmail.com>
 *      Daniel Price <daniel.price@monash.edu> (main contact)
 */

#include <giza.h>
#include <stdio.h>

int
main ()
{
  giza_open_device ("?", "arrows");
  giza_start_warnings ();
 
  giza_box ("BCNT", 0., 0, "BCNT", 0., 0);
  double xanc = 0., yanc = 0., x, y;
  char ch;

  giza_get_key_press (&xanc, &yanc, &ch);
  printf ("x = %f, y = %f, ch =%c\n", xanc, yanc, ch);
  giza_band (3, 0, xanc, yanc, &x, &y, &ch);
 
  printf ("x = %f, y = %f, ch =%c\n", x, y, ch);

  giza_close_device ();
}
