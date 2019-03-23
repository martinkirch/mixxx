/*************************************************************************
** This code was generated with layoutstool                             **
**                                                                      **
** WARNING: Changes to this file may be overridden by the tool!         **
**                                                                      **
**          If you want to add or delete layouts, please use the tool.  **
**          Layoutstool can be found in mixxx/scripts/layouts_tool and  **
**          build with build.sh. The executable will be placed in       **
**          mixxx/scripts/layouts_tool/bin                              **
**                                                                      **
** NOTE:    Layoutstool does only work on Linux (make sure you have GCC **
**          and CMake installed in order to successfully build and run  **
**          the tool.                                                   **
*************************************************************************/

/* @SKIP */
#include "layouts.h"

#ifdef __WINDOWS__
#include <yvals.h>
#endif

/* @/SKIP */

namespace layouts {
    // English (US)
    static const KbdKeyChar en_US[48][2] = {
            // Digits row
            /* <TLDE> */ {{'`'}, {'~'}},
            /* <AE01> */ {{'1'}, {'!'}},
            /* <AE02> */ {{'2'}, {'@'}},
            /* <AE03> */ {{'3'}, {'#'}},
            /* <AE04> */ {{'4'}, {'$'}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'^'}},
            /* <AE07> */ {{'7'}, {'&'}},
            /* <AE08> */ {{'8'}, {'*'}},
            /* <AE09> */ {{'9'}, {'('}},
            /* <AE10> */ {{'0'}, {')'}},
            /* <AE11> */ {{'-'}, {'_'}},
            /* <AE12> */ {{'='}, {'+'}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'y'}, {'Y'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{'['}, {'{'}},
            /* <AD12> */ {{']'}, {'}'}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{';'}, {':'}},
            /* <AC11> */ {{'\''}, {'\"'}},
            /* <BKSL> */ {{'\\'}, {'|'}},
    
            // Lower row
            /* <LSGT> */ {{'<'}, {'>'}},
            /* <AB01> */ {{'z'}, {'Z'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {'<'}},
            /* <AB09> */ {{'.'}, {'>'}},
            /* <AB10> */ {{'/'}, {'?'}}
    };

    // English (UK)
    static const KbdKeyChar en_GB[48][2] = {
            // Digits row
            /* <TLDE> */ {{'`'}, {0xac}},
            /* <AE01> */ {{'1'}, {'!'}},
            /* <AE02> */ {{'2'}, {'\"'}},
            /* <AE03> */ {{'3'}, {0xa3}},
            /* <AE04> */ {{'4'}, {'$'}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'^'}},
            /* <AE07> */ {{'7'}, {'&'}},
            /* <AE08> */ {{'8'}, {'*'}},
            /* <AE09> */ {{'9'}, {'('}},
            /* <AE10> */ {{'0'}, {')'}},
            /* <AE11> */ {{'-'}, {'_'}},
            /* <AE12> */ {{'='}, {'+'}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'y'}, {'Y'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{'['}, {'{'}},
            /* <AD12> */ {{']'}, {'}'}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{';'}, {':'}},
            /* <AC11> */ {{'\''}, {'@'}},
            /* <BKSL> */ {{'#'}, {'~'}},
    
            // Lower row
            /* <LSGT> */ {{'\\'}, {'|'}},
            /* <AB01> */ {{'z'}, {'Z'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {'<'}},
            /* <AB09> */ {{'.'}, {'>'}},
            /* <AB10> */ {{'/'}, {'?'}}
    };

    // Spanish (Spain)
    static const KbdKeyChar es_ES[48][2] = {
            // Digits row
            /* <TLDE> */ {{0xba}, {0xaa}},
            /* <AE01> */ {{'1'}, {'!'}},
            /* <AE02> */ {{'2'}, {'\"'}},
            /* <AE03> */ {{'3'}, {0xb7}},
            /* <AE04> */ {{'4'}, {'$'}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'&'}},
            /* <AE07> */ {{'7'}, {'/'}},
            /* <AE08> */ {{'8'}, {'('}},
            /* <AE09> */ {{'9'}, {')'}},
            /* <AE10> */ {{'0'}, {'='}},
            /* <AE11> */ {{'\''}, {'?'}},
            /* <AE12> */ {{0xa1}, {0xbf}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'y'}, {'Y'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{0x300, true}, {0x302, true}},
            /* <AD12> */ {{'+'}, {'*'}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{0xf1}, {0xd1}},
            /* <AC11> */ {{0x301, true}, {0x308, true}},
            /* <BKSL> */ {{0xe7}, {0xc7}},
    
            // Lower row
            /* <LSGT> */ {{'<'}, {'>'}},
            /* <AB01> */ {{'z'}, {'Z'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {';'}},
            /* <AB09> */ {{'.'}, {':'}},
            /* <AB10> */ {{'-'}, {'_'}}
    };

    // Spanish (Latin America, (Mexico) )
    static const KbdKeyChar es_MX[48][2] = {
            // Digits row
            /* <TLDE> */ {{'|'}, {0xb0}},
            /* <AE01> */ {{'1'}, {'!'}},
            /* <AE02> */ {{'2'}, {'\"'}},
            /* <AE03> */ {{'3'}, {'#'}},
            /* <AE04> */ {{'4'}, {'$'}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'&'}},
            /* <AE07> */ {{'7'}, {'/'}},
            /* <AE08> */ {{'8'}, {'('}},
            /* <AE09> */ {{'9'}, {')'}},
            /* <AE10> */ {{'0'}, {'='}},
            /* <AE11> */ {{'\''}, {'?'}},
            /* <AE12> */ {{0xbf}, {0xa1}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'y'}, {'Y'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{0x301, true}, {0x308, true}},
            /* <AD12> */ {{'+'}, {'*'}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{0xf1}, {0xd1}},
            /* <AC11> */ {{'{'}, {'['}},
            /* <BKSL> */ {{'}'}, {']'}},
    
            // Lower row
            /* <LSGT> */ {{'<'}, {'>'}},
            /* <AB01> */ {{'z'}, {'Z'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {';'}},
            /* <AB09> */ {{'.'}, {':'}},
            /* <AB10> */ {{'-'}, {'_'}}
    };

    // French (France)
    static const KbdKeyChar fr_FR[48][2] = {
            // Digits row
            /* <TLDE> */ {{0xb2}, {'~'}},
            /* <AE01> */ {{'&'}, {'1'}},
            /* <AE02> */ {{0xe9}, {'2'}},
            /* <AE03> */ {{'\"'}, {'3'}},
            /* <AE04> */ {{'\''}, {'4'}},
            /* <AE05> */ {{'('}, {'5'}},
            /* <AE06> */ {{'-'}, {'6'}},
            /* <AE07> */ {{0xe8}, {'7'}},
            /* <AE08> */ {{'_'}, {'8'}},
            /* <AE09> */ {{0xe7}, {'9'}},
            /* <AE10> */ {{0xe0}, {'0'}},
            /* <AE11> */ {{')'}, {0xb0}},
            /* <AE12> */ {{'='}, {'+'}},
    
            // Upper row
            /* <AD01> */ {{'a'}, {'A'}},
            /* <AD02> */ {{'z'}, {'Z'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'y'}, {'Y'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{0x302, true}, {0x308, true}},
            /* <AD12> */ {{'$'}, {0xa3}},
    
            // Home row
            /* <AC01> */ {{'q'}, {'Q'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{'m'}, {'M'}},
            /* <AC11> */ {{0xf9}, {'%'}},
            /* <BKSL> */ {{'*'}, {0xb5}},
    
            // Lower row
            /* <LSGT> */ {{'<'}, {'>'}},
            /* <AB01> */ {{'w'}, {'W'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{','}, {'?'}},
            /* <AB08> */ {{';'}, {'.'}},
            /* <AB09> */ {{':'}, {'/'}},
            /* <AB10> */ {{'!'}, {0xa7}}
    };

    // French (Switzerland)
    static const KbdKeyChar fr_CH[48][2] = {
            // Digits row
            /* <TLDE> */ {{0xa7}, {0xb0}},
            /* <AE01> */ {{'1'}, {'+'}},
            /* <AE02> */ {{'2'}, {'\"'}},
            /* <AE03> */ {{'3'}, {'*'}},
            /* <AE04> */ {{'4'}, {0xe7}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'&'}},
            /* <AE07> */ {{'7'}, {'/'}},
            /* <AE08> */ {{'8'}, {'('}},
            /* <AE09> */ {{'9'}, {')'}},
            /* <AE10> */ {{'0'}, {'='}},
            /* <AE11> */ {{'\''}, {'?'}},
            /* <AE12> */ {{0x302, true}, {0x300, true}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'z'}, {'Z'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{0xe8}, {0xfc}},
            /* <AD12> */ {{0x308, true}, {'!'}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{0xe9}, {0xf6}},
            /* <AC11> */ {{0xe0}, {0xe4}},
            /* <BKSL> */ {{'$'}, {0xa3}},
    
            // Lower row
            /* <LSGT> */ {{'<'}, {'>'}},
            /* <AB01> */ {{'y'}, {'Y'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {';'}},
            /* <AB09> */ {{'.'}, {':'}},
            /* <AB10> */ {{'-'}, {'_'}}
    };

    // German (Germany)
    static const KbdKeyChar de_DE[48][2] = {
            // Digits row
            /* <TLDE> */ {{0x302, true}, {0xb0}},
            /* <AE01> */ {{'1'}, {'!'}},
            /* <AE02> */ {{'2'}, {'\"'}},
            /* <AE03> */ {{'3'}, {0xa7}},
            /* <AE04> */ {{'4'}, {'$'}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'&'}},
            /* <AE07> */ {{'7'}, {'/'}},
            /* <AE08> */ {{'8'}, {'('}},
            /* <AE09> */ {{'9'}, {')'}},
            /* <AE10> */ {{'0'}, {'='}},
            /* <AE11> */ {{0xdf}, {'?'}},
            /* <AE12> */ {{0x301, true}, {0x300, true}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'z'}, {'Z'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{0xfc}, {0xdc}},
            /* <AD12> */ {{'+'}, {'*'}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{0xf6}, {0xd6}},
            /* <AC11> */ {{0xe4}, {0xc4}},
            /* <BKSL> */ {{'#'}, {'\''}},
    
            // Lower row
            /* <LSGT> */ {{'<'}, {'>'}},
            /* <AB01> */ {{'y'}, {'Y'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {';'}},
            /* <AB09> */ {{'.'}, {':'}},
            /* <AB10> */ {{'-'}, {'_'}}
    };

    // German (Switzerland)
    static const KbdKeyChar de_CH[48][2] = {
            // Digits row
            /* <TLDE> */ {{0xa7}, {0xb0}},
            /* <AE01> */ {{'1'}, {'+'}},
            /* <AE02> */ {{'2'}, {'\"'}},
            /* <AE03> */ {{'3'}, {'*'}},
            /* <AE04> */ {{'4'}, {0xe7}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'&'}},
            /* <AE07> */ {{'7'}, {'/'}},
            /* <AE08> */ {{'8'}, {'('}},
            /* <AE09> */ {{'9'}, {')'}},
            /* <AE10> */ {{'0'}, {'='}},
            /* <AE11> */ {{'\''}, {'?'}},
            /* <AE12> */ {{0x302, true}, {0x300, true}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'z'}, {'Z'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{0xfc}, {0xe8}},
            /* <AD12> */ {{0x308, true}, {'!'}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{0xf6}, {0xe9}},
            /* <AC11> */ {{0xe4}, {0xe0}},
            /* <BKSL> */ {{'$'}, {0xa3}},
    
            // Lower row
            /* <LSGT> */ {{'<'}, {'>'}},
            /* <AB01> */ {{'y'}, {'Y'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {';'}},
            /* <AB09> */ {{'.'}, {':'}},
            /* <AB10> */ {{'-'}, {'_'}}
    };

    // Italian (Italy)
    static const KbdKeyChar it_IT[48][2] = {
            // Digits row
            /* <TLDE> */ {{'\\'}, {'|'}},
            /* <AE01> */ {{'1'}, {'!'}},
            /* <AE02> */ {{'2'}, {'\"'}},
            /* <AE03> */ {{'3'}, {0xa3}},
            /* <AE04> */ {{'4'}, {'$'}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'&'}},
            /* <AE07> */ {{'7'}, {'/'}},
            /* <AE08> */ {{'8'}, {'('}},
            /* <AE09> */ {{'9'}, {')'}},
            /* <AE10> */ {{'0'}, {'='}},
            /* <AE11> */ {{'\''}, {'?'}},
            /* <AE12> */ {{0xec}, {'^'}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'y'}, {'Y'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{0xe8}, {0xe9}},
            /* <AD12> */ {{'+'}, {'*'}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{0xf2}, {0xe7}},
            /* <AC11> */ {{0xe0}, {0xb0}},
            /* <BKSL> */ {{0xf9}, {0xa7}},
    
            // Lower row
            /* <LSGT> */ {{'<'}, {'>'}},
            /* <AB01> */ {{'z'}, {'Z'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {';'}},
            /* <AB09> */ {{'.'}, {':'}},
            /* <AB10> */ {{'-'}, {'_'}}
    };

    // Russian (Russia)
    static const KbdKeyChar ru_RU[48][2] = {
            // Digits row
            /* <TLDE> */ {{0x451}, {0x401}},
            /* <AE01> */ {{'1'}, {'!'}},
            /* <AE02> */ {{'2'}, {'\"'}},
            /* <AE03> */ {{'3'}, {0x2116}},
            /* <AE04> */ {{'4'}, {';'}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {':'}},
            /* <AE07> */ {{'7'}, {'?'}},
            /* <AE08> */ {{'8'}, {'*'}},
            /* <AE09> */ {{'9'}, {'('}},
            /* <AE10> */ {{'0'}, {')'}},
            /* <AE11> */ {{'-'}, {'_'}},
            /* <AE12> */ {{'='}, {'+'}},
    
            // Upper row
            /* <AD01> */ {{0x439}, {0x419}},
            /* <AD02> */ {{0x446}, {0x426}},
            /* <AD03> */ {{0x443}, {0x423}},
            /* <AD04> */ {{0x43a}, {0x41a}},
            /* <AD05> */ {{0x435}, {0x415}},
            /* <AD06> */ {{0x43d}, {0x41d}},
            /* <AD07> */ {{0x433}, {0x413}},
            /* <AD08> */ {{0x448}, {0x428}},
            /* <AD09> */ {{0x449}, {0x429}},
            /* <AD10> */ {{0x437}, {0x417}},
            /* <AD11> */ {{0x445}, {0x425}},
            /* <AD12> */ {{0x44a}, {0x42a}},
    
            // Home row
            /* <AC01> */ {{0x444}, {0x424}},
            /* <AC02> */ {{0x44b}, {0x42b}},
            /* <AC03> */ {{0x432}, {0x412}},
            /* <AC04> */ {{0x430}, {0x410}},
            /* <AC05> */ {{0x43f}, {0x41f}},
            /* <AC06> */ {{0x440}, {0x420}},
            /* <AC07> */ {{0x43e}, {0x41e}},
            /* <AC08> */ {{0x43b}, {0x41b}},
            /* <AC09> */ {{0x434}, {0x414}},
            /* <AC10> */ {{0x436}, {0x416}},
            /* <AC11> */ {{0x44d}, {0x42d}},
            /* <BKSL> */ {{'\\'}, {'/'}},
    
            // Lower row
            /* <LSGT> */ {{'/'}, {'|'}},
            /* <AB01> */ {{0x44f}, {0x42f}},
            /* <AB02> */ {{0x447}, {0x427}},
            /* <AB03> */ {{0x441}, {0x421}},
            /* <AB04> */ {{0x43c}, {0x41c}},
            /* <AB05> */ {{0x438}, {0x418}},
            /* <AB06> */ {{0x442}, {0x422}},
            /* <AB07> */ {{0x44c}, {0x42c}},
            /* <AB08> */ {{0x431}, {0x411}},
            /* <AB09> */ {{0x44e}, {0x42e}},
            /* <AB10> */ {{'.'}, {','}}
    };

    // Dutch (Netherlands)
    static const KbdKeyChar nl_NL[48][2] = {
            // Digits row
            /* <TLDE> */ {{'@'}, {0xa7}},
            /* <AE01> */ {{'1'}, {'!'}},
            /* <AE02> */ {{'2'}, {'\"'}},
            /* <AE03> */ {{'3'}, {'#'}},
            /* <AE04> */ {{'4'}, {'$'}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'&'}},
            /* <AE07> */ {{'7'}, {'_'}},
            /* <AE08> */ {{'8'}, {'('}},
            /* <AE09> */ {{'9'}, {')'}},
            /* <AE10> */ {{'0'}, {'\''}},
            /* <AE11> */ {{'/'}, {'?'}},
            /* <AE12> */ {{0xb0}, {0x303, true}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'y'}, {'Y'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{0x308, true}, {0x302, true}},
            /* <AD12> */ {{'*'}, {'|'}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{'+'}, {0xb1}},
            /* <AC11> */ {{0x301, true}, {0x300, true}},
            /* <BKSL> */ {{'<'}, {'>'}},
    
            // Lower row
            /* <LSGT> */ {{']'}, {'['}},
            /* <AB01> */ {{'z'}, {'Z'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {';'}},
            /* <AB09> */ {{'.'}, {':'}},
            /* <AB10> */ {{'-'}, {'='}}
    };

    // Greek (Greece)
    static const KbdKeyChar el_GR[48][2] = {
            // Digits row
            /* <TLDE> */ {{'`'}, {'~'}},
            /* <AE01> */ {{'1'}, {'!'}},
            /* <AE02> */ {{'2'}, {'@'}},
            /* <AE03> */ {{'3'}, {'#'}},
            /* <AE04> */ {{'4'}, {'$'}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'^'}},
            /* <AE07> */ {{'7'}, {'&'}},
            /* <AE08> */ {{'8'}, {'*'}},
            /* <AE09> */ {{'9'}, {'('}},
            /* <AE10> */ {{'0'}, {')'}},
            /* <AE11> */ {{'-'}, {'_'}},
            /* <AE12> */ {{'='}, {'+'}},
    
            // Upper row
            /* <AD01> */ {{';'}, {':'}},
            /* <AD02> */ {{0x3c2}, {0x3a3}},
            /* <AD03> */ {{0x3b5}, {0x395}},
            /* <AD04> */ {{0x3c1}, {0x3a1}},
            /* <AD05> */ {{0x3c4}, {0x3a4}},
            /* <AD06> */ {{0x3c5}, {0x3a5}},
            /* <AD07> */ {{0x3b8}, {0x398}},
            /* <AD08> */ {{0x3b9}, {0x399}},
            /* <AD09> */ {{0x3bf}, {0x39f}},
            /* <AD10> */ {{0x3c0}, {0x3a0}},
            /* <AD11> */ {{'['}, {'{'}},
            /* <AD12> */ {{']'}, {'}'}},
    
            // Home row
            /* <AC01> */ {{0x3b1}, {0x391}},
            /* <AC02> */ {{0x3c3}, {0x3a3}},
            /* <AC03> */ {{0x3b4}, {0x394}},
            /* <AC04> */ {{0x3c6}, {0x3a6}},
            /* <AC05> */ {{0x3b3}, {0x393}},
            /* <AC06> */ {{0x3b7}, {0x397}},
            /* <AC07> */ {{0x3be}, {0x39e}},
            /* <AC08> */ {{0x3ba}, {0x39a}},
            /* <AC09> */ {{0x3bb}, {0x39b}},
            /* <AC10> */ {{0x301, true}, {0x308, true}},
            /* <AC11> */ {{'\''}, {'\"'}},
            /* <BKSL> */ {{'\\'}, {'|'}},
    
            // Lower row
            /* <LSGT> */ {{0xab}, {0xbb}},
            /* <AB01> */ {{0x3b6}, {0x396}},
            /* <AB02> */ {{0x3c7}, {0x3a7}},
            /* <AB03> */ {{0x3c8}, {0x3a8}},
            /* <AB04> */ {{0x3c9}, {0x3a9}},
            /* <AB05> */ {{0x3b2}, {0x392}},
            /* <AB06> */ {{0x3bd}, {0x39d}},
            /* <AB07> */ {{0x3bc}, {0x39c}},
            /* <AB08> */ {{','}, {'<'}},
            /* <AB09> */ {{'.'}, {'>'}},
            /* <AB10> */ {{'/'}, {'?'}}
    };

    // Danish (Denmark)
    static const KbdKeyChar da_DK[48][2] = {
            // Digits row
            /* <TLDE> */ {{0xbd}, {0xa7}},
            /* <AE01> */ {{'1'}, {'!'}},
            /* <AE02> */ {{'2'}, {'\"'}},
            /* <AE03> */ {{'3'}, {'#'}},
            /* <AE04> */ {{'4'}, {0xa4}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'&'}},
            /* <AE07> */ {{'7'}, {'/'}},
            /* <AE08> */ {{'8'}, {'('}},
            /* <AE09> */ {{'9'}, {')'}},
            /* <AE10> */ {{'0'}, {'='}},
            /* <AE11> */ {{'+'}, {'?'}},
            /* <AE12> */ {{0x301, true}, {0x300, true}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'y'}, {'Y'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{0xe5}, {0xc5}},
            /* <AD12> */ {{0x308, true}, {0x302, true}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{0xe6}, {0xc6}},
            /* <AC11> */ {{0xf8}, {0xd8}},
            /* <BKSL> */ {{'\''}, {'*'}},
    
            // Lower row
            /* <LSGT> */ {{'<'}, {'>'}},
            /* <AB01> */ {{'z'}, {'Z'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {';'}},
            /* <AB09> */ {{'.'}, {':'}},
            /* <AB10> */ {{'-'}, {'_'}}
    };

    // Finnish
    static const KbdKeyChar fi_FI[48][2] = {
            // Digits row
            /* <TLDE> */ {{0xa7}, {0xbd}},
            /* <AE01> */ {{'1'}, {'!'}},
            /* <AE02> */ {{'2'}, {'\"'}},
            /* <AE03> */ {{'3'}, {'#'}},
            /* <AE04> */ {{'4'}, {0xa4}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'&'}},
            /* <AE07> */ {{'7'}, {'/'}},
            /* <AE08> */ {{'8'}, {'('}},
            /* <AE09> */ {{'9'}, {')'}},
            /* <AE10> */ {{'0'}, {'='}},
            /* <AE11> */ {{'+'}, {'?'}},
            /* <AE12> */ {{0x301, true}, {0x300, true}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'y'}, {'Y'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{0xe5}, {0xc5}},
            /* <AD12> */ {{0x308, true}, {0x302, true}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{0xf6}, {0xd6}},
            /* <AC11> */ {{0xe4}, {0xc4}},
            /* <BKSL> */ {{'\''}, {'*'}},
    
            // Lower row
            /* <LSGT> */ {{'<'}, {'>'}},
            /* <AB01> */ {{'z'}, {'Z'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {';'}},
            /* <AB09> */ {{'.'}, {':'}},
            /* <AB10> */ {{'-'}, {'_'}}
    };

    // Portuguese (Portugal)
    static const KbdKeyChar pt_PT[48][2] = {
            // Digits row
            /* <TLDE> */ {{'\\'}, {'|'}},
            /* <AE01> */ {{'1'}, {'!'}},
            /* <AE02> */ {{'2'}, {'\"'}},
            /* <AE03> */ {{'3'}, {'#'}},
            /* <AE04> */ {{'4'}, {'$'}},
            /* <AE05> */ {{'5'}, {'%'}},
            /* <AE06> */ {{'6'}, {'&'}},
            /* <AE07> */ {{'7'}, {'/'}},
            /* <AE08> */ {{'8'}, {'('}},
            /* <AE09> */ {{'9'}, {')'}},
            /* <AE10> */ {{'0'}, {'='}},
            /* <AE11> */ {{'\''}, {'?'}},
            /* <AE12> */ {{0xab}, {0xbb}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'y'}, {'Y'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{'+'}, {'*'}},
            /* <AD12> */ {{0x301, true}, {0x300, true}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{0xe7}, {0xc7}},
            /* <AC11> */ {{0xba}, {0xaa}},
            /* <BKSL> */ {{0x303, true}, {0x302, true}},
    
            // Lower row
            /* <LSGT> */ {{'<'}, {'>'}},
            /* <AB01> */ {{'z'}, {'Z'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {';'}},
            /* <AB09> */ {{'.'}, {':'}},
            /* <AB10> */ {{'-'}, {'_'}}
    };

    // Czech
    static const KbdKeyChar cs_CZ[48][2] = {
            // Digits row
            /* <TLDE> */ {{';'}, {0x30a, true}},
            /* <AE01> */ {{'+'}, {'1'}},
            /* <AE02> */ {{0x11b}, {'2'}},
            /* <AE03> */ {{0x161}, {'3'}},
            /* <AE04> */ {{0x10d}, {'4'}},
            /* <AE05> */ {{0x159}, {'5'}},
            /* <AE06> */ {{0x17e}, {'6'}},
            /* <AE07> */ {{0xfd}, {'7'}},
            /* <AE08> */ {{0xe1}, {'8'}},
            /* <AE09> */ {{0xed}, {'9'}},
            /* <AE10> */ {{0xe9}, {'0'}},
            /* <AE11> */ {{'='}, {'%'}},
            /* <AE12> */ {{0x301, true}, {0x30c, true}},
    
            // Upper row
            /* <AD01> */ {{'q'}, {'Q'}},
            /* <AD02> */ {{'w'}, {'W'}},
            /* <AD03> */ {{'e'}, {'E'}},
            /* <AD04> */ {{'r'}, {'R'}},
            /* <AD05> */ {{'t'}, {'T'}},
            /* <AD06> */ {{'z'}, {'Z'}},
            /* <AD07> */ {{'u'}, {'U'}},
            /* <AD08> */ {{'i'}, {'I'}},
            /* <AD09> */ {{'o'}, {'O'}},
            /* <AD10> */ {{'p'}, {'P'}},
            /* <AD11> */ {{0xfa}, {'/'}},
            /* <AD12> */ {{')'}, {'('}},
    
            // Home row
            /* <AC01> */ {{'a'}, {'A'}},
            /* <AC02> */ {{'s'}, {'S'}},
            /* <AC03> */ {{'d'}, {'D'}},
            /* <AC04> */ {{'f'}, {'F'}},
            /* <AC05> */ {{'g'}, {'G'}},
            /* <AC06> */ {{'h'}, {'H'}},
            /* <AC07> */ {{'j'}, {'J'}},
            /* <AC08> */ {{'k'}, {'K'}},
            /* <AC09> */ {{'l'}, {'L'}},
            /* <AC10> */ {{0x16f}, {'\"'}},
            /* <AC11> */ {{0xa7}, {'!'}},
            /* <BKSL> */ {{0x308, true}, {'\''}},
    
            // Lower row
            /* <LSGT> */ {{'\\'}, {'|'}},
            /* <AB01> */ {{'y'}, {'Y'}},
            /* <AB02> */ {{'x'}, {'X'}},
            /* <AB03> */ {{'c'}, {'C'}},
            /* <AB04> */ {{'v'}, {'V'}},
            /* <AB05> */ {{'b'}, {'B'}},
            /* <AB06> */ {{'n'}, {'N'}},
            /* <AB07> */ {{'m'}, {'M'}},
            /* <AB08> */ {{','}, {'?'}},
            /* <AB09> */ {{'.'}, {':'}},
            /* <AB10> */ {{'-'}, {'_'}}
    };
}

/* @SKIP */
KeyboardLayoutPointer getLayout(std::string layoutName) {
    if (layoutName == "en_US") return layouts::en_US;
    if (layoutName == "en_GB") return layouts::en_GB;
    if (layoutName == "es_ES") return layouts::es_ES;
    if (layoutName == "es_MX") return layouts::es_MX;
    if (layoutName == "fr_FR") return layouts::fr_FR;
    if (layoutName == "fr_CH") return layouts::fr_CH;
    if (layoutName == "de_DE") return layouts::de_DE;
    if (layoutName == "de_CH") return layouts::de_CH;
    if (layoutName == "it_IT") return layouts::it_IT;
    if (layoutName == "ru_RU") return layouts::ru_RU;
    if (layoutName == "nl_NL") return layouts::nl_NL;
    if (layoutName == "el_GR") return layouts::el_GR;
    if (layoutName == "da_DK") return layouts::da_DK;
    if (layoutName == "fi_FI") return layouts::fi_FI;
    if (layoutName == "pt_PT") return layouts::pt_PT;
    if (layoutName == "cs_CZ") return layouts::cs_CZ;
    else {
        return nullptr;
    }
}
/* @/SKIP */