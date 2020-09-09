#include "VLA.h"

//必须使用初始化列表来初始化 m_len
VLA::VLA(int len) : m_len(len) {
    m_arr = new int[len];
}