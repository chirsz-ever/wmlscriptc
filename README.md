# wmlscriptc

Compiler and disassembler for WMLScript.

The code is taken from [the Kannel project](https://www.kannel.org) at SVN revision 5336. Files in `wmlscriptc`
directory are unmodified. With some adaptation work and the meson scripts, it can be built easily.

The building process is as follows:

```sh
meson setup build
meson compile -C build
```

The produced binaries are `build/wmlscript/wmlsc` and `build/wmlscript/wmlsdasm`. You can run `meson install -C build`
to install them to your system.

Files from the Kannel project are licensed under [the original license](https://www.kannel.org/license.shtml), and other
files are licensed under the [the 2-clause BSD License](LICENSE).

This product includes software developed by the Kannel Group (<http://www.kannel.org/>).
