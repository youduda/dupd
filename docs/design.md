
Design Choices
==============

This page documents the various design choices that shape `dupd` (at a more
detailed level than the [dupd goals](index.md)).


Duplicate info is more useful when saved for reuse
--------------------------------------------------

A central assumption in `dupd` is that the duplicate info found during a scan
is most useful when saved into a format which can be reused by subsequent
operations. This makes `dupd` different from most other duplicate finders
which simply output the list of duplicates into a file or stdout.

Nearly all the `dupd` operations (beyond scan) are built to use the saved data.

Refer to the [Finding duplicates the dupd way](examples.md) page for examples.

The scan operation creates an SQLite database where the duplicate info
is stored. The default location is `$HOME/.dupd_sqlite`. A different location
can be specified with the `--db` option.

### To override

The `--nodb` option disables the database generation. In this case
`dupd` will behave similar to other tools such as `fdupes` and
`jdupes` and simply print out the list of duplicates to stdout.

*This is very much not recommended*. As noted, it disables most of the useful
functionality of `dupd`. But if you wanted to, you could.


Assume SSD
----------

As documented in the [performance page](performance.md), `dupd` assumes files
are stored on an SSD and optimizes for this scenario.

### To override

The `-D` or `--hdd` option selects the HDD mode which is usually substantially
faster on a HDD (but see discussion on [performance page](performance.md)).

While I do regularly test the HDD mode, personally nearly all my real
world usage of `dupd` is with the SSD mode so it is possible there may
be more bugs in the HDD mode. If so please let me know and file a bug!


Hard links are duplicates
-------------------------

Are hard links duplicates or not?  The answer depends on "what do you
mean by duplicates?" and "what are you trying to do?"

If your primary goal for removing duplicates is to save disk space
then it makes sense to ignore hardlinks.  If, on the other hand, your
primary goal is to reduce filesystem clutter then it makes more sense
to think of hardlinks as duplicates.

By default `dupd` considers hardlinks to be duplicates. There is no strong
technical reason for this, it is just my personal preference.

### To override

The `-I` or `--hardlink-is-unique` option changes this default.

This option can be given either during scan or to the interactive
reporting commands (file, ls, uniques, dups), but not both.


Hidden files are ignored
------------------------

By default `dupd` ignores hidden files and hidden directories (thus,
all files under hidden directories). Because they often contain bookkeeping
files of the sort that end up causing lots of uninteresting duplicates,
I prefer to ignore these.

### To override

The `--hidden` option causes `dupd` to scan all hidden files and
traverse hidden directories.



Empty files are ignored
-----------------------

All empty (zero length) files are of course duplicates of each other.
This isn't very interesting so `dupd` ignores empty files. Only files
with one byte or more are scanned (one byte files aren't that interesting
either so perhaps the default should be larger, but I've kept it as 1).

### To override

The `--minsize` option can be set to zero if for some reason you really
wanted to include empty files. Note that you'll need to specify `--minsize 0`
both during scan and report if you want them included in the report.

A better way would be to run `find . -size 0` instead, it'll be much faster!


Symlinks are ignored
--------------------

`dupd` never follows symbolic links.

There is no option to override this, it wouldn't make sense.


---
[Back to the dupd documentation index](index.md)


