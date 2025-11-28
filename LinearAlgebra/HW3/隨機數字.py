import numpy as np

# 設置矩陣維度
ROWS = 50
COLS = 50

# ----------------------------------------------------
# 1. 生成隨機矩陣 (元素範圍在 -100 到 100 之間)
# ----------------------------------------------------
# 使用 np.random.randint 生成整數以確保可讀性，如果需要浮點數可以改用 np.random.uniform
matrix = np.random.randint(low=-100, high=101, size=(ROWS, COLS))

# ----------------------------------------------------
# 2. 寫入 CSV 檔案，符合您的 C++ 程式讀取格式
#    (每列是一個 ROW，元素間用逗號分隔)
# ----------------------------------------------------
filename = "matrix.csv"

with open(filename, 'w') as f:
    
    for row in matrix.T: 
        # 將該行所有元素轉換為字串，用逗號連接
        row_str = ",".join(map(str, row))
        f.write(row_str + "\n")

print(f"✅ 已成功生成 {ROWS}x{COLS} 的隨機矩陣並保存至 '{filename}'")
print(f"請將此 Python 腳本生成的 matrix.csv 檔案放在您的 C++ 執行目錄中。")