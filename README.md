# dwmblocks

Modular status bar for dwm written in c.

# modifying blocks

The statusbar is made from text output from commandline program. Blocks are
added and removed by editing the blocks.h header file.

# signaling changes

Most statusbars constantly rerun every script every serveral seconds to update.
This is an option here but a superior choice is giving your module a signal
that you can signal to it to update on a relevant event, rather than having it
rerun idly.

For example, a block has the update signal 10. Thus, running
`pkill -RTMIN+10 dwmblocks' will update it.

Note that all modules must have different signal numbers.
