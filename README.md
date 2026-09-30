# AtCoder 競技プログラミング環境

このリポジトリは、PCを替えても同じツールと言語環境をすぐ使えるようにするための開発環境です。DockerとVisual Studio Codeを使い、OSごとの差をコンテナー内に閉じ込めます。

## 初回セットアップ

1. Docker Desktop（Windows / macOS）または Docker Engine（Linux）をインストールします。
2. Visual Studio Code と **Dev Containers** 拡張機能をインストールします。
3. このリポジトリをクローンしてVS Codeで開きます。
4. コマンドパレットから **Dev Containers: Reopen in Container** を実行します。初回はイメージのビルドに数分かかります。
5. コンテナーのターミナルで `source ~/.bashrc` を実行するか、ターミナルを開き直すとコマンドエイリアスが使えます。

Dockerfileを変更した後は **Dev Containers: Rebuild Container** を実行してください。Codespacesは必須ではありません。

## 環境

- C++23（GCC 15 系、AtCoder Library）
- PyPy 3.11-v7.3.20（既定の `python` / `python3`）
- CPython 3.13.7（`python3.13`、uv管理）
- Pythonパッケージ管理（uv）
- `oj`（online-judge-tools 公式 v12.0.0）、`acc`（atcoder-cli）、`aclogin`
- `acc add`でC++ (`main.cpp`) とPython (`main.py`) の両方を既定で生成

## コンテスト参加

認証、問題取得、サンプルテスト、提出の流れは[コンテスト参加の流れ](docs/contest-workflow.md)を参照してください。
