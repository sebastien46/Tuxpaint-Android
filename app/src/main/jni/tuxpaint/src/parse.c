/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: /usr/bin/gperf src/parse.gperf  */
/* Computed positions: -k'1,4,14,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 7 "src/parse.gperf"


#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdint.h>
#include "../src/parse.h"
#include "../src/debug.h"

const char PARSE_YES[] = "yes";
const char PARSE_NO[]  = "no";
const char PARSE_CLOBBER[]  = ":-(";  // for painful lang/locale priority situation

struct cfg
{
  const char *name;
  void (*val)(void);
};

#define MULTIVAL   0x00000000
#define POS        0x00000001
#define NEG        0x00000002
#define BOOLMASK   (POS|NEG)
#define BITS       2 // if this grows past 2, must shift the offset
#define FLAGMASK   ((1<<BITS)-1)

#define MULTI(x)   (void*)(offsetof(struct cfginfo,x)|MULTIVAL)
#define POSBOOL(x) (void*)(offsetof(struct cfginfo,x)|POS)
#define NEGBOOL(x) (void*)(offsetof(struct cfginfo,x)|NEG)
#define IMM(x)     imm_##x

/* Prototypes of what's in tuxpaint.c: */
void show_version(int details);
void show_usage(int exitcode);
void show_fonts(void);

static void imm_version(void)
{
  show_version(0);
}

static void imm_verbose_version(void)
{
  show_version(1);
}

static void imm_usage(void)
{
  show_usage(0);
}

static void imm_help(void)
{
  show_version(0);
  show_usage(0);
}

static void imm_fonts(void)
{
  show_fonts();
}

static void imm_copying(void)
{
  show_version(0);
  printf("\n"
         "This program is free software; you can redistribute it\n"
         "and/or modify it under the terms of the GNU General Public\n"
         "License as published by the Free Software Foundation;\n"
         "either version 2 of the License, or (at your option) any\n"
         "later version.\n"
         "\n"
         "This program is distributed in the hope that it will be\n"
         "useful and entertaining, but WITHOUT ANY WARRANTY; without\n"
         "even the implied warranty of MERCHANTABILITY or FITNESS\n"
         "FOR A PARTICULAR PURPOSE.  See the GNU General Public\n"
         "License for more details.\n"
         "\n"
         "You should have received a copy of the GNU General Public\n"
         "License along with this program; if not, write to the Free\n"
         "Software Foundation, Inc., 59 Temple Place, Suite 330,\n"
         "Boston, MA  02111-1307  USA\n" "\n");
}

// We get this from gperf:
//__inline static             unsigned int hash (register const char *str, register unsigned int len)
//__inline __attribute__((__gnu_inline__)) const struct cfg *in_word_set (register const char *str, register unsigned int len);
//
// We use sed (see Makefile) to make those functions static.

#line 101 "src/parse.gperf"
struct cfg;

#define TOTAL_KEYWORDS 107
#define MIN_WORD_LENGTH 4
#define MAX_WORD_LENGTH 32
#define MIN_HASH_VALUE 12
#define MAX_HASH_VALUE 258
/* maximum key range = 247, duplicates = 0 */

#ifdef __TUXC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      259, 259, 259, 259, 259, 259, 259, 259, 259, 259,
      259, 259, 259, 259, 259, 259, 259, 259, 259, 259,
      259, 259, 259, 259, 259, 259, 259, 259, 259, 259,
      259, 259, 259, 259, 259, 259, 259, 259, 259, 259,
      259, 259, 259, 259, 259, 259, 259, 259, 259, 259,
      259, 259, 259, 259, 259, 259, 259, 259, 259, 259,
      259, 259, 259, 259, 259, 259, 259, 259, 259, 259,
      259, 259, 259, 259, 259, 259, 259, 259, 259, 259,
      259, 259, 259, 259, 259, 259, 259, 259, 259, 259,
      259, 259, 259, 259, 259, 259, 259,  70,  55,  35,
       30,   5,  15,  20,  20,  70,   0,  75, 120,  60,
       50,  50,  40,   0,  30,   0,  10,  90,   0,  15,
      259,  50, 259, 259, 259, 259, 259, 259
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
      case 12:
      case 11:
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct cfg *
in_word_set (register const char *str, register size_t len)
{
  static const struct cfg wordlist[] =
    {
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 187 "src/parse.gperf"
      {"joystick-dev",        MULTI(joystick_dev)},
      {"",0},
#line 153 "src/parse.gperf"
      {"save",                NEGBOOL(disable_save)},
#line 154 "src/parse.gperf"
      {"erase",               NEGBOOL(disable_erase)},
      {"",0}, {"",0}, {"",0},
#line 197 "src/parse.gperf"
      {"joystick-btn-shapes",   MULTI(joystick_button_selectshapestool)},
      {"",0},
#line 191 "src/parse.gperf"
      {"joystick-hat-slowness", MULTI(joystick_hat_slowness)},
#line 207 "src/parse.gperf"
      {"joystick-btn-save",     MULTI(joystick_button_save)},
#line 172 "src/parse.gperf"
      {"sysfonts",            NEGBOOL(no_system_fonts)},
#line 152 "src/parse.gperf"
      {"quit",                NEGBOOL(disable_quit)},
      {"",0}, {"",0},
#line 190 "src/parse.gperf"
      {"joystick-maxsteps",   MULTI(joystick_maxsteps)},
      {"",0},
#line 193 "src/parse.gperf"
      {"joystick-btn-escape",   MULTI(joystick_button_escape)},
      {"",0},
#line 158 "src/parse.gperf"
      {"saveovernew",         POSBOOL(_promptless_save_over_new)},
      {"",0}, {"",0}, {"",0},
#line 178 "src/parse.gperf"
      {"wheelmouse",          POSBOOL(wheely)},
      {"",0},
#line 198 "src/parse.gperf"
      {"joystick-btn-text",     MULTI(joystick_button_selecttexttool)},
      {"",0},
#line 159 "src/parse.gperf"
      {"shortcuts",           NEGBOOL(noshortcuts)},
#line 192 "src/parse.gperf"
      {"joystick-hat-timeout",  MULTI(joystick_hat_timeout)},
      {"",0},
#line 155 "src/parse.gperf"
      {"savedir",             MULTI(savedir)},
#line 156 "src/parse.gperf"
      {"saveover",            POSBOOL(_promptless_save_over)},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 189 "src/parse.gperf"
      {"joystick-threshold",  MULTI(joystick_lowthreshold)},
#line 170 "src/parse.gperf"
      {"startlast",           NEGBOOL(start_blank)},
      {"",0}, {"",0},
#line 161 "src/parse.gperf"
      {"simpleshapes",        POSBOOL(simple_shapes)},
#line 137 "src/parse.gperf"
      {"shapecontrols",       NEGBOOL(disable_shape_controls)},
#line 204 "src/parse.gperf"
      {"joystick-btn-eraser",   MULTI(joystick_button_selecterasertool)},
#line 160 "src/parse.gperf"
      {"showcursor",          NEGBOOL(hide_cursor)},
#line 151 "src/parse.gperf"
      {"reversesort",         POSBOOL(reversesort)},
#line 177 "src/parse.gperf"
      {"version",             IMM(version)},
#line 195 "src/parse.gperf"
      {"joystick-btn-stamp",    MULTI(joystick_button_selectstamptool)},
#line 146 "src/parse.gperf"
      {"papersize",           MULTI(papersize)},
#line 180 "src/parse.gperf"
      {"windowsize",          MULTI(parsertmp_windowsize)},
      {"",0},
#line 123 "src/parse.gperf"
      {"fancycursors",        NEGBOOL(no_fancy_cursors)},
      {"",0},
#line 171 "src/parse.gperf"
      {"sysconfig",           POSBOOL(parsertmp_sysconfig)},
#line 128 "src/parse.gperf"
      {"hidecursor",          POSBOOL(hide_cursor)},
#line 165 "src/parse.gperf"
      {"stamps",              NEGBOOL(dont_load_stamps)},
#line 188 "src/parse.gperf"
      {"joystick-slowness",   MULTI(joystick_slowness)},
#line 209 "src/parse.gperf"
      {"joystick-btn-print",    MULTI(joystick_button_print)},
      {"",0},
#line 140 "src/parse.gperf"
      {"mouse",               NEGBOOL(keymouse)},
#line 144 "src/parse.gperf"
      {"orient",              MULTI(rotate_orientation)},
      {"",0},
#line 164 "src/parse.gperf"
      {"stampcontrols",       NEGBOOL(disable_stamp_controls)},
#line 166 "src/parse.gperf"
      {"stampsize",           MULTI(stamp_size_override)},
      {"",0}, {"",0}, {"",0},
#line 210 "src/parse.gperf"
      {"joystick-buttons-ignore",    MULTI(joystick_buttons_ignore)},
#line 139 "src/parse.gperf"
      {"mixedcase",           NEGBOOL(only_uppercase)},
#line 181 "src/parse.gperf"
      {"buttonsize",          MULTI(button_size)},
#line 205 "src/parse.gperf"
      {"joystick-btn-new",      MULTI(joystick_button_new)},
      {"",0},
#line 179 "src/parse.gperf"
      {"windowed",            NEGBOOL(fullscreen)},
#line 168 "src/parse.gperf"
      {"templateexport",      NEGBOOL(disable_template_export)},
#line 162 "src/parse.gperf"
      {"sound",               POSBOOL(use_sound)},
#line 163 "src/parse.gperf"
      {"stereo",              POSBOOL(use_stereo)},
#line 131 "src/parse.gperf"
      {"brushspacing",        NEGBOOL(disable_brushspacing)},
#line 115 "src/parse.gperf"
      {"complexshapes",       NEGBOOL(simple_shapes)},
      {"",0}, {"",0},
#line 157 "src/parse.gperf"
      {"saveoverask",         POSBOOL(_promptless_save_over_ask)},
      {"",0},
#line 194 "src/parse.gperf"
      {"joystick-btn-brush",    MULTI(joystick_button_selectbrushtool)},
#line 122 "src/parse.gperf"
      {"exportdir",           MULTI(exportdir)},
#line 182 "src/parse.gperf"
      {"colorsrows",          MULTI(colors_rows)},
      {"",0},
#line 203 "src/parse.gperf"
      {"joystick-btn-redo",     MULTI(joystick_button_redo)},
      {"",0},
#line 113 "src/parse.gperf"
      {"colorfile",           MULTI(colorfile)},
#line 208 "src/parse.gperf"
      {"joystick-btn-pgsetup",  MULTI(joystick_button_pagesetup)},
      {"",0},
#line 138 "src/parse.gperf"
      {"mirrorstamps",        POSBOOL(mirrorstamps)},
#line 120 "src/parse.gperf"
      {"dontgrab",            NEGBOOL(grab_input)},
#line 126 "src/parse.gperf"
      {"help",                IMM(help)},
#line 147 "src/parse.gperf"
      {"print",               NEGBOOL(disable_print)},
      {"",0},
#line 117 "src/parse.gperf"
      {"currentlocalefont",   NEGBOOL(all_locale_fonts)},
#line 143 "src/parse.gperf"
      {"newcolorslast",       POSBOOL(new_colors_last)},
#line 174 "src/parse.gperf"
      {"uppercase",           POSBOOL(only_uppercase)},
      {"",0}, {"",0},
#line 116 "src/parse.gperf"
      {"copying",             IMM(copying)},
#line 201 "src/parse.gperf"
      {"joystick-btn-magic",    MULTI(joystick_button_selectmagictool)},
      {"",0},
#line 169 "src/parse.gperf"
      {"startblank",          POSBOOL(start_blank)},
#line 121 "src/parse.gperf"
      {"dontmirrorstamps",    NEGBOOL(mirrorstamps)},
#line 206 "src/parse.gperf"
      {"joystick-btn-open",     MULTI(joystick_button_open)},
#line 148 "src/parse.gperf"
      {"printcfg",            POSBOOL(use_print_config)},
#line 142 "src/parse.gperf"
      {"newcolorsfirst",      NEGBOOL(new_colors_last)},
#line 175 "src/parse.gperf"
      {"usage",               IMM(usage)},
      {"",0}, {"",0},
#line 167 "src/parse.gperf"
      {"stamprotation",       NEGBOOL(no_stamp_rotation)},
#line 107 "src/parse.gperf"
      {"altprintalways",      MULTI(alt_print_command_default)},
      {"",0}, {"",0}, {"",0},
#line 106 "src/parse.gperf"
      {"altprint",            MULTI(alt_print_command_default)},
      {"",0}, {"",0},
#line 141 "src/parse.gperf"
      {"native",              POSBOOL(native_screensize)},
#line 149 "src/parse.gperf"
      {"printcommand",        MULTI(printcommand)},
#line 111 "src/parse.gperf"
      {"autosave",            POSBOOL(autosave_on_quit)},
#line 125 "src/parse.gperf"
      {"grab",                POSBOOL(grab_input)},
#line 114 "src/parse.gperf"
      {"complexity",          MULTI(complexity)},
      {"",0},
#line 118 "src/parse.gperf"
      {"datadir",             MULTI(datadir)},
#line 196 "src/parse.gperf"
      {"joystick-btn-lines",    MULTI(joystick_button_selectlinestool)},
#line 127 "src/parse.gperf"
      {"listfonts",           IMM(fonts)},
#line 136 "src/parse.gperf"
      {"magicsizes",          NEGBOOL(disable_magic_sizes)},
      {"",0},
#line 112 "src/parse.gperf"
      {"buttondistinction",   NEGBOOL(no_button_distinction)},
#line 135 "src/parse.gperf"
      {"magiccontrols",       NEGBOOL(disable_magic_controls)},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 119 "src/parse.gperf"
      {"disablescreensaver",  POSBOOL(disable_screensaver)},
      {"",0},
#line 150 "src/parse.gperf"
      {"printdelay",          MULTI(print_delay)},
#line 109 "src/parse.gperf"
      {"altprintmod",         MULTI(alt_print_command_default)},
#line 200 "src/parse.gperf"
      {"joystick-btn-fill",     MULTI(joystick_button_selectfilltool)},
#line 110 "src/parse.gperf"
      {"altprintnever",       MULTI(alt_print_command_default)},
      {"",0}, {"",0},
#line 173 "src/parse.gperf"
      {"uifont",              MULTI(tp_ui_font)},
#line 202 "src/parse.gperf"
      {"joystick-btn-undo",     MULTI(joystick_button_undo)},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 132 "src/parse.gperf"
      {"lang",                MULTI(parsertmp_lang)},
      {"",0},
#line 105 "src/parse.gperf"
      {"allowscreensaver",    NEGBOOL(disable_screensaver)},
      {"",0},
#line 129 "src/parse.gperf"
      {"keyboard",            POSBOOL(keymouse)},
#line 185 "src/parse.gperf"
      {"onscreen-keyboard-layout",         MULTI(onscreen_keyboard_layout)},
#line 176 "src/parse.gperf"
      {"verbose-version",     IMM(verbose_version)},
      {"",0},
#line 186 "src/parse.gperf"
      {"onscreen-keyboard-disable-change", POSBOOL(onscreen_keyboard_disable_change)},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 145 "src/parse.gperf"
      {"outlines",            NEGBOOL(dont_do_xor)},
      {"",0}, {"",0}, {"",0},
#line 184 "src/parse.gperf"
      {"onscreen-keyboard",   POSBOOL(onscreen_keyboard)},
      {"",0},
#line 183 "src/parse.gperf"
      {"mouse-accessibility", POSBOOL(mouseaccessibility)},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0},
#line 124 "src/parse.gperf"
      {"fullscreen",          MULTI(parsertmp_fullscreen_native)},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 133 "src/parse.gperf"
      {"locale",              MULTI(parsertmp_locale)},
      {"",0}, {"",0},
#line 104 "src/parse.gperf"
      {"alllocalefonts",      POSBOOL(all_locale_fonts)},
#line 108 "src/parse.gperf"
      {"altprintcommand",     MULTI(altprintcommand)},
      {"",0}, {"",0},
#line 134 "src/parse.gperf"
      {"lockfile",            POSBOOL(ok_to_use_lockfile)},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 130 "src/parse.gperf"
      {"label",               NEGBOOL(disable_label)},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 199 "src/parse.gperf"
      {"joystick-btn-label",    MULTI(joystick_button_selectlabeltool)}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 211 "src/parse.gperf"


void parse_one_option(struct cfginfo *restrict tmpcfg, const char *str, const char *opt, const char *restrict src)
{
  int noflag;
  uintptr_t uintptr;
  unsigned flags;
  unsigned offset;
  char *dupecheck;
  const struct cfg *cfg;
  
#ifdef DEBUG
  printf("parsing %s: <%s> <%s>\n", src, str, opt);
#endif

  if(isdigit(*str))
  {
    if(opt && !strcmp(opt,"no"))
        str = "640x480";
    opt = str;
    str = "windowsize";
  }

  if (!strcmp(str, "saveover"))
  {
    if (!strcmp(opt, "new")) {
      str = "saveovernew";
      opt = "yes";
    } else if (!strcmp(opt, "ask")) {
      str = "saveoverask";
      opt = "yes";
    } else if (strcmp(opt, "yes")) {
      if(src)
        fprintf(stderr, "Option '%s' in config file '%s' is yes/ask/new only, but got '%s'\n",str,src,opt);
      else
        fprintf(stderr, "Command line option '--%s' is yes/ask/new only, but got '%s'\n",str,opt);
      exit(51);
    }
  }

  noflag = 2*(str[0]=='n' && str[1]=='o' && str[2]);
  cfg = in_word_set(str+noflag, strlen(str+noflag));

  uintptr = cfg ? (uintptr_t)cfg->val : 0;
  flags = (uintptr<CFGINFO_MAXOFFSET) ? (uintptr & FLAGMASK) : 0;

  if(!cfg || (!(flags & BOOLMASK) && noflag) )
  {
    if(src)
      fprintf(stderr, "Unknown option '%s' in config file '%s'\n",str,src);
    else
      fprintf(stderr, "Unknown command line option '--%s'\n",str);
    exit(47);
  }

  if(unlikely(uintptr >= CFGINFO_MAXOFFSET))
  {
    if(src)
    {
      // immediate options are only for the command line
      fprintf(stderr, "Unknown option '%s' in config file '%s'\n",str,src);
      exit(49);
    }
    if(opt)
    {
      fprintf(stderr, "Command line option '--%s' doesn't take a value.\n",str);
      exit(50);
    }
    cfg->val();
    exit(0);
  }

  if(flags & BOOLMASK)
  {
    int flip = !!noflag ^ !!(flags & NEG);
    if(!opt)
      opt = flip ? PARSE_NO : PARSE_YES;
    else if(!strcmp("yes",opt))
      opt = flip ? PARSE_NO : PARSE_YES;
    else if(!strcmp("no",opt))
      opt = flip ? PARSE_YES : PARSE_NO;
    else
    {
      if(src)
        fprintf(stderr, "Option '%s' in config file '%s' is yes/no only, but got '%s'\n",str,src,opt);
      else
        fprintf(stderr, "Command line option '--%s' is yes/no only, but got '%s'\n",str,opt);
      exit(51);
    }
  }
  else if(!opt || !*opt)
  {
      if(src)
        fprintf(stderr, "Option '%s' in config file '%s' needs a value\n",str,src);
      else
        fprintf(stderr, "Command line option '--%s' needs a value\n",str);
      exit(52);
  }

  offset = uintptr &~ FLAGMASK;

  memcpy(&dupecheck, offset+(char*)tmpcfg, sizeof(char*));
  if(dupecheck)
  {
    if(src)
      fprintf(stderr, "Option '%s' in config file '%s' sets '%s' again.\n",str,src,cfg->name);
    else
      fprintf(stderr, "Command line option '--%s' sets '%s' again.\n",str,cfg->name);
    exit(53);
  }

  memcpy((char**) (offset + (char*) tmpcfg), &opt, sizeof(char*));
}
