macos (m1) 上でlibmosquittoで遊ぶ.


# requirements

cmake, opensslとcunitをインストール.

```
brew install openssl cunit
```

環境変数を設定.

```
set -x OPENSSL_ROOT_DIR (brew --prefix openssl)
```

# ビルド & 実行

```
cmake .; and make; and ./example
```
