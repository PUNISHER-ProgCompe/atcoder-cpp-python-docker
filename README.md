# atcoder-cpp-python-docker
atcoderのローカル環境をVSCodeのdevcontainer機能を使ってちゃちゃっと作るためのファイル群

## 使用ツール
- Docker Desktop for Windows
- Visual Studio Code (以下VSCode)

## 環境構築手順
- Docker Desktop for Windows をインストールします
    - 参考
        - https://www.kagoya.jp/howto/cloud/container/dockerdesktop/
    - Docker Hub のアカウントが必要です
        - 参考 : https://zenn.dev/seiya0/articles/tech-docker-desktop-for-win-install

- VSCode をインストールします
    - 拡張機能「Remote Development」をインストールします

- このリポジトリをダウンロードして、お好きなフォルダに配置します

- ダウンロードしたフォルダをVSCodeで開きます

- Ctrl + Shift + P でコマンドパレットを開き、Rebuild and Reopen in containerでコンテナを開く

## 使用可能なプログラミング言語
C++, Python

### 詳細
atcoderで使える言語セット（参考 : https://img.atcoder.jp/file/language-update/language-list.html ）
に準拠しています

C++ 23 (gcc 12.2)

Python (CPython 3.11.4)

## 競プロでの使い方
編集中