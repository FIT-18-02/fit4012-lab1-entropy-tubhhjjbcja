# Test cases – FIT4012 Lab 1

Đánh dấu [x] khi đã chạy và kiểm tra kết quả.

## 1. Entropy / Redundancy
- [X] Input: `aaaa` -> entropy thấp, redundancy cao
- [X] Input: `abcd` -> entropy cao hơn `aaaa`
- [X] Input: `hello world` -> entropy và redundancy được tính hợp lệ

## 2. Modulo inverse
- [X] `a=3, m=7` -> nghịch đảo modulo là 5
- [X] `a=10, m=17` -> nghịch đảo modulo là 12
- [X] `a=6, m=9` -> không tồn tại nghịch đảo modulo

## 3. Ghi chú
Nhóm bổ sung thêm test để kiểm tra các trường hợp entropy thấp, entropy cao và trường hợp không tồn tại nghịch đảo modulo.
