# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
 mục tiêu của bài lab: tìm hiểu cách tính entropy, độ dư thừa thông tin và cách tìm nghịch đảo modulo.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0 | 8 | Entropy thấp, redundancy cao |
| abcd | 2 | 6 | Entropy cao hơn aaaa |
| hello world | 2.84535 | 5.15465 | Kết quả tính hợp lệ |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Không tồn tại |

## 4. Kết luận
Qua bài lab, em hiểu cách tính entropy của chuỗi ký tự, cách suy ra độ dư thừa thông tin, và biết áp dụng thuật toán Euclid mở rộng để tìm nghịch đảo modulo.
