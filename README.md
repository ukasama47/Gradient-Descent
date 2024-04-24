# 最急降下法による関数の最小化

## 課題1: 𝑓(𝑥) = 𝑥^2 + 𝑥 + 1

### 初期設定
- 初期値: 𝑥 = 2.0
- 学習率: 𝛼 = 0.1
- 終了条件: 勾配の絶対値が 0.0001 未満
- 最大反復回数: 𝑛 = 500

### 実行結果
| ステップ番号 | 𝑥の値 | 𝑓(𝑥)の値 | 勾配の値 |
|--------------|--------|------------|----------|
| 1            | 2.0    | 7.0        | 5.0      |
| 2            | 1.5    | 4.25       | 3.0      |
| 3            | 1.2    | 3.44       | 2.2      |
| ...          | ...    | ...        | ...      |
| 35           | -0.25  | 0.4375     | -0.5     |
| 36           | -0.3   | 0.49       | -0.6     |
| 37           | -0.35  | 0.5425     | -0.7     |

最終的な解: 𝑥 = -0.35

## 課題2: 𝑓(𝑥) = cos(𝑥)

### 初期設定
- 初期値: 𝑥 = 2.0
- 学習率: 𝛼 = 0.1
- 終了条件: 勾配の絶対値が 0.0001 未満
- 最大反復回数: 𝑛 = 500

### 実行結果
| ステップ番号 | 𝑥の値   | 𝑓(𝑥)の値 | 勾配の値       |
|--------------|----------|------------|----------------|
| 1            | 2.0      | -0.4161    | -0.9093        |
| 2            | 2.0909   | -0.4465    | -0.8692        |
| 3            | 2.1814   | -0.4756    | -0.8290        |
| ...          | ...      | ...        | ...            |
| 12           | 2.4257   | -0.5231    | -0.6070        |
| 13           | 2.4861   | -0.5277    | -0.5880        |
| 14           | 2.5453   | -0.5320    | -0.5693        |

最終的な解: 𝑥 = 2.5453