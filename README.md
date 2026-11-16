# ImageDatabase

A WIP decompilation of `imgdb`, the Nintendo 3DS ImageDatabase library.

All files were generated from debug information encoded in The Amazing
Spider-Man (2012)'s debug `.axf`. The initial code was split out of the
[Animal Crossing: New Leaf](https://github.com/AlgebraManiacABC/acnlwa-decomp)
decomp, where it was matched against that game's USA v1.4 `code.bin`.

Notably, `imgdb` does not appear in the "plain.bin" of any 3ds game.
Thus, there are not yet any particular versions identified. We are on the
lookout for variants of this library; if you find any, please notify us.

## Layout

| Path | Contents |
|------|----------|
| `Core/`, `ImageIO/` | One translation unit per class |
| `imgdb.h` | The whole library in one header: `#include <imgdb.h>` |

imgdb builds on the `nn` SDK. Your project supplies those headers, reachable
as `nn/...` through `NN_INCLUDE_DIR`. Specifically, this library uses
`nn/util/ADLFireWall/NonCopyable.h` and `nn/crypto/HashContextBase.h`.

## Using it with 3dsd

Add the repository as a submodule under `deps/`:

```sh
git submodule add https://github.com/ctrdecomp/ImageDatabase.git deps/ImageDatabase
```

and declare it in `cc.yaml`:

```yaml
dependencies:
  ImageDatabase:
    sources: [src] # imgdb-relative
    include: [include] # imgdb-relative
    "*":
      cc: <compiler_here>
      flags: [<flags you want go here>]

code.bin:
  dependencies: [ImageDatabase]
```

Sources build with the project's `default:` compiler and flags unless
specified in the dependency's section of `cc.yaml`.
Each binary's `symbols/` CSV must use imgdb's mangled names (`_ZN5imgdb...`)
where those functions are found in order to count them.

## License

CC0 1.0 Universal.
