6 keys keyboard firmware
======================

A mini keyboard for audio :
 - volume control : ⬆️ 🔇 ⬇️
 - tracks control : ⏮️ ⏯️ ⏭️

It works without driver on Windows, GNU/Linux & Mac Os X.

## Layout

    ,--------------.
    |VOLD|MUTE|VOLU|
    |--------------|
    |MPRV|MPLY|MNXT
    `--------------'

Keys are configured in `keymap_pocker.c` and cols/row are defined in `matrix.c`.

## Build

### Dependencies

`sudo apt-get install gcc-avr avr-libc`

You’ll also need [Teensy Loader](https://www.pjrc.com/teensy/loader_linux.html) to upload hex file to teensy.


From this directory, run `make -f Makefile`.

Open then Teensy Loader and flash `gh60_lufa.hex`.

## Keymap

 - Row is connected to F0 F1
 - Cols are connected to F7  B6  B5

## Resources

  * [How to build your very own keyboard firmware](https://deskthority.net/viewtopic.php?f=7&t=7177&start=#p141386)
  * [Assembly hand wired guide (pdf)](https://atreus.technomancy.us/assembly-hand-wired.pdf)
  * [Conception et réalisation d’un clavier mécanique ergonomique](https://beastie.lesfurets.com/articles/conception-realisation-dun-clavier-mecanique-ergonomique)
