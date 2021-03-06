GBT PLAYER  v3.0.4
==================

A music player library and converter kit for Game Boy that can be used with
[RGBDS](https://github.com/bentley/rgbds).

Licensed under the 2-clause BSD license.

Copyright (C) 2009-2016 Antonio Niño Díaz.

All rights reserved.

Email: antonio_nd@outlook.com

Web:

[http://antoniond_blog.drunkencoders.com/](http://antoniond_blog.drunkencoders.com/)

[http://antoniond.drunkencoders.com/](http://antoniond.drunkencoders.com/)

Latest version:

[https://github.com/AntonioND/gbt-player](https://github.com/AntonioND/gbt-player)

Introduction
------------

GBT Player is a music creation environment for GB and GBC. It is composed by
mod2gbt, which converts a mod file into a gbt (GameBoy Tracker) file, and gbt
player, which will be used to play that song in the GB. It's the same idea as
the old Lemon player, but greatly improved.

mod2gbt is writen in C, and should compile in every machine where you can code
in C.

GBT Player is writen in 100% assembly. That means that it is FAST, it won't need
a lot of CPU time (around 7%?), and you will have a lot of time for your game
logic. There is source code for RGBDS, the main option for GameBoy development
(in my opinion).

GBT Player is open source, and it is licensed under the BSD license. That means
that you can use and modify it but you have to give credit for the original
work. It would be nice to you tell me if you use it, anyway. :)

IMPORTANT NOTE: Version 1.x.x converted songs won't work with player version
2.0.0 or higher. The same happens with 2.x.x and version 3.0.0. They have to be
converted again.

How to compile the example
--------------------------

Compile mod2gbt. In Windows you can use a command line like :
`gcc -o mod2gbt.exe mod2gbt`.

A bash script for Linux has been included in case you are feeling lazy.

Put rgbasm, rgbfix and rgblink in the gbt-player folder and double clic the
bat/sh file in the rbgds_example folder. A compiled GB binary is included.

Notes
-----

A nice tracker to modify the mod file is OpenMPT. You can download it here:

[http://openmpt.org/](http://openmpt.org/)

I don't use bat or sh files in my projects, I use makefiles, but I thought that
the examples would be too simple for a makefile to be useful.

instr_test.gb is a sample of the default sounds.

range_test.gb is just a test of what notes the GB can reach (C3 - B8).

effects_test.gb tests arpeggio and "cut note" effects.

The mod file isn't 100% accurate. Sounds are a bit different from the real ones,
so you should make roms and test them in emulators or real GB often.

When creating REALLY BIG ROMs (more than 4 MBytes), the define
GBT_USE_MBC5_512BANKS in gbt_player.inc should be uncommented to allow
allocation of the music data in banks higher than 255. Also, songs must be
converted adding -512-banks to the mod2gbt command line.

If you don't like the speed convertion done by mod2gbt (from 50 Hz to 60 Hz) you
can use the -speed argument for mod2gbt. Speed will be faster and it will
probably have to be adjusted manually.

The initial speed of the song is set by the start function, and it will run at
that speed until it finds a change speed command in the song. If the first step
of your song takes forever, this is the reason.

GBDK notes
----------

GBDK: [http://gbdk.sourceforge.net/](http://gbdk.sourceforge.net/)

GBDK default assembler (as-gbz80) is no longer supported. RGBDS must be used,
and I don't really know if it will work with latest RGBDS version. Adding
"-W--asm=rgbds" to the command line when compiling GBDK code MAY make it work.

Since new functionality needs advanced macros like BANK(), which are only
supported by RGBDS, the GBDK version is discontinued. The latest version that
can be used with GBDK default assembler (2.1.1) is in the folder "legacy_gbdk",
as well as the corresponding converter. I don't really know if the same effect
can be obtained with as-gbz80. If it can be done, open an issue and I may update
GBDK version again.

Reading related to bank switching:
[http://antoniond_blog.drunkencoders.com/?p=392] (http://antoniond_blog.drunkencoders.com/?p=392)

To compile the GBDK example: Open the bat file, change it to set the correct
path to your lcc binary and double clic the bat.

Changelog
---------

* Version 3.0.4 (2016/4/5)
    - Code reorganized and added license notices to source files.

* Version 3.0.3 (2016/2/6)
    - Code reorganized to fit in 80 columns.

* Version 3.0.2 (2015/5/3)
    - Corrected tabulations in RGBDS code.

* Version 3.0.1 (2015/4/27)
    - Replaced tabs by spaces in asm code.

* Version 3.0.0 (2015/4/22)
    - Added support for multiple bank songs.
    - GBDK default assembler (as-gbz80) version discontinued. Version 2.1.1 will
      be kept in case someone wants to use it.
    - Previously converted songs must be converted again.
    - gbt_play() registers used for arguments have changed a bit.

* Version 2.1.1 (2015/4/7)
    - Simplified GBDK example because it was confusing a lot of people...

* Version 2.1.0 (2014/5/24)
    - Fixed arpeggio effect. Now it keeps looping until tick = 0 (previously it
      only looped once). Loops 3 steps, not 4.
    - Added "Cut Note" effect.
    - Effects optimizations.

* Version 2.0.1 (2014/5/23)
    - Fixed effects in channels 1, 2 and 3 in GBDK version.

* Version 2.0.0 (2014/5/22)
    - Rewritten library and converter.
    - Arpeggio effect added.
    - Song size should be reduced to about 60-75% (but it can go as high as 150%
      if it uses effects all time in all channels).
    - Old converted song data won't work, songs have to be converted again.

* Version 1.2.1 (2014/5/15)
    - Fixed Bnn command.

* Version 1.2 (2014/5/1)
    - Fixed lots of things regarding the mod file template and mod2gbt, the
      converter. Old songs won't be converted right with this new version. You
      should copy pattern data into the new mod template and transpose it 17
      semitones to make it work again.
    - Fixed a typo in a variable name.

* Version 1.1 (2013)
    - Fixed definitions for enabling and disabling channels.
    - Changed email address.

* Version 1.0 (2009)
    - Initial release

To Do
-----

- Store channel 3 samples in RAM to be able to change them in execution time by
  the user?
- End song callback? Special effect for callback? To synchronize game events or
  things like that.
- WLA-DX version.

Known bugs
----------

- Effect Dxx, when used the last step of a pattern, will jump 2 patterns instead
  of 1.

License
-------

Copyright (c) 2009-2016, Antonio Niño Díaz (AntonioND)
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

