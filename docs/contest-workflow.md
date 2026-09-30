# AtCoder コンテスト参加の流れ

このページでは、開発コンテナーを起動してから、問題を解いて提出するまでの基本操作をまとめます。

## 1. 初回だけ行う AtCoder 認証

AtCoderのCAPTCHA認証が表示された場合、CLIの自動ログインでは認証できないことがあります。普段使っているブラウザーで手動ログインし、そのセッションCookieを開発コンテナーに設定します。`oj` は公式リポジトリの v12.0.0 を使用します。

1. ブラウザーで [AtCoder](https://atcoder.jp/) にログインし、CAPTCHAが表示されたらブラウザー上で完了させます。
2. 開発者ツール（Chrome / Edgeは `F12` または `Ctrl+Shift+I`）を開きます。
3. **Application → Storage → Cookies → https://atcoder.jp** から `REVEL_SESSION` の **Value** をコピーします。
4. コンテナーのターミナルで `aclogin --tools oj acc` を実行し、表示されたプロンプトにコピーした値を貼り付けて Enter を押します。

   ```bash
   aclogin --tools oj acc
   ```

   `aclogin` の入力欄では貼り付けた値が表示されます。ターミナルの共有・録画中は入力しないでください。CAPTCHA自体を自動化するものではありません。

5. 認証状態を確認します。

   ```bash
   acc session
   oj-api login-service https://atcoder.jp/ --check
   ```

## 2. コンテスト用ディレクトリと問題の取得

```bash
acc new abcXXX
cd abcXXX
acc add
```

`abcXXX` は参加するコンテストID（例: `abc426`）に置き換えます。`acc new` でコンテスト用ディレクトリを作成し、`acc add` で問題を追加すると、既定の `cpp-python` テンプレートから `main.cpp` と `main.py` の両方が問題ディレクトリに作られます。使う言語のファイルだけを編集してください。C++のみ、またはPythonのみのテンプレートを使う場合は`acc add --template cpp`または`acc add --template python`を指定できます。

## 3. コード作成とサンプルテスト

問題ディレクトリで `main.cpp` または `main.py` を編集します。次のエイリアスでサンプルを実行できます。

| コマンド | 実行内容 |
| --- | --- |
| `ojcpp` | C++23で `main.cpp` をコンパイルしてテスト |
| `ojpy` | `pypy3 main.py` でテスト |
| `ojcpy` | `python3.13 main.py` でテスト |

エイリアスを使わない場合は `oj t -c '<実行コマンド>'` を使います。サンプル通過後も境界値や制約の最大値を確認してください。

## 4. 提出

問題ディレクトリから提出し、対象問題と言語を確認します。

```bash
acc submit main.cpp
```

Pythonの場合:

```bash
acc submit main.py
```

提出確認に応答後、AtCoderの提出結果ページまたは `acc` の表示で判定を確認します。

## 5. 認証情報の管理

- `REVEL_SESSION` と `session.json` はパスワード同様の秘密情報です。チャット、スクリーンショット、GitHub、ソースコードに貼らないでください。
- `aclogin` はコンテナーのホームディレクトリに `oj` のCookie jarと `acc` の `session.json` を保存します。リポジトリ外ですが、コンテナー内で動くコードは同じユーザー権限で読めます。信頼できないコードを実行する環境にはCookieを登録しないでください。
- コンテナーの停止・再起動ではCookieは残ります。コンテナーを再構築するとホームディレクトリは作り直され、Cookieも消えます。使わなくなったセッションはAtCoder側で失効させてください。
- Codespaces Secretsを使っても、秘密値は環境変数としてコンテナー内のプロセスから参照可能です。Codespacesは必須ではありません。
- 解答やテストデータをGitHubにpushするときは、AtCoderのルールと公開方針を確認してください。
