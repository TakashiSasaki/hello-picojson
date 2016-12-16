# picojsonを使ってみた
最近あまりC++を使っていなかったのだけど、JSON文書を処理する必要が出てきたので。ヘッダファイルだけで使えるので便利。
ストリームを直接渡してパースで切るっぽいけど今回はあえて一つのstd::stringオブジェクトにして渡してみた。

# 読み込みたかったJSON文書
グラフ構造を作って遊びたいのだけど、グラフィカルにグラフを作れるUIを作るのは面倒。
ブラウザ上でできればいいなと思って探していたら、
[Interactive tool for creating directed graphs, created using d3.js. by Colorado Reed](https://bl.ocks.org/cjrd/6863459)を見つけた。
グラフを書くとJSONでダウンロードできる。で、それでboostのグラフライブラリ使って遊びたい。
