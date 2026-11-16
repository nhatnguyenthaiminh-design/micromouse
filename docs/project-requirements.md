# Project Requirements - Micromouse Simulator

## Bài toán

Xây dựng phần mềm Micromouse Simulator cho phép mô phỏng robot di chuyển trong mê cung 16 x 16: quản lý mê cung, robot, thuật toán tìm đường và hiển thị quá trình mô phỏng.

## Yêu cầu chức năng (FR)

| Mã | Yêu cầu |
|----|---------|
| FR01 | Khởi tạo mê cung |
| FR02 | Thiết lập vị trí xuất phát |
| FR03 | Thiết lập vị trí đích |
| FR04 | Quản lý vị trí và hướng robot |
| FR05 | Mô phỏng cảm biến tường |
| FR06 | Tìm kiếm đường đi |
| FR07 | Mô phỏng robot di chuyển |
| FR08 | Hiển thị quá trình mô phỏng |
| FR09 | Lưu và nạp dữ liệu mê cung |
| FR10 | Hiển thị kết quả mô phỏng |

## Yêu cầu phi chức năng (NFR)

| Mã | Yêu cầu |
|----|---------|
| NFR01 | Chương trình được phát triển bằng C++17 trở lên |
| NFR02 | Mã nguồn có cấu trúc module rõ ràng |
| NFR03 | Chương trình có thể biên dịch bằng CMake |
| NFR04 | Thuật toán độc lập với công nghệ hiển thị |
| NFR05 | Có khả năng kiểm thử từng module |
| NFR06 | Có khả năng mở rộng môi trường hiển thị 3D/VR |
| NFR07 | Có tài liệu hướng dẫn xây dựng và sử dụng |

## Product Backlog

| ID | Công việc | Ưu tiên | Trạng thái |
|----|-----------|---------|------------|
| US01 | Khởi tạo dự án C++ | Cao | Done |
| US02 | Thiết lập Git Repository | Cao | To Do |
| US03 | Thiết kế dữ liệu mê cung | Cao | To Do |
| US04 | Xây dựng mô hình robot | Cao | To Do |
| US05 | Xây dựng thuật toán tìm đường | Cao | To Do |
| US06 | Xây dựng giao diện mô phỏng | Cao | To Do |

## Phân công nhóm

| Thành viên | Vai trò | Công việc |
|------------|---------|-----------|
| Thành viên 1 | Project Lead | Quản lý tiến độ, yêu cầu |
| Thành viên 2 | Developer | Khởi tạo cấu trúc dự án |
| Thành viên 3 | Developer | Xây dựng chương trình C++ |
| Thành viên 4 | Tester/Integration | Kiểm tra và tích hợp |
