In penance for cracking [stupid jokes on Twitter](https://twitter.com/littlecalculist/status/231011706380374016), here's my Emacs cheat sheet. Emacs has a steep learning curve, so I've tried to order them by importance so you could learn them in stages.

One overall rule of thumb: pay attention to the minibuffer (the line at the bottom of the editor). It will often guide you through a process, and also gives you hints about what state you're in, such as the middle of a multi-chord sequence.

The other rule of thumb: when in doubt, **C-g** it out.

# Basics (mandatory)

You simply can't get by without having these at your fingertips.

  * **C-x C-c** - quit
  * **C-x C-s** - save buffer
  * **C-x C-f** - open file
  * **C-x b** *buffer name* - switch to open buffer
  * **C-g** - cancel
  * **C-x k** - close current buffer
  * **C-h a** *command name* - look up docs for command
  * **M-x** *command name* - execute command
  * **C-x u** - undo
  * **C-/** - undo

# Getting around (really useful, worth learning)

## Navigation

  * **C-a** - beginning of line
  * **C-e** - end of line
  * **C-f** - forward character
  * **C-b** - backward character
  * **C-p** - down a line
  * **C-n** - up a line

  * **M-f** - forward word
  * **M-b** - backward word

  * **S-**_any of the above_ - navigate and select
  * **C-space** - start selection

## Cutting and pasting

  * **C-w** - cut
  * **C-y** - paste

## Search and replace

  * **C-s** - search
  * **M-%** - search and replace

# More advanced editing

## Deletion and cutting

  * **C-d** - delete character ahead
  * **M-d** - delete word ahead
  * **backspace** - delete character behind
  * **M-backspace** - delete word behind
  * **C-k** - cut from cursor to end of line

## Insertion

  * **C-o** - insert newline after cursor

## Frames

  * **C-x 2** - split window horizontally
  * **C-x 3** - split window vertically
  * **C-x 1** - unsplit window
  * **C-x o** - switch to other pane in split window

## Tricks

  * **M-q** - auto-hard-wrap current paragraph
  * **C-t** - swap the two characters at the cursor
  * **M-u** - uppercase the word at the cursor
  * **M-l** - lowercase the word at the cursor
  * **C-u** *n* *char* - insert *n* copies of *char*

# Power tools

  * **M-x** replace-regexp - search and replace by regexp (the quoting/escaping is so weird that this always takes me several tries)
  * **C-r t** - "string-rectangle" (this one's really weird but super useful sometimes; look up the docs)
